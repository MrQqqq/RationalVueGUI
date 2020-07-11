/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:25:57
 * @FilePath: \QTCreateByCMake\GUI\OperationZoneRight\operationZoneRight.cpp
 */ 
#include "operationZoneRight.h"
#include <QTextEdit>
COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *ptr_textArea = new QTextEdit(this);
    ptr_textArea->setText("Widget");
    setCentralWidget(ptr_textArea);
}

COperationZoneRight::~COperationZoneRight()
{
    
}
