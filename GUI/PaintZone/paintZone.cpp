#include "paintZone.h"
#include "ui_paintZone.h"

CPaintZone::CPaintZone(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CPaintZone)
{
    ui->setupUi(this);
}

CPaintZone::~CPaintZone()
{
    delete ui;
}
