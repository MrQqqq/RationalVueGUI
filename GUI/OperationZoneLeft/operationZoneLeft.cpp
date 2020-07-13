#include "operationZoneLeft.h"
#include "ui_operationZoneLeft.h"

COperationZoneLeft::COperationZoneLeft(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::COperationZoneLeft)
{
    ui->setupUi(this);
    this->resize(260,253);
}

COperationZoneLeft::~COperationZoneLeft()
{
    delete ui;
}
