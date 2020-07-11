/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:24:19
 * @FilePath: \QTCreateByCMake\GUI\DataZoneRight\dataZoneRight.cpp
 */ 
#include "dataZoneRight.h"
#include <QTextEdit>
CDataZoneRight::CDataZoneRight(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *textArea = new QTextEdit(this);
    textArea->setText("Widget");
    setCentralWidget(textArea);
}

CDataZoneRight::~CDataZoneRight()
{
    
}
