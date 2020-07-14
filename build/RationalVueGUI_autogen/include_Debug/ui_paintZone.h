/********************************************************************************
** Form generated from reading UI file 'paintZone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTZONE_H
#define UI_PAINTZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPaintZone
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QToolButton *toolButton_9;
    QToolButton *toolButton_3;
    QToolButton *toolButton_8;
    QToolButton *toolButton_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_7;
    QToolButton *toolButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_11;
    QToolButton *toolButton_13;
    QToolButton *toolButton_12;
    QToolButton *toolButton_10;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton_14;
    QToolButton *toolButton_17;
    QToolButton *toolButton_16;
    QToolButton *toolButton_15;

    void setupUi(QDockWidget *CPaintZone)
    {
        if (CPaintZone->objectName().isEmpty())
            CPaintZone->setObjectName(QStringLiteral("CPaintZone"));
        CPaintZone->resize(349, 344);
        CPaintZone->setStyleSheet(QLatin1String("\n"
"QToolButton:checked{ \n"
"color:rgb(255,255,255);\n"
"background:rgb(255,255,255);\n"
"}\n"
"\n"
"QToolButton:pressed{ \n"
"color:rgb(255, 255, 255);\n"
"background:rgb(255,255,255);\n"
"}	\n"
"QFrame\n"
"{\n"
"	border-radius:10px;\n"
"	background:rgb(184,183,189)	;\n"
"	border-left: 5px solid rgb(145,148,157) ;\n"
"	border-right: 5px solid rgb(145,148,157);\n"
"	border-top: 18px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(178,178,188, 255), stop:1 rgba(143,146,155, 255)) ;\n"
"	border-bottom: 11px solid rgb(145,148,157);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	border-radius:2px;\n"
"	background:rgb(210,214,223);\n"
"	border:1px solid rgb(138,143,156)\n"
"}\n"
""));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(dockWidgetContents);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 5);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_9 = new QToolButton(frame);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ima_icons/1.6.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon);
        toolButton_9->setIconSize(QSize(30, 30));
        toolButton_9->setCheckable(true);
        toolButton_9->setAutoRaise(true);

        gridLayout->addWidget(toolButton_9, 3, 0, 1, 1);

        toolButton_3 = new QToolButton(frame);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ima_icons/1.1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon1);
        toolButton_3->setIconSize(QSize(40, 40));
        toolButton_3->setCheckable(true);
        toolButton_3->setAutoRaise(true);

        gridLayout->addWidget(toolButton_3, 2, 0, 1, 1);

        toolButton_8 = new QToolButton(frame);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ima_icons/1.5.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon2);
        toolButton_8->setIconSize(QSize(40, 40));
        toolButton_8->setCheckable(true);
        toolButton_8->setAutoRaise(true);

        gridLayout->addWidget(toolButton_8, 2, 2, 1, 1);

        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ima_icons/1.8.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon3);
        toolButton_2->setIconSize(QSize(40, 40));
        toolButton_2->setAutoRaise(true);

        gridLayout->addWidget(toolButton_2, 2, 6, 1, 1);

        toolButton_6 = new QToolButton(frame);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ima_icons/1.3.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon4);
        toolButton_6->setIconSize(QSize(40, 40));
        toolButton_6->setCheckable(true);
        toolButton_6->setAutoRaise(true);

        gridLayout->addWidget(toolButton_6, 2, 4, 1, 1);

        toolButton_4 = new QToolButton(frame);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ima_icons/1.2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon5);
        toolButton_4->setIconSize(QSize(40, 40));
        toolButton_4->setCheckable(true);
        toolButton_4->setAutoRaise(true);

        gridLayout->addWidget(toolButton_4, 2, 3, 1, 1);

        toolButton_5 = new QToolButton(frame);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ima_icons/1.9.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon6);
        toolButton_5->setIconSize(QSize(40, 40));
        toolButton_5->setCheckable(true);
        toolButton_5->setChecked(false);
        toolButton_5->setAutoRaise(true);

        gridLayout->addWidget(toolButton_5, 3, 1, 1, 1);

        toolButton_7 = new QToolButton(frame);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ima_icons/1.4.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon7);
        toolButton_7->setIconSize(QSize(40, 40));
        toolButton_7->setCheckable(true);
        toolButton_7->setAutoRaise(true);

        gridLayout->addWidget(toolButton_7, 2, 1, 1, 1);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ima_icons/1.7.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon8);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setCheckable(true);
        toolButton->setAutoRaise(true);

        gridLayout->addWidget(toolButton, 2, 5, 1, 1);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_11 = new QToolButton(frame_2);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ima_icons/2.1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_11->setIcon(icon9);
        toolButton_11->setIconSize(QSize(40, 40));
        toolButton_11->setCheckable(true);
        toolButton_11->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_11);

        toolButton_13 = new QToolButton(frame_2);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ima_icons/2.2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_13->setIcon(icon10);
        toolButton_13->setIconSize(QSize(40, 40));
        toolButton_13->setCheckable(true);
        toolButton_13->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_13);

        toolButton_12 = new QToolButton(frame_2);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/ima_icons/2.3.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon11);
        toolButton_12->setIconSize(QSize(40, 40));
        toolButton_12->setCheckable(true);
        toolButton_12->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_12);

        toolButton_10 = new QToolButton(frame_2);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/ima_icons/2.4.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon12);
        toolButton_10->setIconSize(QSize(40, 40));
        toolButton_10->setCheckable(true);
        toolButton_10->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_10);


        verticalLayout_2->addWidget(frame_2);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(110, 25));
        lineEdit->setMaximumSize(QSize(20, 20));
        lineEdit->setStyleSheet(QStringLiteral(""));
        lineEdit->setMaxLength(700);

        horizontalLayout_2->addWidget(lineEdit);

        toolButton_14 = new QToolButton(frame_4);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/ima_icons/3.1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_14->setIcon(icon13);
        toolButton_14->setIconSize(QSize(40, 40));
        toolButton_14->setCheckable(true);
        toolButton_14->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_14);

        toolButton_17 = new QToolButton(frame_4);
        toolButton_17->setObjectName(QStringLiteral("toolButton_17"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/ima_icons/3.2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_17->setIcon(icon14);
        toolButton_17->setIconSize(QSize(40, 40));
        toolButton_17->setCheckable(true);
        toolButton_17->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_17);

        toolButton_16 = new QToolButton(frame_4);
        toolButton_16->setObjectName(QStringLiteral("toolButton_16"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/ima_icons/3.3.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_16->setIcon(icon15);
        toolButton_16->setIconSize(QSize(40, 40));
        toolButton_16->setCheckable(true);
        toolButton_16->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_16);

        toolButton_15 = new QToolButton(frame_4);
        toolButton_15->setObjectName(QStringLiteral("toolButton_15"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/ima_icons/3.4.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_15->setIcon(icon16);
        toolButton_15->setIconSize(QSize(40, 40));
        toolButton_15->setCheckable(true);
        toolButton_15->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_15);


        verticalLayout_2->addWidget(frame_4);


        verticalLayout->addWidget(frame_3);

        CPaintZone->setWidget(dockWidgetContents);

        retranslateUi(CPaintZone);

        QMetaObject::connectSlotsByName(CPaintZone);
    } // setupUi

    void retranslateUi(QDockWidget *CPaintZone)
    {
        CPaintZone->setWindowTitle(QString());
        toolButton_9->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_11->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_13->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_12->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_10->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("CPaintZone", "PT1", Q_NULLPTR));
        toolButton_14->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_17->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_16->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        toolButton_15->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPaintZone: public Ui_CPaintZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTZONE_H
