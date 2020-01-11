/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (testabilitydriver@nokia.com)
**
** This file is part of Testability Driver.
**
** If you have questions regarding the use of this file, please contact
** Nokia at testabilitydriver@nokia.com .
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/


#include "tdriver_highlighter.h"

#include <QRegExp>
#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QFont>
#include <QStringList>
#include <QFile>

#include "tdriver_editor_common.h"

#include <tdriver_debug_macros.h>


TDriverHighlighter::TDriverHighlighter(QTextDocument *parent) :
        QSyntaxHighlighter(parent),
        defaultFormat(new QTextCharFormat),
        keywordFormat(new QTextCharFormat),
        singleQuotationFormat(new QTextCharFormat),
        doubleQuotationFormat(new QTextCharFormat),
        ruleListList()
{

    // setup formats
    // this is used to detect if a given char is formatted with defaultFormat or not
    defaultFormat->setProperty(QTextFormat::UserProperty, true);

    keywordFormat->setForeground(Qt::darkBlue);
    keywordFormat->setFontWeight(QFont::Bold);

    // bright green HSV is 120, 255, 255
    singleQuotationFormat->setForeground(Qt::darkYellow);
    doubleQuotationFormat->setForeground(Qt::darkYellow);

    // add a set of default rules that should be suitable for any text
    QList<const HighlightingRuleBase*> rules;

    {
        HighlightingRule2 *rule2;

        rule2 = new HighlightingRule2(this);
        rule2->matchPat = new QRegExp("\"");
        // endPat matches " at the beginning, or preceded by even number of backslashes
        // requires endCaretMode QRegExp::CaretAtOffset
        rule2->endPat = new QRegExp("(^\\\"|[^\\\\](\\\\\\\\)*\\\")");
        rule2->format = doubleQuotationFormat;
        //qDebug() << FFL << rule2->matchPat->pattern();
        rules.append(rule2);
        rule2=NULL;

        rule2 = new HighlightingRule2(this);
        rule2->matchPat = new QRegExp("'");
        // endPat matches ' at the beginning, or preceded by even number of backslashes
        // requires endCaretMode QRegExp::CaretAtOffset
        rule2->endPat = new QRegExp("(^\\'|[^\\\\](\\\\\\\\)*\\')");
        rule2->format = singleQuotationFormat;
        //qDebug() << FFL << rule2->matchPat->pattern();
        rules.append(rule2);
        rule2=NULL;
    }
    ruleListList.append(rules);
    rules.clear();
}


int TDriverHighlighter::readPlainStrings(
        const QString &fileName,
        const QTextCharFormat *format,
        QList<const HighlightingRuleBase*> &rules)
{
    QStringList keywords;
    MEC::DefinitionFileType type = MEC::getDefinitionFile(fileName, keywords);

    if (type == MEC::InvalidDefinitionFile) {
        qWarning() << "getDefinitionFile failed for" << fileName;
        return -1;
    }

    int count = 0;
    foreach (QString word, keywords) {
        HighlightingRule1 *rule1 = new HighlightingRule1(this);
        rule1->matchPat = new QRegExp(word.trimmed().prepend("\\b").append("\\b"));
        rule1->format = format;
        rules.append(rule1);
        ++count;
    }
    return count;
}


void TDriverHighlighter::highlightBlock(const QString &text)
{
    int startIndex = 0;
    if (previousBlockState() >= 0) {
        const HighlightingRuleBase *rule = stateRulePtrs.value(previousBlockState());
        Q_ASSERT(rule);
        //qDebug() << FCFL << "calling handlePreviousState of rule type" << rule->type();
        startIndex = rule->handlePreviousState(text);

        if (startIndex == -1) {
            //qDebug() << FCFL << "DONE after handlePreviousState, with state" << currentBlockState();
            return;
        }
    }

    setCurrentBlockState(-1);
    //qDebug() << FCFL << "startIndex" << startIndex << ", set block state" << currentBlockState();

    setFormat(startIndex, text.length() - startIndex, *defaultFormat);

    // optimization: eat initial whitespace and return if empty block
    while (startIndex < text.length() && text[startIndex].isSpace()) {
        ++startIndex;
    }
    if (startIndex >= text.length()) return;

    QList<const HighlightingRuleBase*> ruleList;
    foreach (ruleList, ruleListList) {
        const HighlightingRuleBase *rule;
        foreach (rule, ruleList) {
            int index = startIndex;

            forever {
                index = rule->matchPat->indexIn(text, index, rule->matchCaretMode);

                // break if no match
                if (index == -1) break; // continue inner foreach to next rule

                // this length value applies if rule coveres all of text to be highlighted
                int length = rule->matchPat->matchedLength();

                //qDebug() << FFL << index << length;

                // skip this match if position already formatted
                if (format(index).property(QTextFormat::UserProperty).toBool() != true) {
                    //qDebug() << FFL << format(index) << "formated already, skip at index" << index;
                    index += length;
                    continue;
                }

                // this is needed for cases like end-of-line comment overriding previous multiline-quote start
                if (rule->resetBlockState) setCurrentBlockState(-1);

                rule->postMatch(text, index, length);

                //qDebug() << FFL << "startindex " << startIndex << " new index " << index;

                // optimization: extend already known to be formatted part of line,
                // and return if entire line highlighted (common case with #-style comment)
                if (startIndex == index) {
                    startIndex += length;
                    if (startIndex >= text.length()) return;
                }

                index += length;
            }
        }
    }
}


//
// member functions of HighlightingRuleBase

TDriverHighlighter::HighlightingRuleBase::HighlightingRuleBase(TDriverHighlighter *owner_) :
        matchPat(NULL),
        matchCaretMode(QRegExp::CaretAtOffset),
        format(NULL),
        owner(owner_),
        stateIndex(owner->stateRulePtrs.size()),
        resetBlockState(false)
{
    TDriverHighlighter *castowner = const_cast<TDriverHighlighter *>(owner);
    castowner->stateRulePtrs.append(this);
}

void TDriverHighlighter::HighlightingRuleBase::postMatch (
        const QString &,
        int &startInd,
        int &formatLen ) const
{
    TDriverHighlighter *castowner = const_cast<TDriverHighlighter *>(owner);
    castowner->setFormat(startInd, formatLen, *format);
}


//
// member functions of HighlightingRule2

TDriverHighlighter::HighlightingRule2::HighlightingRule2(TDriverHighlighter *owner_)  :
        HighlightingRuleBase(owner_),
        endPat(NULL),
        endCaretMode(QRegExp::CaretAtOffset)
{
}


int TDriverHighlighter::HighlightingRule2::handlePreviousState(const QString &text) const
{
    TDriverHighlighter *castowner = const_cast<TDriverHighlighter *>(owner);
    int startIndex = endPat->indexIn(text, 0, endCaretMode);

    if (startIndex == -1) {
        castowner->setFormat(0, text.length(), *format);
        castowner->setCurrentBlockState(castowner->previousBlockState());
         //qDebug() << FFL << "full line formatted, block state continuation" << castowner->previousBlockState();
    }
    else {
        startIndex += endPat->matchedLength();
        castowner->setFormat(0, startIndex, *format);
        //qDebug() << FFL << "formated until pos" << startIndex;
    }

    return startIndex;
}


void TDriverHighlighter::HighlightingRule2::postMatch (
        const QString &text,
        int &startInd,
        int &formatLen ) const
{
    TDriverHighlighter *castowner = const_cast<TDriverHighlighter *>(owner);
    int endIndex = endPat->indexIn(text, startInd+formatLen, endCaretMode);
    //qDebug() << FFL << text << " " << startInd << " " << formatLen << " " << endIndex;

    if (endIndex == -1) {
        // rule continues to next line:
        // set formatLen to cover rest of line and return new block state for Highlighter
        formatLen = text.length() - startInd; // rest of the text
        castowner->setCurrentBlockState(stateIndex);
        //qDebug() << FFL << "re-set block state" <<castowner->currentBlockState();;
    }
    else {
        // set formatLen to cover start and end patters (including text between)
        formatLen = endIndex - startInd + endPat->matchedLength();

        // RESET remaining block before setting new rule format
        // Higher priority rules format has been already applied but not closed if current block state is not -1.
        // If a lower priority rule now is closed before the higher one then have to first clear previous formatting
        // on the remaining block to be processed, before applying the new formatting.
        if (castowner->currentBlockState() < stateIndex)
        {
            int start_remaining_block = startInd;
            int end_remaining_block = castowner->currentBlock().position() + castowner->currentBlock().length() -1;
            castowner->setFormat(start_remaining_block, end_remaining_block, *castowner->defaultFormat);
            castowner->setCurrentBlockState(-1);
        }
    }

    castowner->setFormat(startInd, formatLen, *format);
}
