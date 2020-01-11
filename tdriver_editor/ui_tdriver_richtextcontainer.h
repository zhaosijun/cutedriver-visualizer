/********************************************************************************
** Form generated from reading UI file 'tdriver_richtextcontainer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDRIVER_RICHTEXTCONTAINER_H
#define UI_TDRIVER_RICHTEXTCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RichTextContainer
{
public:
    QWidget *testObjectMissingType;

    void setupUi(QWidget *RichTextContainer)
    {
        if (RichTextContainer->objectName().isEmpty())
            RichTextContainer->setObjectName(QStringLiteral("RichTextContainer"));
        RichTextContainer->resize(400, 300);
        testObjectMissingType = new QWidget(RichTextContainer);
        testObjectMissingType->setObjectName(QStringLiteral("testObjectMissingType"));
        testObjectMissingType->setGeometry(QRect(10, 10, 120, 80));

        retranslateUi(RichTextContainer);

        QMetaObject::connectSlotsByName(RichTextContainer);
    } // setupUi

    void retranslateUi(QWidget *RichTextContainer)
    {
        RichTextContainer->setWindowTitle(QApplication::translate("RichTextContainer", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        testObjectMissingType->setToolTip(QApplication::translate("RichTextContainer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Warning! </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Missing type for test object(s). There can be several reasons for this, including:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px"
                        "; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:8pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Common: Application failed to load traverser plugins.  Traverser plugins must have same Qt plugin build key as the application.  Build key difference is usually because of debug/release build type conflict.  <span style=\" font-style:italic;\">Rebuild application with the other build type</span>.</li>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<li style=\" font-size:8pt;\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> Rare: Traverser generates empty types for test objects. This <span style=\" font-style:italic;\">traverser should be fixed</span> so that it sets a type for all test objects.</li></ul>\n"
"<p style=\"-qt-p"
                        "aragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class RichTextContainer: public Ui_RichTextContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDRIVER_RICHTEXTCONTAINER_H
