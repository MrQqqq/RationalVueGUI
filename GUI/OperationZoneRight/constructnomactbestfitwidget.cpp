#include "constructnomactbestfitwidget.h"

#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QLabel>
#include <QPixmap>
#include <QStringList>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QListWidget>
#include <QListWidgetItem>
#include <QCheckBox>
#include <QLineEdit>
#include <QPalette>
#include <QPushButton>
#include <QHeaderView>

#include <QMessageBox>
class CConstructNomActBestfitWidget::UI{
public:
    QGridLayout* m_pGridLayoutNAB;

    QLabel* m_pLabelTitle;
    QTableWidget* m_pTableWidgetDataZone;
    QTableWidgetItem* m_pTbWidgetItemDataZone1;
    QTableWidgetItem* m_pTbWidgetItemDataZone2;
    QTableWidgetItem* m_pTbWidgetItemDataZone3;

    QLabel* m_pLabelIcon1;
    QPixmap m_pixmapIcon1;
    QLabel* m_pLabelIcon2;
    QPixmap m_pixmapIcon2;

    QVBoxLayout* m_pVLayoutAxisRoation;
    QCheckBox* m_pCheckBoxXAxisRotation;
    QCheckBox* m_pCheckBoxYAxisRotation;
    QCheckBox* m_pCheckBoxZAxisRotation;

    QVBoxLayout* m_pVLayoutTranslation;
    QCheckBox* m_pCheckBoxXTranslation;
    QCheckBox* m_pCheckBoxYTranslation;
    QCheckBox* m_pCheckBoxZTranslation;

    QCheckBox* m_pCheckBoxShrinkFactor;
    QLineEdit* m_pLineEditShrinkFactor;

    QHBoxLayout* m_pHLayoutLSEOrig;
    QLabel* m_pLabelLSEOrig;
    QLineEdit* m_pLineEditLSEOrig;
    QHBoxLayout* m_pHLayoutLSENew;
    QLabel* m_pLabelLSENew;
    QLineEdit* m_pLineEditLSENew;

    QHBoxLayout* m_pHLayoutBtns;
    QPushButton* m_pPushBtnBestfit;
    QPushButton* m_pPushBtnTransNom;
    QPushButton* m_pPushBtnTransAct;

    void setupUi(CConstructNomActBestfitWidget* par){
        m_pGridLayoutNAB = new QGridLayout(par);

        //标题
        m_pLabelTitle = new QLabel(QString("Nom/Act bestfit"));
        m_pGridLayoutNAB->addWidget(m_pLabelTitle,0,0,1,1);

        //数据区
        m_pTableWidgetDataZone = new QTableWidget;
        m_pTableWidgetDataZone->setObjectName("m_pTableWidgetDataZone");
        m_pTableWidgetDataZone->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_pTableWidgetDataZone->setRowCount(2);
        m_pTableWidgetDataZone->setColumnCount(4);
//        m_pTableWidgetDataZone->setColumnWidth(0,40);
//        m_pTableWidgetDataZone->setColumnWidth(1,35);
//        m_pTableWidgetDataZone->setColumnWidth(2,35);
//        m_pTableWidgetDataZone->setColumnWidth(3,35);
        m_pTableWidgetDataZone->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);     //表格的单元格平分
        m_pTableWidgetDataZone->setHorizontalHeaderLabels(QStringList()<<QString("Label")<<QString("X")<<QString("Y")<<QString("Z"));
        m_pTableWidgetDataZone->horizontalHeader()->setStyleSheet(
                    "QHeaderView::section{background:rgb(184,186,195); padding-left:4px; border:1px solid white; }"
                    "QHeaderView::section:checked{ }"
                    );
        m_pTbWidgetItemDataZone1 = new QTableWidgetItem;
        m_pTbWidgetItemDataZone2 = new QTableWidgetItem(*m_pTbWidgetItemDataZone1);
        m_pTbWidgetItemDataZone3 = new QTableWidgetItem(*m_pTbWidgetItemDataZone1);
        m_pTbWidgetItemDataZone1->setCheckState(Qt::Checked);
        m_pTbWidgetItemDataZone2->setCheckState(Qt::Checked);
        m_pTbWidgetItemDataZone3->setCheckState(Qt::Checked);
        m_pTbWidgetItemDataZone1->setFlags(m_pTbWidgetItemDataZone1->flags() & (~Qt::ItemIsEditable));//文本设置为不可编辑
        m_pTbWidgetItemDataZone2->setFlags(m_pTbWidgetItemDataZone2->flags() & (~Qt::ItemIsEditable));//文本设置为不可编辑
        m_pTbWidgetItemDataZone3->setFlags(m_pTbWidgetItemDataZone3->flags() & (~Qt::ItemIsEditable));//文本设置为不可编辑
        m_pTableWidgetDataZone->setItem(0,0,new QTableWidgetItem(QIcon(":/OptZoneRightImages/GCV1.png"),"GCV1",QTableWidgetItem::Type));
        m_pTableWidgetDataZone->setItem(0,1,m_pTbWidgetItemDataZone1);
        m_pTableWidgetDataZone->setItem(0,2,m_pTbWidgetItemDataZone2);
        m_pTableWidgetDataZone->setItem(0,3,m_pTbWidgetItemDataZone3);
        m_pTableWidgetDataZone->verticalHeader()->setHidden(true);

        m_pGridLayoutNAB->addWidget(m_pTableWidgetDataZone,1,0,3,4);




        m_pLabelIcon1 = new QLabel;
        m_pixmapIcon1.load(":/OptZoneRightImages/NomActIcon1.png");
        m_pLabelIcon1->setFixedSize(30,30);
        m_pLabelIcon1->setPixmap(m_pixmapIcon1);
        m_pLabelIcon1->setScaledContents(true);
        m_pLabelIcon2 = new QLabel;
        m_pixmapIcon2.load(":/OptZoneRightImages/NomActIcon2.png");
        m_pLabelIcon2->setFixedSize(30,30);
        m_pLabelIcon2->setPixmap(m_pixmapIcon2);
        m_pLabelIcon2->setScaledContents(true);

        m_pGridLayoutNAB->addWidget(m_pLabelIcon1,1,4,1,1);
        m_pGridLayoutNAB->addWidget(m_pLabelIcon2,2,4,1,1);

        m_pCheckBoxXAxisRotation = new QCheckBox(QString("X Axis Rotation"));
        m_pCheckBoxYAxisRotation = new QCheckBox(QString("Y Axis Rotation"));
        m_pCheckBoxZAxisRotation = new QCheckBox(QString("Z Axis Rotation"));
        m_pCheckBoxXAxisRotation->setChecked(true);
        m_pCheckBoxYAxisRotation->setChecked(true);
        m_pCheckBoxZAxisRotation->setChecked(true);
        m_pVLayoutAxisRoation = new QVBoxLayout;
        m_pVLayoutAxisRoation->addWidget(m_pCheckBoxXAxisRotation);
        m_pVLayoutAxisRoation->addWidget(m_pCheckBoxYAxisRotation);
        m_pVLayoutAxisRoation->addWidget(m_pCheckBoxZAxisRotation);
        m_pGridLayoutNAB->addLayout(m_pVLayoutAxisRoation,1,5,2,1);

        m_pCheckBoxXTranslation = new QCheckBox(QString("X Translation"));
        m_pCheckBoxYTranslation = new QCheckBox(QString("Y Translation"));
        m_pCheckBoxZTranslation = new QCheckBox(QString("Z Translation"));
        m_pCheckBoxXTranslation->setChecked(true);
        m_pCheckBoxYTranslation->setChecked(true);
        m_pCheckBoxZTranslation->setChecked(true);
        m_pVLayoutTranslation = new QVBoxLayout;
        m_pVLayoutTranslation->addWidget(m_pCheckBoxXTranslation);
        m_pVLayoutTranslation->addWidget(m_pCheckBoxYTranslation);
        m_pVLayoutTranslation->addWidget(m_pCheckBoxZTranslation);
        m_pGridLayoutNAB->addLayout(m_pVLayoutTranslation,1,6,2,1);

        m_pCheckBoxShrinkFactor = new QCheckBox("Shrink Factor");
        m_pLineEditShrinkFactor = new QLineEdit(QString("1.000000"));
        m_pLineEditShrinkFactor->setObjectName(QString("ShrinkFactor"));
        m_pLineEditShrinkFactor->setFixedWidth(100);
        m_pLineEditShrinkFactor->setReadOnly(true);
        m_pGridLayoutNAB->addWidget(m_pCheckBoxShrinkFactor,1,7,1,1);
        m_pGridLayoutNAB->addWidget(m_pLineEditShrinkFactor,2,7,1,1);
        connect(m_pCheckBoxShrinkFactor, &QCheckBox::toggled, par, &CConstructNomActBestfitWidget::onShrinkFactorCheckBoxSelected);

        m_pLabelLSEOrig = new QLabel(QString("LSE Orig"));
        m_pLineEditLSEOrig = new QLineEdit;
        m_pLineEditLSEOrig->setObjectName(QString("LineEditLSEOrig"));
        m_pLineEditLSEOrig->setReadOnly(true);
        m_pHLayoutLSEOrig = new QHBoxLayout;
        m_pHLayoutLSEOrig->addWidget(m_pLabelLSEOrig);
        m_pHLayoutLSEOrig->addWidget(m_pLineEditLSEOrig);
        m_pGridLayoutNAB->addLayout(m_pHLayoutLSEOrig,3,5,1,1);


        m_pLabelLSENew = new QLabel(QString("LSE New"));
        m_pLineEditLSENew= new QLineEdit;
        m_pLineEditLSENew->setObjectName(QString("LineEditLSENew"));
        m_pLineEditLSENew->setReadOnly(true);
        m_pHLayoutLSENew = new QHBoxLayout;
        m_pHLayoutLSENew->addWidget(m_pLabelLSENew);
        m_pHLayoutLSENew->addWidget(m_pLineEditLSENew);
        m_pGridLayoutNAB->addLayout(m_pHLayoutLSENew,3,6,1,1);

        m_pHLayoutBtns = new QHBoxLayout;
        m_pPushBtnBestfit = new QPushButton("Bestfit");
        m_pPushBtnTransNom= new QPushButton("Trans Nom");
        m_pPushBtnTransAct = new QPushButton("Trams Act");
        m_pPushBtnBestfit->setObjectName("ConstructOperationBtns");
        m_pPushBtnTransNom->setObjectName("ConstructOperationBtns");
        m_pPushBtnTransAct->setObjectName("ConstructOperationBtns");
        m_pHLayoutBtns->addWidget(m_pPushBtnBestfit);
        m_pHLayoutBtns->addWidget(m_pPushBtnTransNom);
        m_pHLayoutBtns->addWidget(m_pPushBtnTransAct);
        m_pGridLayoutNAB->addLayout(m_pHLayoutBtns,4,5,1,2);

        connect(m_pPushBtnBestfit, &QPushButton::clicked, par, &CConstructNomActBestfitWidget::onBestfitButtonClicked);

    }
};


CConstructNomActBestfitWidget::CConstructNomActBestfitWidget(QWidget *parent) :
    QWidget(parent),
    m_pUi(new CConstructNomActBestfitWidget::UI)
{
    m_pUi->setupUi(this);
}

CConstructNomActBestfitWidget::~CConstructNomActBestfitWidget(){
    delete m_pUi;
}

void CConstructNomActBestfitWidget::onBestfitButtonClicked(){
    QMessageBox::information(this, tr("Finally..."),tr("Bestfit Button Clicked."));
}

void CConstructNomActBestfitWidget::onShrinkFactorCheckBoxSelected(){
    if(m_pUi->m_pCheckBoxShrinkFactor->isChecked()){
        m_pUi->m_pLineEditShrinkFactor->setStyleSheet(QString("background-color:white"));
        m_pUi->m_pLineEditShrinkFactor->setReadOnly(false);
    }else{
        m_pUi->m_pLineEditShrinkFactor->setStyleSheet(QString("background-color:rgb(168,172,182)"));
        m_pUi->m_pLineEditShrinkFactor->setReadOnly(true);
    }
}

