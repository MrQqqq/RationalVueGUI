/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:26:10
 * @FilePath: \QTCreateByCMake\GUI\PaintZone\paintZone.cpp
 */ 
#include "paintZone.h"
#include <QTextEdit>
CPaintZone::CPaintZone(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *ptr_textArea = new QTextEdit(this);
    ptr_textArea->setText("Widget");
    setCentralWidget(ptr_textArea);
}

CPaintZone::~CPaintZone()
{
    
}
