/********************************************************************************
** Form generated from reading UI file 'dataZoneLeft.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAZONELEFT_H
#define UI_DATAZONELEFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDataZoneLeft
{
public:
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QWidget *widget;
    QWidget *widget_2;

    void setupUi(QWidget *CDataZoneLeft)
    {
        if (CDataZoneLeft->objectName().isEmpty())
            CDataZoneLeft->setObjectName(QStringLiteral("CDataZoneLeft"));
        CDataZoneLeft->resize(214, 362);
        dockWidget = new QDockWidget(CDataZoneLeft);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setGeometry(QRect(0, 0, 221, 351));
        dockWidget->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 31, 331));
        widget_2 = new QWidget(dockWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(30, 0, 191, 331));
        dockWidget->setWidget(dockWidgetContents);

        retranslateUi(CDataZoneLeft);

        QMetaObject::connectSlotsByName(CDataZoneLeft);
    } // setupUi

    void retranslateUi(QWidget *CDataZoneLeft)
    {
        CDataZoneLeft->setWindowTitle(QApplication::translate("CDataZoneLeft", "CDataZoneLeft", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDataZoneLeft: public Ui_CDataZoneLeft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAZONELEFT_H
