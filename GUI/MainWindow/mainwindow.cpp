#include "mainwindow.h"
#include <QTextEdit>
#include <QAbstractButton>
#include "SARibbonBar.h"
#include "SARibbonCategory.h"
#include <QPushButton>
#include "SARibbonPannel.h"
#include "SARibbonToolButton.h"
#include <QAction>
#include <QMenu>
#include <QDebug>
#include <QElapsedTimer>
#include "SARibbonMenu.h"
#include "SARibbonComboBox.h"
#include "SARibbonLineEdit.h"
#include "SARibbonGallery.h"
#include "SARibbonCheckBox.h"
#include "SARibbonQuickAccessBar.h"
#include "SARibbonButtonGroupWidget.h"

#include<QSplitter>
#include"dataZoneLeft.h"
#include"dataZoneRight.h"
#include"dimensionReportZone.h"
#include"graphiceZone.h"
#include "machineStatusZone.h"
#include "operationZoneRight.h"
#include "operationZoneLeft.h"
#include "paintZone.h"
#include "statusBarZone.h"
#define PRINT_COST(ElapsedTimer,LastTime,STR) \
    do{\
    int ___TMP_INT = ElapsedTimer.elapsed();\
    qDebug() << STR << ___TMP_INT - LastTime << "(" << ___TMP_INT << ")";\
    LastTime = ___TMP_INT;\
    }while(0)

MainWindow::MainWindow(QWidget *par):SARibbonMainWindow(par)
{
#if 1
    QElapsedTimer cost;
    int lastTimes = 0;
    cost.start();
    setWindowTitle(QStringLiteral("ribbon test"));
    m_edit = new QTextEdit(this);
    setCentralWidget(m_edit);
    PRINT_COST(cost,lastTimes,"setCentralWidget & setWindowTitle");
    SARibbonBar* ribbon = ribbonBar();
    QFont f = ribbon->font();
    f.setFamily("微软雅黑");
    ribbon->setFont(f);
    ribbon->applitionButton()->setText(QStringLiteral("File"));
    SARibbonCategory* categoryMain = ribbon->addCategoryPage(QStringLiteral("Main"));
    PRINT_COST(cost,lastTimes,"new main page");
    createCategoryMain(categoryMain);
    PRINT_COST(cost,lastTimes,"add main page element");
    SARibbonCategory* categoryOther = ribbon->addCategoryPage(QStringLiteral("Other"));
    createCategoryOther(categoryOther);
    PRINT_COST(cost,lastTimes,"add other page");
    m_contextCategory = ribbon->addContextCategory(QStringLiteral("context"),Qt::red,1);
    SARibbonCategory* contextCategoryPage1 = m_contextCategory->addCategoryPage(QStringLiteral("Page1"));
    SARibbonCategory* contextCategoryPage2 = m_contextCategory->addCategoryPage(QStringLiteral("Page1"));
    PRINT_COST(cost,lastTimes,"add contextCategory page");
#endif
    ribbon->quickAccessBar()->addButton(new QAction(QIcon(":/icon/icon/chartDataManager.png"),"action1",this));
    ribbon->quickAccessBar()->addButton(new QAction(QIcon(":/icon/icon/figureIcon.png"),"action2",this));
    ribbon->quickAccessBar()->addButton(new QAction(QIcon(":/icon/icon/information.png"),"action3",this));
    ribbon->quickAccessBar()->addButton(new QAction(QIcon(":/icon/icon/inRangDataRemove.png"),"action4",this));

    //创建所有子窗口
    CDataZoneLeft *p_dataZoneLeft = new CDataZoneLeft();
    CDataZoneRight *p_dataZoneRight = new CDataZoneRight();
    CDimensionReportZone *p_dimensionReportZone = new CDimensionReportZone();
    CGraphiceZone *p_graphiceZone = new CGraphiceZone();
    CMachineStatusZone *p_machineStatusZone = new CMachineStatusZone();
    COperationZoneLeft *p_operationZoneLeft = new COperationZoneLeft();
    COperationZoneRight *p_operationZoneRight = new COperationZoneRight();
    CPaintZone *p_paintZone = new CPaintZone();
    CStatusBarZone *p_statusBarZone = new CStatusBarZone();


    //分割主窗口
    QSplitter *p_splitterMain = new QSplitter(Qt::Horizontal,this);
    

    //主窗口的左边
    QSplitter *p_splitterMainLeft = new QSplitter(Qt::Vertical,p_splitterMain);
	QSizePolicy m_policy = p_splitterMainLeft->sizePolicy();
    m_policy.setHorizontalStretch(3);
	p_splitterMainLeft->setSizePolicy(m_policy);

    //DataZone
    QSplitter *p_splitterDataZone = new QSplitter(Qt::Horizontal,p_splitterMainLeft);
	m_policy = p_splitterDataZone->sizePolicy();
    m_policy.setVerticalStretch(1);
	p_splitterDataZone->setSizePolicy(m_policy);

	m_policy = p_dataZoneLeft->sizePolicy();
    m_policy.setHorizontalStretch(1);
	p_dataZoneLeft->setSizePolicy(m_policy);
    
	m_policy = p_dataZoneRight->sizePolicy();
    m_policy.setHorizontalStretch(1);
	p_dataZoneRight->setSizePolicy(m_policy);
    p_splitterDataZone->addWidget(p_dataZoneLeft);
    p_splitterDataZone->addWidget(p_dataZoneRight);
    p_splitterMainLeft->addWidget(p_splitterDataZone);

	m_policy = p_dimensionReportZone->sizePolicy();
    m_policy.setVerticalStretch(1);
	p_dimensionReportZone->setSizePolicy(m_policy);
    //DimensionReportZone
    p_splitterMainLeft->addWidget(p_dimensionReportZone);

    //主窗口右边
    QSplitter *p_splitterMainRight = new QSplitter(Qt::Vertical,p_splitterMain);
	m_policy = p_splitterMainRight->sizePolicy();
    m_policy.setHorizontalStretch(4);
	p_splitterMainRight->setSizePolicy(m_policy);


    //右边上面部分GraphiceZone和PainZone
    QSplitter *p_splitterMainRightUp = new QSplitter(Qt::Horizontal,p_splitterMainRight);
	m_policy = p_splitterMainRightUp->sizePolicy();
    m_policy.setVerticalStretch(3);
	p_splitterMainRightUp->setSizePolicy(m_policy);
	
	m_policy = p_graphiceZone->sizePolicy();
    m_policy.setHorizontalStretch(3);
	p_graphiceZone->setSizePolicy(m_policy);

	m_policy = p_paintZone->sizePolicy();
    m_policy.setHorizontalStretch(1);
	p_paintZone->setSizePolicy(m_policy);
    p_splitterMainRightUp->addWidget(p_graphiceZone);
    p_splitterMainRightUp->addWidget(p_paintZone);
    p_splitterMainRight->addWidget(p_splitterMainRightUp);

    //右边下部分
    QSplitter *p_splitterMainRightBottom = new QSplitter(Qt::Horizontal,p_splitterMainRight);
	m_policy = p_splitterMainRightBottom->sizePolicy();
    m_policy.setVerticalStretch(1);
	p_splitterMainRightBottom->setSizePolicy(m_policy);
	
	m_policy = p_operationZoneLeft->sizePolicy();
    m_policy.setHorizontalStretch(1);
	p_operationZoneLeft->setSizePolicy(m_policy);
    
	m_policy = p_operationZoneRight->sizePolicy();
    m_policy.setHorizontalStretch(2);
	p_operationZoneRight->setSizePolicy(m_policy);

	m_policy = p_machineStatusZone->sizePolicy();
    m_policy.setHorizontalStretch(1);
	p_machineStatusZone->setSizePolicy(m_policy);
    p_splitterMainRightBottom->addWidget(p_operationZoneLeft);
    p_splitterMainRightBottom->addWidget(p_operationZoneRight);
	p_splitterMainRightBottom->addWidget(p_machineStatusZone);
    p_splitterMainRight->addWidget(p_splitterMainRightBottom);

    p_splitterMain->addWidget(p_splitterMainLeft);
    p_splitterMain->addWidget(p_splitterMainRight);

    setCentralWidget(p_splitterMain);
	//设置状态栏
    setStatusBar(p_statusBarZone);

    showMaximized();
}

void MainWindow::onShowContextCategory(bool on)
{
    ribbonBar()->setContextCategoryVisible(m_contextCategory,on);
}

void MainWindow::onWpsStyle(bool on)
{
    if(on)
        ribbonBar()->setRibbonStyle(SARibbonBar::WpsLiteStyle);
    else
        ribbonBar()->setRibbonStyle(SARibbonBar::OfficeStyle);
    update();
}

void MainWindow::createCategoryMain(SARibbonCategory *page)
{
    QElapsedTimer cost;
    cost.start();
    SARibbonToolButton * btn;
    SARibbonMenu* menu = new SARibbonMenu(this);
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("11"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("11111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("11111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111111111111111111111111"));

    int lastTimes = 0;
    SARibbonPannel* pannel = page->addPannel(QStringLiteral("Panel 1"));
    PRINT_COST(cost,lastTimes,"addPannel pannel 1");

    QAction* act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/save.png"));
    act->setText(QStringLiteral("SAve"));
    PRINT_COST(cost,lastTimes,"new Large Action");
    pannel->addLargeAction(act);
    connect(act,&QAction::triggered,this,[this](bool b){
        this->m_edit->append("action clicked");
    });
    PRINT_COST(cost,lastTimes,"add 1 Large Action");

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/save.png"));
    act->setText(QStringLiteral("hide ribbon"));
    act->setCheckable(true);
    pannel->addSmallAction(act);
    connect(act,&QAction::triggered,this,[this](bool b){
        this->ribbonBar()->setHideMode(b);
    });

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/save.png"));
    act->setText(QStringLiteral("show hide button"));
    act->setCheckable(true);
    pannel->addSmallAction(act);
    connect(act,&QAction::triggered,this,[this](bool b){
        this->ribbonBar()->showHideModeButton(b);
    });

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/filter.png"));
    act->setText(QStringLiteral("use wps style"));
    act->setCheckable(true);
    act->setChecked(false);
    btn = pannel->addSmallAction(act);
    connect(act,SIGNAL(triggered(bool)),this,SLOT(onWpsStyle(bool)));

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("test 3"));
    act->setMenu(menu);
    btn = pannel->addSmallAction(act);
    btn->setPopupMode(QToolButton::MenuButtonPopup);

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("test 4"));
    act->setMenu(menu);
    btn = pannel->addSmallAction(act);
    btn->setPopupMode(QToolButton::InstantPopup);

    pannel->addSeparator();




    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("DelayedPopup"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setPopupMode(QToolButton::DelayedPopup);
    btn->setObjectName("SA_DelayedPopup");
    connect(act,&QAction::triggered,this,&MainWindow::onDelayedPopupCheckabletriggered);

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("MenuButtonPopup"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setObjectName(QStringLiteral("MenuButtonPopup"));
    btn->setPopupMode(QToolButton::MenuButtonPopup);
    connect(act,&QAction::triggered,this,&MainWindow::onMenuButtonPopupCheckabletriggered);

    act = new QAction(this);
    act->setIcon(QIcon(":/icon/icon/Graph-add.png"));
    act->setText(QStringLiteral("InstantPopup"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setObjectName("buttonInstantPopup");
    btn->setPopupMode(QToolButton::InstantPopup);
    connect(act,&QAction::triggered,this,&MainWindow::onInstantPopupCheckabletriggered);

    act = new QAction(this);
    act->setCheckable(true);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("DelayedPopup"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setPopupMode(QToolButton::DelayedPopup);
    btn->setCheckable(true);
    connect(act,&QAction::triggered,this,&MainWindow::onDelayedPopupCheckableTest);

    act = new QAction(this);
    act->setCheckable(true);
    act->setIcon(QIcon(":/icon/icon/folder.png"));
    act->setText(QStringLiteral("MenuButtonPopup\n checkable"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setPopupMode(QToolButton::MenuButtonPopup);
    btn->setCheckable(true);
    connect(act,&QAction::triggered,this,&MainWindow::onMenuButtonPopupCheckableTest);

    act = new QAction(this);
    act->setCheckable(true);
    act->setIcon(QIcon(":/icon/icon/Graph-add.png"));
    act->setText(QStringLiteral("InstantPopup"));
    act->setMenu(menu);
    btn = pannel->addLargeAction(act);
    btn->setCheckable(true);
    btn->setPopupMode(QToolButton::InstantPopup);
    connect(act,&QAction::triggered,this,&MainWindow::onInstantPopupCheckableTest);

    SARibbonPannel* panne2 = page->addPannel(QStringLiteral("pannel 2"));
    act = new QAction(this);
    act->setCheckable(true);
    act->setIcon(QIcon(":/icon/icon/Graph-add.png"));
    act->setText(QStringLiteral("show\nContext"));
    btn = panne2->addLargeAction(act);
    btn->setCheckable(true);
    //btn->setPopupMode(QToolButton::InstantPopup);
    connect(act,&QAction::triggered,this,[this](bool on){
        if(on)
            this->ribbonBar()->showContextCategory(this->m_contextCategory);
        else
            this->ribbonBar()->hideContextCategory(this->m_contextCategory);
    });

    act = new QAction(this);
    act->setCheckable(true);
    act->setIcon(QIcon(":/icon/icon/Graph-add.png"));
    act->setText(QStringLiteral("unactive"));
    act->setMenu(menu);
    btn = panne2->addLargeAction(act);
    btn->setCheckable(true);
    btn->setPopupMode(QToolButton::InstantPopup);
    btn->setEnabled(false);


    SARibbonComboBox* com = new SARibbonComboBox(this);
    com->setSizePolicy(QSizePolicy::Expanding,
                       QSizePolicy::Fixed);
    com->setWindowIcon(QIcon(":/icon/icon/Graph-add.png"));
    com->setWindowTitle("ComboBox");
    for (int i=0;i<40;++i)
        com->addItem("SARibbonComboBox test");
    com->setEditable(true);
    pannel->addWidget(com);

    com = new SARibbonComboBox(this);
    com->setSizePolicy(QSizePolicy::Expanding,
                       QSizePolicy::Fixed);
    com->setWindowIcon(QIcon(":/icon/icon/folder.png"));
    com->setWindowTitle("ComboBox Editable");
    for (int i=0;i<40;++i)
        com->addItem("111111111111");
    pannel->addWidget(com);

    SARibbonLineEdit* lineEdit = new SARibbonLineEdit(this);
    lineEdit->setSizePolicy(QSizePolicy::Expanding,
                       QSizePolicy::Fixed);
    lineEdit->setWindowIcon(QIcon(":/icon/icon/folder.png"));
    lineEdit->setWindowTitle("Line Edit");
    lineEdit->setText("SARibbonLineEdit");
    pannel->addWidget(lineEdit);
QWidget* w = lineEdit->parentWidget();
while(w)
{
    qDebug() << w->metaObject()->className();
    w = w->parentWidget();
}
    SARibbonCheckBox* checkBox = new SARibbonCheckBox(this);
    checkBox->setSizePolicy(QSizePolicy::Expanding,
                       QSizePolicy::Fixed);
    checkBox->setWindowIcon(QIcon(":/icon/icon/folder.png"));
    checkBox->setText("checkBox");
    pannel->addWidget(checkBox);

    pannel->setExpanding();
    QAction* optAct = new QAction(this);
    pannel->addOptionAction(optAct);
}

void MainWindow::createCategoryOther(SARibbonCategory *page)
{
    SARibbonMenu* menu = new SARibbonMenu(this);
    QAction * item = menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));
    menu->addAction(QIcon(":/icon/icon/folder.png"),QStringLiteral("1111111"));

    SARibbonPannel* pannel = page->addPannel(QStringLiteral("pannel 1"));
    SARibbonButtonGroupWidget* btnGroup = new SARibbonButtonGroupWidget(pannel);
    btnGroup->setFrameShape(QFrame::Box);
    btnGroup->addButton(new QAction(QIcon(":/icon/icon/figureIcon.png"),"",this));
    btnGroup->addButton(new QAction(QIcon(":/icon/icon/information.png"),"",this));
    pannel->addWidget(btnGroup,0,3);

    SARibbonToolButton* btn;
    btn = pannel->addLargeAction(item);
    btn->setIcon(QIcon(":/icon/icon/folder.png"));
    btn->setText(QStringLiteral("un format\nicon"));
    btn->setPopupMode(QToolButton::DelayedPopup);
    btn->setFixedHeight(78);
    btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    btn->setMenu(menu);
    pannel->addWidget(btn);

    btn = pannel->addLargeAction(item);
    btn->setIcon(QIcon(":/icon/icon/folder.png"));
    btn->setText(QStringLiteral("change page\ntest"));
    btn->setPopupMode(QToolButton::MenuButtonPopup);
    btn->setFixedHeight(78);
    btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    btn->setMenu(menu);
    pannel->addWidget(btn);

    btn = pannel->addLargeAction(item);
    btn->setIcon(QIcon(":/icon/icon/folder.png"));
    btn->setText(QStringLiteral("LargeBtn"));
    btn->setPopupMode(QToolButton::InstantPopup);
    btn->setFixedHeight(78);
    btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    btn->setMenu(menu);
    pannel->addWidget(btn);

    SARibbonGallery* gallery = pannel->addGallery();
    SARibbonGalleryGroup*group = gallery->addGalleryGroup();
    for(int i=0;i<100;++i)
    {
        group->addItem(QIcon(":/icon/icon/folder.png"));
    }
    QAction* optAct = new QAction(this);
    pannel->addOptionAction(optAct);
    pannel->setObjectName("debug");

}

void MainWindow::onMenuButtonPopupCheckableTest(bool b)
{
    m_edit->append(QStringLiteral("MenuButtonPopupCheckableTest : %1").arg(b));
}

void MainWindow::onInstantPopupCheckableTest(bool b)
{
    m_edit->append(QStringLiteral("InstantPopupCheckableTest : %1").arg(b));
}

void MainWindow::onDelayedPopupCheckableTest(bool b)
{
    m_edit->append(QStringLiteral("DelayedPopupCheckableTest : %1").arg(b));
}

void MainWindow::onMenuButtonPopupCheckabletriggered(bool b)
{
    m_edit->append(QStringLiteral("MenuButtonPopupCheckabletriggered : %1").arg(b));
}

void MainWindow::onInstantPopupCheckabletriggered(bool b)
{
    m_edit->append(QStringLiteral("InstantPopupCheckabletriggered : %1").arg(b));
}

void MainWindow::onDelayedPopupCheckabletriggered(bool b)
{
    m_edit->append(QStringLiteral("DelayedPopupCheckabletriggered : %1").arg(b));
}

