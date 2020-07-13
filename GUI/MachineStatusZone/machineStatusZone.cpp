#include "machineStatusZone.h"
#include "ui_machineStatusZone.h"
#include <QWidget>

CMachineStatusZone::CMachineStatusZone(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CMachineStatusZone)
{
    ui->setupUi(this);
    m_pMachineStatus = new CMachineStatus(this);
    setWidget(m_pMachineStatus);
    setWindowTitle("machine status zone");
//    setWindowFlags(Qt::CustomizeWindowHint);
//    QWidget* lTitleBar = this->titleBarWidget();
//    QWidget* lEmptyWidget = new QWidget();
//    this->setTitleBarWidget(lEmptyWidget);
//    delete lTitleBar;
}

CMachineStatusZone::~CMachineStatusZone()
{
    delete ui;
}
