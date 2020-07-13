#include "operationZoneRight.h"
#include "ui_operationZoneRight.h"

COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::COperationZoneRight)
{
    ui->setupUi(this);
}

COperationZoneRight::~COperationZoneRight()
{
    delete ui;
}
