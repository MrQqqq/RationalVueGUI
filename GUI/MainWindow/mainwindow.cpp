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
#include "dataZoneLeft.h"
#include "dataZoneRight.h"
#include "dimensionReportZone.h"
#include "graphiceZone.h"
#include "lightControl.h"
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
	//添加菜单
	QMenu *p_fileMenu = new QMenu(this);
	setStyleSheet("QMenu::item:selected {background-color: #654321;}QMenu{background-color: #88777E;}");
	QAction *p_fileMenu_new = new QAction(p_fileMenu);
	QAction *p_fileMenu_open = new QAction(p_fileMenu);
	QAction *p_fileMenu_save = new QAction(p_fileMenu);
	QAction *p_fileMenu_saveas = new QAction(p_fileMenu);
	QAction *p_fileMenu_solutionFunLock = new QAction(p_fileMenu);
	QAction *p_fileMenu_importCAD = new QAction(p_fileMenu);
	QAction *p_fileMenu_exportCAD = new QAction(p_fileMenu);
	QAction *p_fileMenu_importFeatures = new QAction(p_fileMenu);
	QAction *p_fileMenu_export = new QAction(p_fileMenu);
	QAction *p_fileMenu_options = new QAction(p_fileMenu);
	QAction *p_fileMenu_window = new QAction(p_fileMenu);
	QAction *p_fileMenu_help = new QAction(p_fileMenu);
	QAction *p_fileMenu_recent = new QAction(p_fileMenu);
	QAction *p_fileMenu_exit = new QAction(p_fileMenu);

	//设置action文字
	p_fileMenu_new->setText("New");
	p_fileMenu_new->setShortcut(QKeySequence(QLatin1String("Ctrl+N")));
	p_fileMenu_open->setText("Open Solution");
	p_fileMenu_save->setText("Save Solution");
	p_fileMenu_save->setShortcut(QKeySequence(QLatin1String("Ctrl+S")));
	p_fileMenu_saveas->setText("Save Solution As");
	p_fileMenu_solutionFunLock->setText("Solution Function Lock");
	p_fileMenu_importCAD->setText("Import CAD");
	p_fileMenu_exportCAD->setText("Export CAD");
	p_fileMenu_importFeatures->setText("Import Features");
	p_fileMenu_export->setText("Export");
	p_fileMenu_options->setText("Options");
	p_fileMenu_window->setText("Window");
	p_fileMenu_help->setText("Help");
	p_fileMenu_recent->setText("Recent");
	p_fileMenu_exit->setText("Exit");

	p_fileMenu->addAction(p_fileMenu_new);
	p_fileMenu->addAction(p_fileMenu_open);
	p_fileMenu->addAction(p_fileMenu_save);
	p_fileMenu->addAction(p_fileMenu_saveas);
	p_fileMenu->addAction(p_fileMenu_solutionFunLock);
	p_fileMenu->addSeparator();
	p_fileMenu->addAction(p_fileMenu_importCAD);
	p_fileMenu->addAction(p_fileMenu_exportCAD);
	p_fileMenu->addSeparator();
	p_fileMenu->addAction(p_fileMenu_importFeatures);
	p_fileMenu->addAction(p_fileMenu_export);
	p_fileMenu->addSeparator();
	p_fileMenu->addAction(p_fileMenu_options);
	p_fileMenu->addAction(p_fileMenu_window);
	p_fileMenu->addAction(p_fileMenu_help);
	p_fileMenu->addSeparator();
	p_fileMenu->addAction(p_fileMenu_recent);
	p_fileMenu->addAction(p_fileMenu_exit);



	//添加子菜单
	//import CAD的子菜单
	QMenu *p_childfileMenu_importCAD = new QMenu(this);
	QAction *p_action_iges = new QAction("IGES...", p_childfileMenu_importCAD);
	QAction *p_action_dxf = new QAction("DXF...", p_childfileMenu_importCAD);
	QAction *p_action_step = new QAction("STEP", p_childfileMenu_importCAD);
	QAction *p_action_parasolid = new QAction("ParaSolid XT...", p_childfileMenu_importCAD);
	QAction *p_action_catia = new QAction("CATIA...", p_childfileMenu_importCAD);
	QAction *p_action_ug = new QAction("UG...", p_childfileMenu_importCAD);
	QAction *p_action_proe = new QAction("ProE...", p_childfileMenu_importCAD);
	QAction *p_action_solidwork = new QAction("SolidWorks...", p_childfileMenu_importCAD);
	QAction *p_action_jt3d = new QAction("JT3D...", p_childfileMenu_importCAD);
	QAction *p_action_inventor = new QAction("Inventor 3D", p_childfileMenu_importCAD);
	QAction *p_action_solidedge = new QAction("SolidEdge...", p_childfileMenu_importCAD);
	QAction *p_action_drill = new QAction("Drill...", p_childfileMenu_importCAD);
	p_fileMenu_importCAD->setMenu(p_childfileMenu_importCAD);
	p_childfileMenu_importCAD->addAction(p_action_iges);
	p_childfileMenu_importCAD->addAction(p_action_dxf);
	p_childfileMenu_importCAD->addAction(p_action_step);
	p_childfileMenu_importCAD->addAction(p_action_parasolid);
	p_childfileMenu_importCAD->addAction(p_action_catia);
	p_childfileMenu_importCAD->addAction(p_action_ug);
	p_childfileMenu_importCAD->addAction(p_action_proe);
	p_childfileMenu_importCAD->addAction(p_action_solidwork);
	p_childfileMenu_importCAD->addAction(p_action_jt3d);
	p_childfileMenu_importCAD->addAction(p_action_inventor);
	p_childfileMenu_importCAD->addAction(p_action_solidedge);
	p_childfileMenu_importCAD->addAction(p_action_drill);

	//exportCAD子菜单
	QMenu *p_childfileMenu_exportCAD = new QMenu(this);
	QAction *p_action_exportCAD_igse = new QAction("IGES...", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_igse);
	QAction *p_action_exportCAD_dxf = new QAction("DXF...", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_dxf);
	p_childfileMenu_exportCAD->addSeparator();
	QAction *p_action_exportCAD_includeNom = new QAction("Include Nom Features", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_includeNom);
	QAction *p_action_exportCAD_includeAct = new QAction("Include Act Features", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_includeAct);
	QAction *p_action_exportCAD_includeMea = new QAction("IGES...", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_includeMea);
	QAction *p_action_exportCAD_export = new QAction("Export measurement points only", p_childfileMenu_exportCAD);
	p_childfileMenu_exportCAD->addAction(p_action_exportCAD_export);

	p_fileMenu_exportCAD->setMenu(p_childfileMenu_exportCAD);
	//import Features子菜单
	QMenu *p_childfileMenu_importFeatures = new QMenu(this);
	QAction *p_action_fromText = new QAction("From Text File...", p_childfileMenu_importFeatures);
	QAction *p_action_fromDXF = new QAction("From DXF...", p_childfileMenu_importFeatures);
	QAction *p_action_with = new QAction("With Graphics", p_childfileMenu_importFeatures);
	QAction *p_action_importCircle = new QAction("Import Circle", p_childfileMenu_importFeatures);
	QAction *p_action_importLine = new QAction("Import Line", p_childfileMenu_importFeatures);
	QAction *p_action_importCurve = new QAction("Import Curve", p_childfileMenu_importFeatures);

	p_childfileMenu_importFeatures->addAction(p_action_fromText);
	p_childfileMenu_importFeatures->addAction(p_action_fromDXF);
	p_childfileMenu_importFeatures->addAction(p_action_with);
	p_childfileMenu_importFeatures->addAction(p_action_importCircle);
	p_childfileMenu_importFeatures->addAction(p_action_importLine);
	p_childfileMenu_importFeatures->addAction(p_action_importCurve);
	p_fileMenu_importFeatures->setMenu(p_childfileMenu_importFeatures);

	//export子菜单
	QMenu *p_childfileMenu_export = new QMenu(this);
	QAction *p_action_exportAsQ = new QAction("Export as Q-Das");
	p_childfileMenu_export->addAction(p_action_exportAsQ);
	p_fileMenu_export->setMenu(p_childfileMenu_export);

	//options子菜单
	QMenu *p_childfileMenu_options = new QMenu(this);
	QAction *p_action_App = new QAction("Application Setting", p_childfileMenu_options);
	QAction *p_action_Imp = new QAction("Import Application Setup", p_childfileMenu_options);
	QAction *p_action_Exp = new QAction("Export Application Setup", p_childfileMenu_options);

	p_childfileMenu_options->addAction(p_action_App);
	p_childfileMenu_options->addAction(p_action_Imp);
	p_childfileMenu_options->addAction(p_action_Exp);
	p_fileMenu_options->setMenu(p_childfileMenu_options);

	//Window子菜单
	QMenu *p_childfileMenu_window = new QMenu(this);
	QAction *p_action_Restore = new QAction("Restore default window position", p_childfileMenu_window);
	p_action_Restore->setShortcut(QKeySequence(QLatin1String("Ctrl+R")));
	QAction *p_action_SwitchI = new QAction("Switch image tool window position", p_childfileMenu_window);
	QAction *p_action_SwitchG = new QAction("Switch graphics tool window position", p_childfileMenu_window);
	QAction *p_action_SwitchD = new QAction("Switch data window position", p_childfileMenu_window);
	p_action_SwitchD->setShortcut(QKeySequence(QLatin1String("Ctrl+E")));
	QAction *p_action_IO = new QAction("I/O monitor window", p_childfileMenu_window);
	QAction *p_action_Shortcut = new QAction("Shortcut window", p_childfileMenu_window);
	p_action_Shortcut->setShortcut(QKeySequence(QLatin1String("Ctrl*2")));

	p_childfileMenu_window->addAction(p_action_Restore);
	p_childfileMenu_window->addAction(p_action_SwitchI);
	p_childfileMenu_window->addAction(p_action_SwitchG);
	p_childfileMenu_window->addAction(p_action_SwitchD);
	p_childfileMenu_window->addSeparator();
	p_childfileMenu_window->addAction(p_action_IO);
	p_childfileMenu_window->addAction(p_action_Shortcut);
	p_fileMenu_window->setMenu(p_childfileMenu_window);

	//help子菜单
	QMenu *p_childfileMenu_help = new QMenu(this);
	QAction *p_action_help = new QAction("Help", p_childfileMenu_help);
	QAction *p_action_ShowL = new QAction("Show License Agreement", p_childfileMenu_help);
	QAction *p_action_ShowA = new QAction("Show App Log Viewer", p_childfileMenu_help);
	QAction *p_action_tools = new QAction("Support Tools", p_childfileMenu_help);
	QAction *p_action_about = new QAction("About RationalVue...", p_childfileMenu_help);
	p_childfileMenu_help->addAction(p_action_help);
	p_childfileMenu_help->addAction(p_action_ShowL);
	p_childfileMenu_help->addAction(p_action_ShowA);
	p_childfileMenu_help->addAction(p_action_tools);
	p_childfileMenu_help->addAction(p_action_about);

	p_fileMenu_help->setMenu(p_childfileMenu_help);



	//recent solutions子菜单
	QMenu *p_childfileMenu_recent = new QMenu(this);
	p_fileMenu_recent->setMenu(p_childfileMenu_recent);

	QAction *p_action_quickAccess = new QAction(QIcon(":/icon/icon/chartDataManager.png"), "action1", this);
	p_action_quickAccess->setMenu(p_fileMenu);
	ribbon->quickAccessBar()->addButton(p_action_quickAccess);
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
	CLightControl *p_lightControl = new CLightControl();
	
	p_dataZoneLeft->AllDockWidgetFeatures;
	p_dataZoneRight->AllDockWidgetFeatures;
	p_dimensionReportZone->AllDockWidgetFeatures;
	p_graphiceZone->AllDockWidgetFeatures;
	p_machineStatusZone->AllDockWidgetFeatures;
	p_operationZoneLeft->AllDockWidgetFeatures;
	p_operationZoneRight->AllDockWidgetFeatures;
	p_paintZone->AllDockWidgetFeatures;
	p_lightControl->AllDockWidgetFeatures;

	addDockWidget(Qt::LeftDockWidgetArea, p_dimensionReportZone);
	splitDockWidget(p_dimensionReportZone, p_graphiceZone, Qt::Horizontal);
	splitDockWidget(p_graphiceZone,p_paintZone, Qt::Horizontal);
	splitDockWidget(p_dimensionReportZone,p_dataZoneLeft, Qt::Vertical);
	splitDockWidget(p_dataZoneLeft,p_dataZoneRight,Qt::Horizontal);
	splitDockWidget(p_graphiceZone,p_operationZoneLeft,Qt::Vertical);
	splitDockWidget(p_operationZoneLeft,p_operationZoneRight,Qt::Horizontal);
	splitDockWidget(p_paintZone,p_lightControl,Qt::Vertical);
	splitDockWidget(p_lightControl,p_machineStatusZone,Qt::Vertical);
	

    setStatusBar(p_statusBarZone);

	showNormal();
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

