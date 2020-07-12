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
#include <QWidget>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include "crvfigureset.h"
#include "myqss.h"
COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QMainWindow(parent)
{
	MyQss::setStyle(":/qss/demo.qss");

	//    QWidget* centralWidget = new QWidget;     //设置中央窗口，否则单独运行该界面DockWidget将充满主窗口
	//    this->setCentralWidget(centralWidget);
	//    this->resize(800,600);
	QDockWidget* dockWidget_ConsOptZone = new QDockWidget;
	dockWidget_ConsOptZone->setWindowTitle("Construct Operation Zone");

	QWidget* subWidget = new QWidget;
	CRVFigureSet* consOptZone = new CRVFigureSet(subWidget);
	consOptZone->setObjectName("consOptZone");

	QVBoxLayout* vBoxLayout = new QVBoxLayout;
	vBoxLayout->addWidget(consOptZone);
	dockWidget_ConsOptZone->setWidget(consOptZone);
	this->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_ConsOptZone);  //更改浮动窗口位置
}

COperationZoneRight::~COperationZoneRight()
{
    
}
