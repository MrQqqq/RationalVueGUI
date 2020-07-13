#include "graphiceZone.h"
#include "ui_graphiceZone.h"

CGraphiceZone::CGraphiceZone(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CGraphiceZone)
{
    ui->setupUi(this);
}

CGraphiceZone::~CGraphiceZone()
{
    delete ui;
}
