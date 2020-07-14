#include "lightControl.h"
#include "lightCircle.h"
#include "ui_lightControl.h"
//#include "ui_dockwidget.h"
#include "controlStyle.h"
#include "qdesktopwidget.h"
#include<QDebug>
#include<QIcon>

CLightControl::CLightControl(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CLightControl)
{
    ui->setupUi(this);

    this->initForm();
}

CLightControl::~CLightControl()
{
    delete ui;
}

void CLightControl::initForm()
{
    this->setStyleSheet("*{outline:0px;}QWidget#lightControl{background:72777b;}");

    controlStyle::setSliderQss(ui->light_brightness, 10, "#E8EDF2", "#fcf16e", "#fcf16e");

    lightCircle* lcp = new lightCircle(ui->lightCirclePanel);
    lcp->setFixedSize(QSize(180,180));

//  controlStyle::setPushButtonQss(ui->light_source, 50, 0, "#3498DB", "#FFFFFF", "#5DACE4", "#E5FEFF", "#2483C7", "#A0DAFB");

    ui->light_on->setIcon(QIcon(":icons/light_on.png"));
    ui->light_on->setFixedSize(QSize(22,22));
    ui->light_off->setIcon(QIcon(":icons/light_off.png"));
    ui->light_off->setFixedSize(QSize(22,22));
    ui->light_mod_1->setIcon(QIcon(":icons/light_mod_1.png"));
    ui->light_mod_1->setFixedSize(QSize(22,22));
    ui->light_mod_2->setIcon(QIcon(":icons/light_mod_2.png"));
    ui->light_mod_2->setFixedSize(QSize(22,22));
    ui->light_mod_3->setIcon(QIcon(":icons/light_mod_3.png"));
    ui->light_mod_3->setFixedSize(QSize(22,22));
    ui->light_mod_4->setIcon(QIcon(":icons/light_mod_4.png"));
    ui->light_mod_4->setFixedSize(QSize(22,22));

}
