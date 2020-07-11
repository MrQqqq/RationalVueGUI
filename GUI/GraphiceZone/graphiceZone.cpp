/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:24:56
 * @FilePath: \QTCreateByCMake\GUI\GraphiceZone\graphiceZone.cpp
 */ 
#include "graphiceZone.h"
#include <QTextEdit>
CGraphiceZone::CGraphiceZone(QWidget *parent) :
    QMainWindow(parent)
{
    
    QTextEdit *textArea = new QTextEdit(this);
    textArea->setText("Widget");
    setCentralWidget(textArea);
}

CGraphiceZone::~CGraphiceZone()
{
    
}
