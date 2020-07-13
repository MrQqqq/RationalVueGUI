#include "rvfigureset.h"

#include "constructmiddlefeature.h"
#include "constructcenterofgravity.h"
#include "constructnomactbestfitwidget.h"
#include <QVBoxLayout>

class CRVFigureSet::UI{
public:


    void setupUi(QWidget* p){
        QVBoxLayout* vLayoutConstruction = new QVBoxLayout;

//        CConstructMiddleFeature* subWindow = new CConstructMiddleFeature(p);            //构造中分
//        CConstructCenterOfGravity* subWindow = new CConstructCenterOfGravity(p);      //构造重心
        CConstructNomActBestfitWidget* subWindow = new CConstructNomActBestfitWidget(p);    //构造理论/实际拟合

        subWindow->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        vLayoutConstruction->addWidget(subWindow);
        p->setLayout(vLayoutConstruction);
    }
};


CRVFigureSet::CRVFigureSet(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StyledBackground,true);
    m_ui->setupUi(this);
}

CRVFigureSet::~CRVFigureSet(){
    delete m_ui;
}
