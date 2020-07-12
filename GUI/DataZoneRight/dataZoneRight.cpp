#include "datazoneright.h"
#include "ui_datazoneright.h"
#include <QFile>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>

CDataZoneRight::CDataZoneRight(QWidget *parent): QMainWindow(parent), ui(new Ui::CdataZoneRight)
{
    ui->setupUi(this);
    QFile file(":/css/styleSheet.css");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);

    ui->treeWidget->setHeaderLabel("label");
    ui->treeWidget_2->setHeaderLabel("parent label");

    initTreeWidget();
    createMenu();
}

CDataZoneRight::~CDataZoneRight()
{
    delete ui;
}

void CDataZoneRight::initTreeWidget()
{
    {
        QTreeWidgetItem *mcs = new QTreeWidgetItem(ui->treeWidget);
        mcs->setText(0,"MCS");
        mcs->setIcon(0,QIcon(":/images/mcs.png"));
    }

    {
        QTreeWidgetItem *focusplane = new QTreeWidgetItem(ui->treeWidget);
        focusplane->setText(0,"Focus Plane");
        focusplane->setIcon(0,QIcon(":/images/focusplane.png"));
        QTreeWidgetItem *fpln_1 = new QTreeWidgetItem(focusplane);
        fpln_1->setText(0,"FPLN_1");
    }

    {
        QTreeWidgetItem *reposition = new QTreeWidgetItem(ui->treeWidget);
        reposition->setText(0,"Reposition");
        reposition->setIcon(0,QIcon(":/images/reposition.png"));
    }

    {
        QTreeWidgetItem *cadmodels = new QTreeWidgetItem(ui->treeWidget,QStringList(QString("Cad Models")));
        //cadmodels->setText(0,"Cad Models");
        cadmodels->setIcon(0,QIcon(":/images/cadmodels.png"));
        QTreeWidgetItem *cadm_1 = new QTreeWidgetItem(cadmodels);
        cadm_1->setText(0,"CADM_1");
    }

    {
        QTreeWidgetItem *pointclouds = new QTreeWidgetItem(ui->treeWidget);
        pointclouds->setText(0,"Point Clouds");
        pointclouds->setIcon(0,QIcon(":/images/pointclouds.png"));
    }

    {
        QTreeWidgetItem *formerrorreports = new QTreeWidgetItem(ui->treeWidget);
        formerrorreports->setText(0,"Form Error Reports");
        formerrorreports->setIcon(0,QIcon(":/images/formerrorreports.png"));
    }

    {
        QTreeWidgetItem *sensor = new QTreeWidgetItem(ui->treeWidget);
        sensor->setText(0,"Sensor");
        sensor->setIcon(0,QIcon(":/images/sensor.png"));
    }
}

void CDataZoneRight::createMenu()
{
    m_PopMenu = new QMenu;
    m_AddMenu = new QMenu("Add Action");

    m_AddAction = new QAction("myadd");
    m_AddAction->setIcon(QIcon(":/images/add.png"));

    m_DelAction = new QAction("Del Action");
    m_DelAction->setIcon(QIcon(":/images/del.png"));

    m_PopMenu->addAction(m_AddAction);
    m_PopMenu->addAction(m_DelAction);

    connect(m_AddAction,SIGNAL(triggered(bool)),this,SLOT(onAddAction()));
    connect(m_DelAction,SIGNAL(triggered(bool)),this,SLOT(onDelAction()));
}

void CDataZoneRight::contextMenuEvent(QContextMenuEvent *event)
{
    if(ui->treeWidget->hasFocus())
    {
        m_PopMenu->move(cursor().pos());
        m_PopMenu->show();
    }
}
void CDataZoneRight::onDelAction()
{
    QTreeWidgetItem *currentitem = ui->treeWidget->currentItem();
    if(!currentitem->parent()){
        QMessageBox::information(this,"information","Can Not Delete");
        return;
    }
    else if(currentitem->parent()){
        currentitem->parent()->removeChild(currentitem);
    }
}

void CDataZoneRight::onAddAction()
{
    QTreeWidgetItem *currentitem = ui->treeWidget->currentItem();
    QString wellName = currentitem->text(0);
    if(!currentitem->parent()){
        QMessageBox::information(this,"information","Did Not Choose");
        return;
    }
    else if(currentitem->parent()->text(0)=="Cad Models"){
        bool ok;
        QString cadmodelstext = QInputDialog::getText(this,tr("input CadModels Name"),tr("CadModels Name:"),QLineEdit::Normal,"",&ok);
        if(ok && !cadmodelstext.isEmpty()){
             QTreeWidgetItem *cadmodelsitem = new QTreeWidgetItem(currentitem->parent());
             cadmodelsitem->setText(0,cadmodelstext);
        }
    }
    else if(currentitem->parent()->text(0)=="Focus Plane"){
        bool ok;
        QString focusplanetext = QInputDialog::getText(this,tr("input FocusPlane Name"),tr("FocusPlane Name:"),QLineEdit::Normal,"",&ok);
        if(ok && !focusplanetext.isEmpty()){
             QTreeWidgetItem *cadmodelsitem = new QTreeWidgetItem(currentitem->parent());
             cadmodelsitem->setText(0,focusplanetext);
        }
    }
    else if(currentitem->text(0)=="Focus Plane"){
        qDebug("1");
    }
    else if(currentitem->child(0)->parent()->text(0)=="Focus Plane"){
        qDebug("1");
    }
}
