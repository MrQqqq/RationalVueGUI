#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtUiTools/QtUiTools>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    pDataZoneRightDockWidget = readDataZoneRight();
    initDataZoneRight(pDataZoneRightDockWidget);
    setDataZoneRigthStyle();
    pDataZoneRightDockWidget->showNormal();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QDockWidget* MainWindow::readDataZoneRight()
{
    QUiLoader loader;
    QFile file("G:\\qtproject\\untitled14\\dataZoneRight.ui");
    file.open(QFile::ReadOnly);
    return static_cast<QDockWidget *>(loader.load(&file));
}

void MainWindow::initDataZoneRight(QDockWidget *dockWidget)
{
    QTreeWidget* treeWidget = dockWidget->findChild<QTreeWidget*>("treeWidget");
    treeWidget->setHeaderLabel("label");
    QTreeWidget* treeWidget_2 = dockWidget->findChild<QTreeWidget*>("treeWidget_2");
    treeWidget_2->setHeaderLabel("parent label");
    {
        QTreeWidgetItem *mcs = new QTreeWidgetItem(treeWidget);
        mcs->setText(0,"MCS");
        mcs->setIcon(0,QIcon(":/images/mcs.png"));
    }

    {
        QTreeWidgetItem *focusplane = new QTreeWidgetItem(treeWidget);
        focusplane->setText(0,"Focus Plane");
        focusplane->setIcon(0,QIcon(":/images/focusplane.png"));
        QTreeWidgetItem *fpln_1 = new QTreeWidgetItem(focusplane);
        fpln_1->setText(0,"FPLN_1");
    }

    {
        QTreeWidgetItem *reposition = new QTreeWidgetItem(treeWidget);
        reposition->setText(0,"Reposition");
        reposition->setIcon(0,QIcon(":/images/reposition.png"));
    }

    {
        QTreeWidgetItem *cadmodels = new QTreeWidgetItem(treeWidget,QStringList(QString("Cad Models")));
        //cadmodels->setText(0,"Cad Models");
        cadmodels->setIcon(0,QIcon(":/images/cadmodels.png"));
        QTreeWidgetItem *cadm_1 = new QTreeWidgetItem(cadmodels);
        cadm_1->setText(0,"CADM_1");
    }

    {
        QTreeWidgetItem *pointclouds = new QTreeWidgetItem(treeWidget);
        pointclouds->setText(0,"Point Clouds");
        pointclouds->setIcon(0,QIcon(":/images/pointclouds.png"));
    }

    {
        QTreeWidgetItem *formerrorreports = new QTreeWidgetItem(treeWidget);
        formerrorreports->setText(0,"Form Error Reports");
        formerrorreports->setIcon(0,QIcon(":/images/formerrorreports.png"));
    }

    {
        QTreeWidgetItem *sensor = new QTreeWidgetItem(treeWidget);
        sensor->setText(0,"Sensor");
        sensor->setIcon(0,QIcon(":/images/sensor.png"));
    }
}

void MainWindow::setDataZoneRigthStyle()
{
    QFile file(":/css/styleSheet.css");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    pDataZoneRightDockWidget->setStyleSheet(stylesheet);
}
