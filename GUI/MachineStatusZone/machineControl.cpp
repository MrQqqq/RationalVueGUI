#include "machineControl.h"
#include "ui_machineControl.h"
#include <QPainter>
#include <QPen>
#include <QDebug>
CMachineControl::CMachineControl(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CMachineControl)
{
    ui->setupUi(this);
    m_fMaxXYNumber = 10.0;
    m_CentorPoint=QPoint(250,200);
    m_IRadius = 50;
    m_ISpace = 20;
    m_ILineWidth =30;
}

void CMachineControl::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing,true);
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

    pen.setWidth(m_ILineWidth);
    pen.setColor(QString("#000000"));
    pen.setCapStyle(Qt::FlatCap);
    painter.setPen(pen);
    painter.drawLine(m_CentorPoint.x(),m_CentorPoint.y(),m_CentorPoint.x()+m_IRadius+m_ISpace*4,m_CentorPoint.y());
    painter.drawLine(m_CentorPoint.x(),m_CentorPoint.y(),m_CentorPoint.x()-m_IRadius-m_ISpace*4,m_CentorPoint.y());

    pen.setWidth(5);
    pen.setColor(QString("#000000"));
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    double r = asin(1.0*20/(m_IRadius+m_ISpace*4));
    QPoint p1(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4),m_CentorPoint.y()+20);
    QPoint p2(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4)+10,m_CentorPoint.y()+20);
    painter.drawLine(p1,p2);
    QPoint p3(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4)+10,m_CentorPoint.y()+5+20);
    painter.drawLine(p2,p3);
    QPoint p4(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4),m_CentorPoint.y()+20+20);
    painter.drawLine(p3,p4);
    QPoint p5(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4)+50,m_CentorPoint.y());
    painter.drawLine(p4,p5);
    QPoint p6(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4),m_CentorPoint.y()-20-20);
    painter.drawLine(p5,p6);
    QPoint p7(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4)+10,m_CentorPoint.y()-5-20);
    painter.drawLine(p6,p7);
    QPoint p8(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4)+10,m_CentorPoint.y()-20);
    painter.drawLine(p7,p8);
    QPoint p9(m_CentorPoint.x()+cos(r)*(m_IRadius+m_ISpace*4),m_CentorPoint.y()-20);
    painter.drawLine(p8,p9);
}

CMachineControl::~CMachineControl()
{
    delete ui;
}
