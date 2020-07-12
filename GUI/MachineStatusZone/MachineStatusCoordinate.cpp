#include "MachineStatusCoordinate.h"
#include "ui_MachineStatusCoordinate.h"

CMachineStatusCoordinate::CMachineStatusCoordinate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMachineStatusCoordinate)
{
    ui->setupUi(this);
    ui->toolButton_1->setStyleSheet("border:0px");
    ui->toolButton_2->setStyleSheet("border:0px");
    ui->toolButton_3->setStyleSheet("border:0px");
    ui->toolButton_4->setStyleSheet("border:0px");
    ui->toolButton_5->setStyleSheet("border:0px");
    ui->toolButton_6->setStyleSheet("border:0px");
    ui->toolButton_7->setStyleSheet("border:0px");
    ui->toolButton_8->setStyleSheet("border:0px");
    ui->toolButton_9->setStyleSheet("border:0px");
    ui->toolButton_10->setStyleSheet("border:0px");
    ui->widget_2->setStyleSheet("background-color:#D2D6E1");
//    ui->widget_1->setStyleSheet("background-color:#90949D");
    ui->lineEdit->setStyleSheet("background-color:#A8ACB7;border:1px solid gray;border-radius: 3px;padding: 1px 2px 1px 2px;");
    for(int i=0;i<=5;i++)
    {
        ui->comboBox->addItem(QString::number(i));
    }
}

CMachineStatusCoordinate::~CMachineStatusCoordinate()
{
    delete ui;
}