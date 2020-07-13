#include "OperationZoneRight.h"
#include "Ui_OperationZoneRight.h"

#include <QVBoxLayout>
#include "rvfigureset.h"

COperationZoneRight::COperationZoneRight(QWidget *parent) :
    QDockWidget(parent)
//  ,ui(new Ui::COperationZoneRight)
{
//    ui->setupUi(this);

    QVBoxLayout* m_pVLayoutOptZoneRight = new QVBoxLayout;
    CRVFigureSet* m_pFigureSet = new CRVFigureSet;
    m_pFigureSet->setLayout(m_pVLayoutOptZoneRight);
    this->setWidget(m_pFigureSet);
}

COperationZoneRight::~COperationZoneRight()
{
//    delete ui;
}
