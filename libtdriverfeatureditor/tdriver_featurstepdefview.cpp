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

#include "tdriver_featurstepdefview.h"

#include <tdriver_debug_macros.h>

#include <QtGui>


TDriverFeaturStepDefView::TDriverFeaturStepDefView(QWidget *parent) :
    TDriverFeaturAbstractView(tr("Step Definitions"), parent)
{
    setScanType(FileScan);
    setScanPattern("^\\s*((When|Given|Then|And).+)");
}
