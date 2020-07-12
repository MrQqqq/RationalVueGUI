#include "OperationZoneRight.h"
#include "ui_OperationZoneRight.h"

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
    delete ui;
}
