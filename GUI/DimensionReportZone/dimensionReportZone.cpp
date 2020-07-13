#include "dimensionReportZone.h"
#include "ui_dimensionReportZone.h"

CDimensionReportZone::CDimensionReportZone(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CDimensionReportZone)
{
    ui->setupUi(this);
}

CDimensionReportZone::~CDimensionReportZone()
{
    delete ui;
}
