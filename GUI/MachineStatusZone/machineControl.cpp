#include "machineControl.h"
#include "ui_machineControl.h"
#include <QPainter>
#include <QPen>
#include <QDebug>
CMachineControl::CMachineControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMachineControl)
{
    ui->setupUi(this);
    m_fMaxXYNumber = 10.0;
    m_CentorPoint=QPoint(250,200);
    m_IRadius = 50;
    m_ISpace = 20;
}


void CMachineControl::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::Qt4CompatiblePainting);
    QPen pen;
    QBrush brush(QColor(QString("#7E7E86")));

    pen.setWidth(2);
    pen.setColor(QString("#535258"));
    brush.setColor(QColor("#535258"));
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(m_CentorPoint,m_IRadius+m_ISpace*4,m_IRadius+m_ISpace*4);

    pen.setWidth(2);
    pen.setColor(QString("#e9e7ef"));
    brush.setColor(QString("#68676D"));
    // pen和brush改变之后需要重新设置一下
    painter.setPen(pen);
    painter.setBrush(brush);
    for(int i=3;i>=1;i--)
        painter.drawEllipse(m_CentorPoint,m_IRadius+m_ISpace*i,m_IRadius+m_ISpace*i);
    painter.drawEllipse(m_CentorPoint,m_IRadius,m_IRadius);

    pen.setWidth(30);
    pen.setColor(QString("#000000"));
    painter.setPen(pen);
    painter.drawLine(m_CentorPoint.x(),m_CentorPoint.y(),m_CentorPoint.x()+m_IRadius+m_ISpace*4,m_CentorPoint.y());
    painter.drawLine(m_CentorPoint.x(),m_CentorPoint.y(),m_CentorPoint.x()-m_IRadius-m_ISpace*4,m_CentorPoint.y());


}

CMachineControl::~CMachineControl()
{
    delete ui;
}
