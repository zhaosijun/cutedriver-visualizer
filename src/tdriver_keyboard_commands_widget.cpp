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



#include "tdriver_main_window.h"

#if DEVICE_BUTTONS_ENABLED
void MainWindow::createKeyboardCommands() {

    QHBoxLayout *layout = new QHBoxLayout;
    layout->setObjectName("kbcommands");

    keyboardCommandsDock = new QDockWidget( tr( " keyboardCommandsDock commands " ), this);
    keyboardCommandsDock->setObjectName("kbcommands");
    //keyboardCommandsDock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

    QStringList allowCommands(
                QStringList() << "Up" << "Down" << "Left" << "Right" << "Left Softkey" << "Right Softkey");
    layout = new QHBoxLayout;
    layout->setObjectName("kbcommands buttons");

    QPushButton *deviceActionButtons[allowCommands.size()];

    for (int i = 0; i < allowCommands.size() ; ++i)
    {
        deviceActionButtons[i] = new QPushButton();
        deviceActionButtons[i]->setObjectName("kbcommands "+allowCommands.at(i));
        deviceActionButtons[i]->setText(allowCommands.at(i));
        connect(deviceActionButtons[i], SIGNAL(pressed()), this, SLOT(deviceActionButtonPressed()));
        layout->addWidget(deviceActionButtons[i]);
    }

    QGroupBox * horizontalBottomButtonGroupBox2 = new QGroupBox();
    horizontalBottomButtonGroupBox2->setObjectName("kbcommands");
    horizontalBottomButtonGroupBox2->setLayout( layout );

    keyboardCommandsDock->setWidget(horizontalBottomButtonGroupBox2);
}


void MainWindow::deviceActionButtonPressed()
{
    //qDebug("MainWindow::deviceActionPressed called");
    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if (button) {
        QString keyToPress = button->text();

#if 0
        QProgressDialog progressDialog(this);
        progressDialog.setCancelButtonText(tr("&Cancel"));
        progressDialog.setMinimumDuration(0);
        progressDialog.setRange(0, 100);
        progressDialog.setWindowTitle(tr("Press_key"));
        progressDialog.setLabelText(tr("Sending keypress"));
        progressDialog.setValue(1);
        progressDialog.setValue(15);
#endif
        //bool cmd_result = false;

        if ( executeTDriverCommand( commandKeyPress,
                              QString( activeDevice + " press_key :" + keyToPress ),
                              keyToPress) ) {
#if 0
            progressDialog.reset();
#endif
            sendAppListRequest();
        }
    }
}
#endif

