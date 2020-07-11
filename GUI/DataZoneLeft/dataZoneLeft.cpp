/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:24:12
 * @FilePath: \QTCreateByCMake\GUI\DataZoneLeft\dataZoneLeft.cpp
 */ 
#include "dataZoneLeft.h"
#include <QTextEdit>
CDataZoneLeft::CDataZoneLeft(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *textArea = new QTextEdit(this);
    textArea->setText("Widget");
    setCentralWidget(textArea);
}

CDataZoneLeft::~CDataZoneLeft()
{
    
}
