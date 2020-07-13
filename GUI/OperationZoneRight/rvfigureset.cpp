#include "rvfigureset.h"

#include "constructmiddlefeature.h"
#include "constructcenterofgravity.h"
#include "constructnomactbestfitwidget.h"
#include <QVBoxLayout>

class CRVFigureSet::UI{
public:


    void setupUi(QWidget* p){
        QVBoxLayout* vLayoutFigureSet = new QVBoxLayout;

        //CConstructMiddleFeature* operationZoneRightTestWindow = new CConstructMiddleFeature(p);            //构造中分
        //CConstructCenterOfGravity* operationZoneRightTestWindow = new CConstructCenterOfGravity(p);      //构造重心
        CConstructNomActBestfitWidget* operationZoneRightTestWindow = new CConstructNomActBestfitWidget(p);    //构造理论/实际拟合
		

        operationZoneRightTestWindow->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        vLayoutFigureSet->addWidget(operationZoneRightTestWindow);
        p->setLayout(vLayoutFigureSet);
    }
};


CRVFigureSet::CRVFigureSet(QWidget *parent) : 
	QWidget(parent),
	m_ui(new CRVFigureSet::UI)
{
    setAttribute(Qt::WA_StyledBackground,true);
    m_ui->setupUi(this);
}

CRVFigureSet::~CRVFigureSet(){
    delete m_ui;
}
