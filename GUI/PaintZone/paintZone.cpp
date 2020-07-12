//#pragma execution_character_set("utf-8")   //解决中文乱码问题

#include "paintZone.h"
#include "lightCircle.h"
#include "ui_paintZone.h"
#include "controlStyle.h"
#include "qdesktopwidget.h"
#include<QDebug>
#include<QIcon>

CPaintZone::CPaintZone(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CPaintZone)
{
    ui->setupUi(this);
    this->initForm();
}

CPaintZone::~CPaintZone()
{
    delete ui;
}

void CPaintZone::initForm()
{
    this->setStyleSheet("*{outline:0px;}QWidget#lightControl{background:72777b;}");

    controlStyle::setSliderQss(ui->light_brightness, 10, "#E8EDF2", "#3498DB", "#3498DB");

    lightCircle* lcp = new lightCircle(ui->lightCirclePanel);
    lcp->setFixedSize(QSize(171,171));

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
