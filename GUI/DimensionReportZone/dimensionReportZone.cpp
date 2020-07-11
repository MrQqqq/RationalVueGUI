/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:24:37
 * @FilePath: \QTCreateByCMake\GUI\DimensionReportZone\dimensionReportZone.cpp
 */ 
#include "dimensionReportZone.h"
#include <QTextEdit>
CDimensionReportZone::CDimensionReportZone(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *textArea = new QTextEdit(this);
    textArea->setText("Widget");
    setCentralWidget(textArea);
}

CDimensionReportZone::~CDimensionReportZone()
{
    
}
