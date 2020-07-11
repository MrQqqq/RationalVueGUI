/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:25:47
 * @FilePath: \QTCreateByCMake\GUI\OperationZoneLeft\operationZoneLeft.cpp
 */ 
#include "operationZoneLeft.h"
#include <QTextEdit>
COperationZoneLeft::COperationZoneLeft(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *ptr_textArea = new QTextEdit(this);
    ptr_textArea->setText("Widget");
    setCentralWidget(ptr_textArea);
}

COperationZoneLeft::~COperationZoneLeft()
{
    
}
