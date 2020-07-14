#include "machineStatusZone.h"
#include "ui_machineStatusZone.h"
#include <QDebug>
#include <QToolButton>
#include <QMenu>
#include <QPoint>
CMachineStatusZone::CMachineStatusZone(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CMachineStatusZone)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor("#93939F"));
    setPalette(palette);
    for(int i=0;i<=5;i++)
    {
        ui->comboBox->addItem(QString::number(i));
    }
    // 对锁按钮点击添加图片切换
    connect(ui->toolButton_1,&QToolButton::clicked,[=](){
        if(m_bIsLock==true)
            ui->toolButton_1->setIcon(QIcon(":/res/unlock.png"));
        else
            ui->toolButton_1->setIcon(QIcon(":/res/lock.png"));
        m_bIsLock = !m_bIsLock;
    });

    //对菜单按钮添加菜单
    connect(ui->toolButton_2,&QToolButton::clicked,[=](){
        //sender()可以获取一个Qobject对象，sender->inherits("QPushButton")判断信号来自那个对象，但是属性全部丢失了
        //    QToolButton *button = qobject_cast<QToolButton *>(sender());
        QMenu *pResetMenu = new QMenu(this);
        pResetMenu->addAction(QString("Reset All"),[=](){
            ui->lcdNumber_1->display(QString::number(0));
            ui->lcdNumber_2->display(QString::number(0));
            ui->lcdNumber_3->display(QString::number(0));
        });
        pResetMenu->addAction(QString("Reset X"),[=](){
            ui->lcdNumber_1->display(QString::number(0));
        });
        pResetMenu->addAction(QString("Reset Y"),[=](){
            ui->lcdNumber_2->display(QString::number(0));
        });
        pResetMenu->addAction(QString("Reset Z"),[=](){
            ui->lcdNumber_3->display(QString::number(0));
        });
        // 第一种方法获取这个widget的全局坐标,然后再改变
        //   resetMenu->exec(QPoint(this->mapToGlobal(QPoint(0,0)).x()+ui->toolButton_2->x(),this->mapToGlobal(QPoint(0,0)).y()+ui->toolButton_2->y()));
        // 第二种方法获取鼠标当时的位置
        pResetMenu->exec(QPoint(QCursor::pos().x(),QCursor::pos().y()+ui->toolButton_2->height()+4));

    });
    // 对小数点设置下拉框添加事件
    connect(ui->comboBox,static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged),[=](int index){
        ui->lcdNumber_1->display(QString::number(ui->lcdNumber_1->value(),'f',index));
        ui->lcdNumber_2->display(QString::number(ui->lcdNumber_2->value(),'f',index));
        ui->lcdNumber_3->display(QString::number(ui->lcdNumber_3->value(),'f',index));
    });
}

CMachineStatusZone::~CMachineStatusZone()
{
    delete ui;
}
