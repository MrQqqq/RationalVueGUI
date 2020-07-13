#include "cconstructcenterofgravity.h"


#include <QWidget>
#include <QLabel>
#include <QIcon>
#include <QPixmap>
#include <QCheckBox>
#include <QScrollArea>
#include <QListWidget>
#include <QListWidgetItem>
#include <QPushButton>

#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QDebug>

//CG : center of gravity
class CConstructCenterOfGravity::UI{
public:
    QGridLayout* m_pGridLayoutCG;

    QLabel* m_pLabelCaption;
    QCheckBox* m_pCheckBoxNomFeature;
    QLabel* m_pIconCG;
    QPixmap m_PixmapCG;

    QScrollArea* m_pScrAreaDataZone;
    QWidget* m_pWidgetDataZone;
    QListWidget* m_pListWidgetDataZone;
    QVBoxLayout* m_pVLayoutDataZone;
    QListWidgetItem* m_pListWidgetItemDataZone;

    QVBoxLayout* m_pVLayoutButtons;
    QPushButton* m_pPushButtonDelete;
    QPushButton* m_pPushButtonDeleteAll;
    QPushButton* m_pPushButtonPreview;
    QPushButton* m_pPushButtonAddResult;

    QScrollArea* m_pScrAreaResultFeature;
    QLabel* m_pLabelResultFeature;
    QListWidget* m_pListWidgetResultFeature;
    QVBoxLayout* m_pVLayoutResultFeature;
    QHBoxLayout* m_pHLayoutResultFeatureLabel;
    QVBoxLayout* m_pVLayoutResultFeatureItems;
    QListWidgetItem* m_pListWidgetItemResultFeature;

    void setupUi(CConstructCenterOfGravity* p){
        m_pGridLayoutCG = new QGridLayout(p);

        //Part1
        m_pLabelCaption = new QLabel("Center of Gravity");
        m_pCheckBoxNomFeature = new QCheckBox("Nom Feature");
        m_pIconCG = new QLabel;
        m_PixmapCG.load(":/Images/GenericIcon.png");
        m_pIconCG->setFixedSize(30,30);
        m_pIconCG->setPixmap(m_PixmapCG);
        m_pIconCG->setScaledContents(true);
        m_pGridLayoutCG->addWidget(m_pLabelCaption,0,0,1,1);
        m_pGridLayoutCG->addWidget(m_pCheckBoxNomFeature,1,0,1,1);
        m_pGridLayoutCG->addWidget(m_pIconCG,4,0,1,1);

        //Part2
        m_pScrAreaDataZone = new QScrollArea;
        m_pScrAreaDataZone->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);      //水平滚轮关闭
        m_pScrAreaDataZone->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);     //垂直滚轮按需出现
//        m_pScrAreaDataZone->setWidgetResizable(true);
        m_pScrAreaDataZone->setBackgroundRole(QPalette::NoRole);

        m_pListWidgetDataZone = new QListWidget;
        m_pListWidgetDataZone->setFrameShape(QListWidget::NoFrame);
        //向数据区添加数据
        m_pListWidgetItemDataZone = new QListWidgetItem(m_pListWidgetDataZone);
        m_pListWidgetItemDataZone->setIcon(QIcon(":/Images/GCV1.png"));
        m_pListWidgetItemDataZone->setText("GCV1");

        m_pVLayoutDataZone = new QVBoxLayout;
        m_pVLayoutDataZone->setContentsMargins(0,0,0,0);
        m_pVLayoutDataZone->addWidget(m_pListWidgetDataZone);
        m_pScrAreaDataZone->setLayout(m_pVLayoutDataZone);

        m_pGridLayoutCG->addWidget(m_pScrAreaDataZone,1,2,4,1);

        //part3
        m_pVLayoutButtons = new QVBoxLayout;
        m_pPushButtonDelete = new QPushButton("Delete");
        m_pPushButtonDeleteAll = new QPushButton("Delete All");
        m_pPushButtonPreview = new QPushButton("Preview");
        m_pPushButtonAddResult = new QPushButton("Add Result");
        m_pPushButtonDelete->setObjectName("ConstructOperationBtns");
        m_pPushButtonDeleteAll->setObjectName("ConstructOperationBtns");
        m_pPushButtonPreview->setObjectName("ConstructOperationBtns");
        m_pPushButtonAddResult->setObjectName("ConstructOperationBtns");
        m_pVLayoutButtons->addWidget(m_pPushButtonDelete);
        m_pVLayoutButtons->addWidget(m_pPushButtonDeleteAll);
        m_pVLayoutButtons->addWidget(m_pPushButtonPreview);
        m_pVLayoutButtons->addWidget(m_pPushButtonAddResult);
        m_pGridLayoutCG->addLayout(m_pVLayoutButtons,1,4,4,1);

        //part4
        m_pScrAreaResultFeature = new QScrollArea;
        m_pScrAreaResultFeature->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);      //水平滚轮关闭
        m_pScrAreaResultFeature->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);     //垂直滚轮按需出现
        m_pScrAreaResultFeature->setWidgetResizable(true);
        m_pScrAreaResultFeature->setBackgroundRole(QPalette::NoRole);

        m_pVLayoutResultFeature = new QVBoxLayout;
        m_pHLayoutResultFeatureLabel = new QHBoxLayout;
        m_pVLayoutResultFeatureItems = new QVBoxLayout;

        m_pLabelResultFeature = new QLabel("Result Feature");
        m_pLabelResultFeature->setObjectName("m_pLabelResultFeature");
        m_pLabelResultFeature->setAlignment(Qt::AlignHCenter);
        m_pLabelResultFeature->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);     //水平最大填充，高度固定
        m_pHLayoutResultFeatureLabel->addWidget(m_pLabelResultFeature,0,Qt::AlignTop);      //标签顶端对齐

        m_pListWidgetResultFeature = new QListWidget;
        m_pListWidgetResultFeature->setFrameShape(QListWidget::NoFrame);            //消除边框
        m_pVLayoutResultFeatureItems->addWidget(m_pListWidgetResultFeature);

        m_pListWidgetItemResultFeature = new QListWidgetItem(m_pListWidgetResultFeature);
        m_pListWidgetItemResultFeature->setIcon(QIcon(":/Images/PT_COG1.png"));
        m_pListWidgetItemResultFeature->setText("PT_COG1");

        m_pVLayoutResultFeature->addLayout(m_pHLayoutResultFeatureLabel);
        m_pVLayoutResultFeature->addLayout(m_pVLayoutResultFeatureItems);
        m_pVLayoutResultFeature->setContentsMargins(0,0,0,0);

        m_pScrAreaResultFeature->setLayout(m_pVLayoutResultFeature);
        m_pGridLayoutCG->addWidget(m_pScrAreaResultFeature,1,5,4,2);
    }
};



CConstructCenterOfGravity::CConstructCenterOfGravity(QWidget *parent) :
    QWidget(parent),
    m_ui(new CConstructCenterOfGravity::UI)
{
    m_ui->setupUi(this);
}

CConstructCenterOfGravity::~CConstructCenterOfGravity(){
    delete m_ui;
}
