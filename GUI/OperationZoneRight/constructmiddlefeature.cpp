#include "constructmiddlefeature.h"

#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QScrollArea>
#include <QCheckBox>
#include <QPushButton>
#include <QStringList>
#include <QPixmap>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLineEdit>

// MF:MiddleFeature
class CConstructMiddleFeature::UI{
public:
    QGridLayout* m_pGridLayoutMiddleFeature;
    QLabel*  m_pLabelCaption;

    QHBoxLayout* m_pHLayoutFeature1;
    QLabel* m_pLabelFeature1;
    QLabel* m_pLabelIconFeature1;
    QPixmap m_pixmapFeature1;
    QComboBox* m_pComboBoxFeature1;

    QHBoxLayout* m_pHLayoutFeature2;
    QLabel* m_pLabelFeature2;
    QLabel* m_pLabelIconFeature2;
    QPixmap m_pixmapFeature2;
    QComboBox* m_pComboBoxFeature2;

    QCheckBox* m_pChechBoxNomFeature;
    QLabel* m_pLabelCaptionIcon;
    QPixmap m_pixmapCaption;

    QScrollArea* m_pScrAreaResultFeature;
    QWidget* m_pWidgetScrArea;
    QListWidget* m_pListWidgetResultFeature;
    QListWidgetItem* m_pListWidgetItemFeature1;
    QVBoxLayout* m_pVLayoutResultFeature;
    QHBoxLayout* m_pHLayoutResultFeatureLabel;
    QVBoxLayout* m_pVLayoutResultFeatureItems;
    QLabel* m_pLabelResultFeature;
    QCheckBox* m_pCompactResult;

    QHBoxLayout* m_pHLayoutButtons;
    QPushButton* m_pPreview;
    QPushButton* m_pAddResult;

    void setupUi(CConstructMiddleFeature* p){

        m_pGridLayoutMiddleFeature = new QGridLayout(p);

        //============Part1===============
        //说明文字
        m_pLabelCaption = new QLabel("Caption");
        m_pLabelCaption->setFixedSize(100,15);
        m_pLabelCaption->setScaledContents(true);
        m_pGridLayoutMiddleFeature->addWidget(m_pLabelCaption,0,0,1,1);

        //m_pLabelFeature1
        m_pHLayoutFeature1 = new QHBoxLayout;
        m_pLabelFeature1 = new QLabel("Feature1");
        m_pLabelIconFeature1 = new QLabel;
        m_pixmapFeature1.load(":/OptZoneRightImages/MiddleFeature.png");
        m_pLabelIconFeature1->setFixedSize(20,20);
        m_pLabelIconFeature1->setPixmap(m_pixmapFeature1);
        m_pLabelIconFeature1->setScaledContents(true);
        m_pComboBoxFeature1 = new QComboBox();
        m_pComboBoxFeature1->addItem(QString("24"));
        m_pHLayoutFeature1->addWidget(m_pLabelFeature1);
        m_pHLayoutFeature1->addWidget(m_pLabelIconFeature1);
        m_pHLayoutFeature1->addWidget(m_pComboBoxFeature1);
        m_pGridLayoutMiddleFeature->addLayout(m_pHLayoutFeature1,1,0,1,2);

        //m_pLabelFeature2
        m_pHLayoutFeature2 = new QHBoxLayout;
        m_pLabelFeature2 = new QLabel("Feature2");
        m_pLabelIconFeature2 = new QLabel;
        m_pixmapFeature2.load(":/OptZoneRightImages/MiddleFeature.png");
        m_pLabelIconFeature2->setFixedSize(20,20);
        m_pLabelIconFeature2->setPixmap(m_pixmapFeature2);
        m_pLabelIconFeature2->setScaledContents(true);
        m_pComboBoxFeature2 = new QComboBox();
        m_pComboBoxFeature2->addItem(QString("48"));
        m_pHLayoutFeature2->addWidget(m_pLabelFeature2);
        m_pHLayoutFeature2->addWidget(m_pLabelIconFeature2);
        m_pHLayoutFeature2->addWidget(m_pComboBoxFeature2);
        m_pGridLayoutMiddleFeature->addLayout(m_pHLayoutFeature2,2,0,1,2);

        //Nom Feature
        m_pChechBoxNomFeature = new QCheckBox("Nom Feature");
        m_pGridLayoutMiddleFeature->addWidget(m_pChechBoxNomFeature,3,0,1,2);

        //Icon
        m_pLabelCaptionIcon = new QLabel("Icon");
        m_pixmapCaption.load(":/OptZoneRightImages/GenericIcon.png");
        m_pLabelCaptionIcon->setFixedSize(30,30);
        m_pLabelCaptionIcon->setPixmap(m_pixmapCaption);
        m_pLabelCaptionIcon->setScaledContents(true);
        m_pGridLayoutMiddleFeature->addWidget(m_pLabelCaptionIcon,5,0,1,1);


        //==================Part2 ==============

        //ScrollArea
        m_pScrAreaResultFeature = new QScrollArea();
        m_pScrAreaResultFeature->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_pScrAreaResultFeature->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_pScrAreaResultFeature->setWidgetResizable(true);
        m_pScrAreaResultFeature->setBackgroundRole(QPalette::NoRole);


        //add some labels to ScrollArea
        m_pWidgetScrArea = new QWidget;
        QVBoxLayout* m_pVLayoutResultFeature = new QVBoxLayout(m_pWidgetScrArea);
        QHBoxLayout* m_pHLayoutResultFeatureLabel = new QHBoxLayout;

        m_pVLayoutResultFeatureItems = new QVBoxLayout;
        m_pListWidgetResultFeature = new QListWidget;
        m_pListWidgetResultFeature->setFrameShape(QListWidget::NoFrame);   //消除边框

        //Result Feature
        m_pLabelResultFeature = new QLabel("Result Feature");
        m_pLabelResultFeature->setObjectName("m_pLabelResultFeature");
        m_pLabelResultFeature->setAlignment(Qt::AlignHCenter);
        m_pLabelResultFeature->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
        m_pHLayoutResultFeatureLabel->addWidget(m_pLabelResultFeature,0,Qt::AlignTop);    //顶端对齐

        m_pListWidgetItemFeature1 = new QListWidgetItem(m_pListWidgetResultFeature);
        m_pListWidgetItemFeature1->setIcon(QIcon(":/OptZoneRightImages/MiddleFeature.png"));
        m_pListWidgetItemFeature1->setText(QString("LN_MID1"));
        m_pScrAreaResultFeature->setWidget(m_pWidgetScrArea);

        m_pVLayoutResultFeatureItems->setContentsMargins(0,0,0,0);
        m_pVLayoutResultFeatureItems->addWidget(m_pListWidgetResultFeature);

        m_pVLayoutResultFeature->addLayout(m_pHLayoutResultFeatureLabel);
        m_pVLayoutResultFeature->addLayout(m_pVLayoutResultFeatureItems);
        m_pVLayoutResultFeature->setContentsMargins(0,0,0,0);
        m_pGridLayoutMiddleFeature->addWidget(m_pScrAreaResultFeature,0,4,3,2);


        m_pCompactResult = new QCheckBox("Compact Result");
        m_pGridLayoutMiddleFeature->addWidget(m_pCompactResult,3,4,1,2);

        //======================Part3=========================
        //按钮
        m_pHLayoutButtons = new QHBoxLayout;
        m_pPreview = new QPushButton("Preview");
        m_pAddResult = new QPushButton("Add Result");
        m_pHLayoutButtons->addWidget(m_pPreview);
        m_pHLayoutButtons->addWidget(m_pAddResult);

        m_pGridLayoutMiddleFeature->addLayout(m_pHLayoutButtons,5,2,1,1);
        m_pGridLayoutMiddleFeature->setContentsMargins(11,11,11,11);
    }
};

CConstructMiddleFeature::CConstructMiddleFeature(QWidget *parent) :
    QWidget(parent),
    m_ui(new CConstructMiddleFeature::UI)
{
    m_ui->setupUi(this);
}


CConstructMiddleFeature::~CConstructMiddleFeature(){
    delete m_ui;
}
