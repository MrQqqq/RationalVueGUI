/********************************************************************************
** Form generated from reading UI file 'operationZoneLeft.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATIONZONELEFT_H
#define UI_OPERATIONZONELEFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COperationZoneLeft
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QToolButton *toolButton_8;
    QToolButton *toolButton_7;
    QToolButton *toolButton_5;
    QToolButton *toolButton;
    QToolButton *toolButton_4;
    QToolButton *toolButton_3;
    QToolButton *toolButton_6;
    QToolButton *toolButton_2;
    QToolButton *toolButton_12;
    QToolButton *toolButton_11;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QWidget *tab_4;
    QWidget *tab_3;
    QWidget *tab;

    void setupUi(QDockWidget *COperationZoneLeft)
    {
        if (COperationZoneLeft->objectName().isEmpty())
            COperationZoneLeft->setObjectName(QStringLiteral("COperationZoneLeft"));
        COperationZoneLeft->resize(400, 348);
        COperationZoneLeft->setStyleSheet(QLatin1String("\n"
"QToolButton:checked{ \n"
"color:rgb(255,255,255);\n"
"background:rgb(255,255,255);\n"
"}\n"
"\n"
"QToolButton:pressed{ \n"
"color:rgb(255, 255, 255);\n"
"background:rgb(255,255,255);\n"
"}\n"
"\n"
"QTabWidget::pane\n"
"{\n"
"	border: 1px;\n"
"	background: rgb(144,148,156);\n"
"	border-bottom-left-radius:5px;\n"
"	border-bottom-right-radius:5px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"	color: rgb(196,195,202);\n"
"	background:rgb(196,195,202);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"	color: rgb(144,148,156);\n"
"	background:rgb(144,148,156);\n"
"}"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(63, 0));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(31, 20));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setMinimumSize(QSize(63, 30));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 251, 146));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_9 = new QToolButton(gridLayoutWidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/it_icons/2.9.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon);
        toolButton_9->setIconSize(QSize(30, 30));
        toolButton_9->setCheckable(true);
        toolButton_9->setAutoRaise(true);

        gridLayout->addWidget(toolButton_9, 2, 0, 1, 1);

        toolButton_10 = new QToolButton(gridLayoutWidget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/it_icons/2.8.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon1);
        toolButton_10->setIconSize(QSize(30, 30));
        toolButton_10->setCheckable(true);
        toolButton_10->setAutoRaise(true);

        gridLayout->addWidget(toolButton_10, 1, 7, 1, 1);

        toolButton_8 = new QToolButton(gridLayoutWidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/it_icons/2.2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon2);
        toolButton_8->setIconSize(QSize(30, 30));
        toolButton_8->setCheckable(true);
        toolButton_8->setAutoRaise(true);

        gridLayout->addWidget(toolButton_8, 0, 1, 1, 1);

        toolButton_7 = new QToolButton(gridLayoutWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/it_icons/2.3.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon3);
        toolButton_7->setIconSize(QSize(30, 30));
        toolButton_7->setCheckable(true);
        toolButton_7->setAutoRaise(true);

        gridLayout->addWidget(toolButton_7, 0, 2, 1, 1);

        toolButton_5 = new QToolButton(gridLayoutWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/it_icons/2.4.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon4);
        toolButton_5->setIconSize(QSize(30, 30));
        toolButton_5->setCheckable(true);
        toolButton_5->setAutoRaise(true);

        gridLayout->addWidget(toolButton_5, 0, 7, 1, 1);

        toolButton = new QToolButton(gridLayoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/it_icons/2.1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon5);
        toolButton->setIconSize(QSize(30, 30));
        toolButton->setCheckable(true);
        toolButton->setAutoRaise(true);

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        toolButton_4 = new QToolButton(gridLayoutWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/it_icons/2.5.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon6);
        toolButton_4->setIconSize(QSize(30, 30));
        toolButton_4->setCheckable(true);
        toolButton_4->setAutoRaise(true);

        gridLayout->addWidget(toolButton_4, 1, 0, 1, 1);

        toolButton_3 = new QToolButton(gridLayoutWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/it_icons/2.7.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon7);
        toolButton_3->setIconSize(QSize(30, 30));
        toolButton_3->setCheckable(true);
        toolButton_3->setAutoRaise(true);

        gridLayout->addWidget(toolButton_3, 1, 2, 1, 1);

        toolButton_6 = new QToolButton(gridLayoutWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/it_icons/2.10.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon8);
        toolButton_6->setIconSize(QSize(30, 30));
        toolButton_6->setCheckable(true);
        toolButton_6->setAutoRaise(true);

        gridLayout->addWidget(toolButton_6, 2, 1, 1, 1);

        toolButton_2 = new QToolButton(gridLayoutWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/it_icons/2.6.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon9);
        toolButton_2->setIconSize(QSize(30, 30));
        toolButton_2->setCheckable(true);
        toolButton_2->setChecked(false);
        toolButton_2->setAutoRaise(true);

        gridLayout->addWidget(toolButton_2, 1, 1, 1, 1);

        toolButton_12 = new QToolButton(gridLayoutWidget);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/it_icons/2.12.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon10);
        toolButton_12->setIconSize(QSize(30, 30));
        toolButton_12->setCheckable(true);
        toolButton_12->setAutoRaise(true);

        gridLayout->addWidget(toolButton_12, 2, 7, 1, 1);

        toolButton_11 = new QToolButton(gridLayoutWidget);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/it_icons/2.11.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_11->setIcon(icon11);
        toolButton_11->setIconSize(QSize(30, 30));
        toolButton_11->setCheckable(true);
        toolButton_11->setAutoRaise(true);

        gridLayout->addWidget(toolButton_11, 2, 2, 1, 1);

        toolButton_13 = new QToolButton(gridLayoutWidget);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/it_icons/2.13.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_13->setIcon(icon12);
        toolButton_13->setIconSize(QSize(30, 30));
        toolButton_13->setCheckable(true);
        toolButton_13->setAutoRaise(true);

        gridLayout->addWidget(toolButton_13, 3, 0, 1, 1);

        toolButton_14 = new QToolButton(gridLayoutWidget);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/it_icons/2.14.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_14->setIcon(icon13);
        toolButton_14->setIconSize(QSize(30, 30));
        toolButton_14->setCheckable(true);
        toolButton_14->setAutoRaise(true);

        gridLayout->addWidget(toolButton_14, 3, 1, 1, 1);

        QIcon icon14;
        icon14.addFile(QStringLiteral(":/it_icons/1.2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon14, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/it_icons/1.3.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon15, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/it_icons/1.4.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon16, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/it_icons/1.1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon17, QString());

        verticalLayout->addWidget(tabWidget);

        COperationZoneLeft->setWidget(dockWidgetContents);

        retranslateUi(COperationZoneLeft);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(COperationZoneLeft);
    } // setupUi

    void retranslateUi(QDockWidget *COperationZoneLeft)
    {
        COperationZoneLeft->setWindowTitle(QString());
        toolButton_9->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_10->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_12->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_11->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_13->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        toolButton_14->setText(QApplication::translate("COperationZoneLeft", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
    } // retranslateUi

};

namespace Ui {
    class COperationZoneLeft: public Ui_COperationZoneLeft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATIONZONELEFT_H
