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


#include <QtGui/QApplication>
#include "mainwindow.h"

#include <tdriver_editor_common.h>
#include <tdriver_util.h>

#include <QMainWindow>
#include <QSettings>
#include <QStringList>
#include <QFileInfo>
#include <QProcess>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // workaround for deadlock in Qt 4.7.2+
    QProcess::execute(".");

    QSettings::setDefaultFormat(QSettings::IniFormat);
    a.setOrganizationName("Nokia");
    a.setApplicationName("TDriver_Visualizer");

    QStringList openList;
    for (int ii = 1 ; ii < argc; ii++) {
        openList << argv[ii];
    }

    qRegisterMetaType<BAListMap>("BAList");
    qRegisterMetaType<BAListMap>("BAListMap");

    MainWindow w(openList);
    //w.resize(1000, 600);
    w.show();
    return a.exec();
}
