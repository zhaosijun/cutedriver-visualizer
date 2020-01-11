/********************************************************************************
** Form generated from reading UI file 'tdriver_executedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDRIVER_EXECUTEDIALOG_H
#define UI_TDRIVER_EXECUTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TDriverExecuteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *outputView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *noAutoCloseCheckbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TDriverExecuteDialog)
    {
        if (TDriverExecuteDialog->objectName().isEmpty())
            TDriverExecuteDialog->setObjectName(QStringLiteral("TDriverExecuteDialog"));
        TDriverExecuteDialog->resize(632, 310);
        verticalLayout = new QVBoxLayout(TDriverExecuteDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputView = new QTextBrowser(TDriverExecuteDialog);
        outputView->setObjectName(QStringLiteral("outputView"));

        verticalLayout->addWidget(outputView);

        widget = new QWidget(TDriverExecuteDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        noAutoCloseCheckbox = new QCheckBox(widget);
        noAutoCloseCheckbox->setObjectName(QStringLiteral("noAutoCloseCheckbox"));

        horizontalLayout->addWidget(noAutoCloseCheckbox);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(widget);


        retranslateUi(TDriverExecuteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TDriverExecuteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TDriverExecuteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TDriverExecuteDialog);
    } // setupUi

    void retranslateUi(QDialog *TDriverExecuteDialog)
    {
        TDriverExecuteDialog->setWindowTitle(QApplication::translate("TDriverExecuteDialog", "Dialog", Q_NULLPTR));
        noAutoCloseCheckbox->setText(QApplication::translate("TDriverExecuteDialog", "Don't close automatically", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TDriverExecuteDialog: public Ui_TDriverExecuteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDRIVER_EXECUTEDIALOG_H
