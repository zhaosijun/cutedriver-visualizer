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
 
 

#ifndef TASXMLWRITER_H
#define TASXMLWRITER_H

#include <QTextStream>
#include <QMap>
#include "tasconstants.h"

class TAS_EXPORT TasXmlWriter
{
public:
  TasXmlWriter(QTextStream& out);
  ~TasXmlWriter();

  void openElement(const QString& name);
  void openElement(const QString& name, QMap<QString,QString> attributes);
  void addTextContent(const QString& content);
  void closeElement(const QString& name);

private:
  QString encodeString(const QString& source);

private: 
  QTextStream& mXmlStream;

};

#endif
