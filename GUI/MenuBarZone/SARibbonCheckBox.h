﻿#ifndef SARIBBONCHECKBOX_H
#define SARIBBONCHECKBOX_H
#include "SARibbonGlobal.h"
#include <QCheckBox>
class /*SA_RIBBON_EXPORT*/ SARibbonCheckBox : public QCheckBox
{
    Q_OBJECT
public:
    SARibbonCheckBox(QWidget *parent = Q_NULLPTR);
};

#endif // SARIBBONCHECKBOX_H
