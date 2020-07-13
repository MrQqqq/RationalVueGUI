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


#include "rvfigureset.h"
#include "OperationZoneRightQss.h"
COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QMainWindow(parent)
{
	COperationZoneRightQss::setStyle(":/qss/demo.qss");

	//    QWidget* centralWidget = new QWidget;     //�������봰�ڣ����򵥶����иý���DockWidget������������
	//    this->setCentralWidget(centralWidget);
	//    this->resize(800,600);
	m_pDockWidgetOptZoneRight = new QDockWidget;
	m_pDockWidgetOptZoneRight->setWindowTitle("Construct Operation Zone");

	m_pWidgetOptZoneRight = new QWidget;
	CRVFigureSet* consOptZone = new CRVFigureSet(m_pWidgetOptZoneRight);
	consOptZone->setObjectName("consOptZone");

	m_pVLayoutOptZoneRight = new QVBoxLayout;
	consOptZone->setLayout(m_pVLayoutOptZoneRight);
	m_pDockWidgetOptZoneRight->setWidget(consOptZone);
	this->addDockWidget(Qt::BottomDockWidgetArea, m_pDockWidgetOptZoneRight);  //���ĸ�������λ��
}

COperationZoneRight::~COperationZoneRight()
{
    
}
