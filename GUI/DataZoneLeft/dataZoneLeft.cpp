#include "dataZoneLeft.h"
#include "ui_dataZoneLeft.h"

CDataZoneLeft::CDataZoneLeft(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CDataZoneLeft)
{
    ui->setupUi(this);

    m_pVBoxLayout = new QVBoxLayout();

    m_pVBoxLayout->setContentsMargins(1,3,1,1);
    m_pVBoxLayout->setSpacing(1);

    m_pToolButton = new QToolButton();
    m_pToolButton_2 = new QToolButton();
    m_pToolButton_3 = new QToolButton();
    m_pToolButton_4 = new QToolButton();
    m_pToolButton_5 = new QToolButton();
    m_pToolButton_6 = new QToolButton();
    m_pToolButton_7 = new QToolButton();
    m_pToolButton_8 = new QToolButton();
    m_pToolButton_9 = new QToolButton();

    m_pToolButton->setIcon(QIcon(":/icon/1.png"));
    m_pToolButton->setFixedSize(25, 25);
    m_pToolButton->setIconSize(QSize(25, 25));

    m_pToolButton_2->setIcon(QIcon(":/icon/2.png"));
    m_pToolButton_2->setFixedSize(25, 25);
    m_pToolButton_2->setIconSize(QSize(25, 25));

    m_pToolButton_3->setIcon(QIcon(":/icon/3.png"));
    m_pToolButton_3->setFixedSize(25, 25);
    m_pToolButton_3->setIconSize(QSize(25, 25));

    m_pToolButton_4->setIcon(QIcon(":/icon/4.png"));
    m_pToolButton_4->setFixedSize(25, 25);
    m_pToolButton_4->setIconSize(QSize(25, 25));

    m_pToolButton_5->setIcon(QIcon(":/icon/5.png"));
    m_pToolButton_5->setFixedSize(25, 25);
    m_pToolButton_5->setIconSize(QSize(25, 25));

    m_pToolButton_6->setIcon(QIcon(":/icon/6.png"));
    m_pToolButton_6->setFixedSize(25, 25);
    m_pToolButton_6->setIconSize(QSize(25, 25));

    m_pToolButton_7->setIcon(QIcon(":/icon/7.png"));
    m_pToolButton_7->setFixedSize(25, 25);
    m_pToolButton_7->setIconSize(QSize(25, 25));

    m_pToolButton_8->setIcon(QIcon(":/icon/8.png"));
    m_pToolButton_8->setFixedSize(25, 25);
    m_pToolButton_8->setIconSize(QSize(25, 25));

    m_pToolButton_9->setIcon(QIcon(":/icon/9.png"));
    m_pToolButton_9->setFixedSize(25, 25);
    m_pToolButton_9->setIconSize(QSize(25, 25));

    m_pVBoxLayout->addWidget(m_pToolButton);
    m_pVBoxLayout->addWidget(m_pToolButton_2);
    m_pVBoxLayout->addWidget(m_pToolButton_3);
    m_pVBoxLayout->addWidget(m_pToolButton_4);
    m_pVBoxLayout->addWidget(m_pToolButton_5);
    m_pVBoxLayout->addWidget(m_pToolButton_6);
    m_pVBoxLayout->addWidget(m_pToolButton_7);
    m_pVBoxLayout->addWidget(m_pToolButton_8);
    m_pVBoxLayout->addWidget(m_pToolButton_9);

    m_pVBoxLayout->addStretch();
    ui->widget->setLayout(m_pVBoxLayout);

    ui->widget->setGeometry(1, 0, ui->widget->geometry().width(), ui->widget->geometry().height()-2);
    ui->widget->setStyleSheet("border-style:none;");




    m_pVBoxLayout_2 = new QVBoxLayout();

    m_pVBoxLayout_2->setContentsMargins(18,4,1,1);
    m_pVBoxLayout_2->setSpacing(0);

    QListWidget *listWidget = new QListWidget(ui->widget_2);


    //check_box

    m_pCheckBox = new QCheckBox();
    m_pCheckBox_2 = new QCheckBox();
    m_pCheckBox_3 = new QCheckBox();
    m_pCheckBox_4 = new QCheckBox();
    m_pCheckBox_5 = new QCheckBox();
    m_pCheckBox_6 = new QCheckBox();
    m_pCheckBox_7 = new QCheckBox();
    m_pCheckBox_8 = new QCheckBox();
    m_pCheckBox_9 = new QCheckBox();

    m_pCheckBox->setChecked(1);
    m_pCheckBox->setIcon(QIcon(":/icon/cir_blue.png"));
    m_pCheckBox->setIconSize(QSize(20, 20));
    m_pCheckBox->setText(QString("CIR1"));

    m_pCheckBox_2->setChecked(1);
    m_pCheckBox_2->setIcon(QIcon(":/icon/cir_red.png"));
    m_pCheckBox_2->setIconSize(QSize(15, 15));
    m_pCheckBox_2->setText(QString("CIR2"));

    m_pCheckBox_3->setChecked(1);
    m_pCheckBox_3->setIcon(QIcon(":/icon/ln_green.png"));
    m_pCheckBox_3->setIconSize(QSize(15, 15));
    m_pCheckBox_3->setText(QString("LN1"));

    m_pCheckBox_4->setChecked(1);
    m_pCheckBox_4->setIcon(QIcon(":/icon/ln_red.png"));
    m_pCheckBox_4->setIconSize(QSize(15, 15));
    m_pCheckBox_4->setText(QString("LN2"));

    m_pCheckBox_5->setChecked(1);
    m_pCheckBox_5->setIcon(QIcon(":/icon/arc_red.png"));
    m_pCheckBox_5->setIconSize(QSize(15, 15));
    m_pCheckBox_5->setText(QString("ARC1"));

    m_pCheckBox_6->setChecked(1);
    m_pCheckBox_6->setIcon(QIcon(":/icon/ln_red.png"));
    m_pCheckBox_6->setIconSize(QSize(15, 15));
    m_pCheckBox_6->setText(QString("LN3"));

    m_pCheckBox_7->setChecked(1);
    m_pCheckBox_7->setIcon(QIcon(":/icon/goto.png"));
    m_pCheckBox_7->setIconSize(QSize(15, 15));
    m_pCheckBox_7->setText(QString("GOTO1"));

    m_pCheckBox_8->setChecked(1);
    m_pCheckBox_8->setIcon(QIcon(":/icon/macro.png"));
    m_pCheckBox_8->setIconSize(QSize(15, 15));
    m_pCheckBox_8->setText(QString("Macro1"));

    m_pCheckBox_9->setChecked(1);
    m_pCheckBox_9->setIcon(QIcon(":/icon/output.png"));
    m_pCheckBox_9->setIconSize(QSize(15, 15));
    m_pCheckBox_9->setText(QString("Output1"));

    m_pItem = new QListWidgetItem ();
    m_pItem_2 = new QListWidgetItem ();
    m_pItem_3 = new QListWidgetItem ();
    m_pItem_4 = new QListWidgetItem ();
    m_pItem_5 = new QListWidgetItem ();
    m_pItem_6 = new QListWidgetItem ();
    m_pItem_7 = new QListWidgetItem ();
    m_pItem_8 = new QListWidgetItem ();
    m_pItem_9 = new QListWidgetItem ();

    listWidget -> addItem( m_pItem );
    listWidget -> setItemWidget( m_pItem ,m_pCheckBox);

    listWidget -> addItem( m_pItem_2 );
    listWidget -> setItemWidget( m_pItem_2 ,m_pCheckBox_2);

    listWidget -> addItem( m_pItem_3 );
    listWidget -> setItemWidget( m_pItem_3 ,m_pCheckBox_3);

    listWidget -> addItem( m_pItem_4 );
    listWidget -> setItemWidget( m_pItem_4 ,m_pCheckBox_4);

    listWidget -> addItem( m_pItem_5 );
    listWidget -> setItemWidget( m_pItem_5 ,m_pCheckBox_5);

    listWidget -> addItem( m_pItem_6 );
    listWidget -> setItemWidget( m_pItem_6 ,m_pCheckBox_6);

    listWidget -> addItem( m_pItem_7 );
    listWidget -> setItemWidget( m_pItem_7 ,m_pCheckBox_7);

    listWidget -> addItem( m_pItem_8 );
    listWidget -> setItemWidget( m_pItem_8 ,m_pCheckBox_8);

    listWidget -> addItem( m_pItem_9 );
    listWidget -> setItemWidget( m_pItem_9 ,m_pCheckBox_9);


    listWidget->setStyleSheet("border-style:none;");

    m_pVBoxLayout_2->addWidget(listWidget);
    ui->widget_2->setLayout(m_pVBoxLayout_2);



}

CDataZoneLeft::~CDataZoneLeft()
{
    delete ui;
}

