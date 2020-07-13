#include "machineControl.h"
#include "ui_machineControl.h"
#include <QPainter>
#include <QPen>
#include <QPoint>
CMachineControl::CMachineControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMachineControl)
{
    ui->setupUi(this);
}

void CMachineControl::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush(Qt::white);
    pen.setWidth(3);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(QPoint(150,150),50,50);
}

CMachineControl::~CMachineControl()
{
    delete ui;
}
