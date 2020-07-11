/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:50
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 18:28:28
 * @FilePath: \QTCreateByCMake\GUI\StatusBarZone\statusBarZone.cpp
 */ 
#include "statusBarZone.h"
#include <QTextEdit>
#include<QStatusBar>
#include<QLabel>
CStatusBarZone::CStatusBarZone(QWidget *parent):
    QStatusBar(parent)
{
    //放置标签控件
    QLabel *label1 = new QLabel("提示信息",this);
    addWidget(label1);
    QLabel *label2 = new QLabel("右侧提示信息",this);
    addPermanentWidget(label2);
   
}

CStatusBarZone::~CStatusBarZone()
{
    
}
