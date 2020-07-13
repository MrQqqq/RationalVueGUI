#include "lightControl.h"
#include "ui_lightControl.h"

CLightControl::CLightControl(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CLightControl)
{
    ui->setupUi(this);
}

CLightControl::~CLightControl()
{
    delete ui;
}
