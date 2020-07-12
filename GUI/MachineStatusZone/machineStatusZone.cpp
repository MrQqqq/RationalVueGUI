#include "machineStatusZone.h"
#include "ui_machineStatusZone.h"
#include <QDockWidget>
CMachineStatusZone::CMachineStatusZone(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMachineStatusZone)
{
    ui->setupUi(this);
    //第一个区
    QDockWidget * pDockWidget = new QDockWidget(QString(" "),this);
    m_pMSWidget = new CNumberShowWidget(pDockWidget);
    pDockWidget->setWidget(m_pMSWidget);
    // 设置全部填满
    pDockWidget->setAutoFillBackground(true);
    // 这种设置方式有问题会影响子控件，且停靠不显示背景色
//    dockWidget->setStyleSheet("background-color:#93939F");
    addDockWidget(Qt::RightDockWidgetArea, pDockWidget);
    //这种方式不会影响子控件，且停靠也能显示背景色
    QPalette palette = pDockWidget->palette();
    palette.setColor (QPalette::Background, QColor("#93939F"));
    pDockWidget->setPalette(palette);
    // 希望自定义一个标题栏

//    // 第二个区
//      QDockWidget * pDockWidget = new QDockWidget(QString(" "),this);
//      m_pMSCoordinateWidget = new CMachineStatusCoordinate(pDockWidget);
//      pDockWidget->setWidget(m_pMSCoordinateWidget);
//      // 设置全部填满
//      pDockWidget->setAutoFillBackground(true);
//     // 这种设置方式有问题会影响子控件，且停靠不显示背景色
//    //    dockWidget->setStyleSheet("background-color:#93939F");
//      addDockWidget(Qt::RightDockWidgetArea, pDockWidget);
//        //这种方式不会影响子控件，且停靠也能显示背景色 #90949D
//      QPalette palette = pDockWidget->palette();
//      palette.setColor (QPalette::Background, QColor("#90949D"));
//      pDockWidget->setPalette(palette);

}

CMachineStatusZone::~CMachineStatusZone()
{
    delete ui;
}
