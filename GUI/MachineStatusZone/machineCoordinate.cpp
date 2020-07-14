#include "machineCoordinate.h"
#include "ui_machineCoordinate.h"

CMachineCoordinate::CMachineCoordinate(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CMachineCoordinate)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor (QPalette::Background, QColor("#90949D"));
    setPalette(palette);
    for(int i=0;i<=5;i++)
    {
        ui->comboBox->addItem(QString::number(i));
    }
}

CMachineCoordinate::~CMachineCoordinate()
{
    delete ui;
}
