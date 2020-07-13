#include "operationzoneright.h"
#include "ui_operationzoneright.h"

#include "operationzonerightqss.h"
COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::COperationZoneRight)
{
    COperationZoneRightQss::setStyle(":/qss/demo.qss");
    ui->setupUi(this);
}

COperationZoneRight::~COperationZoneRight()
{
    delete ui;
}
