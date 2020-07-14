/********************************************************************************
** Form generated from reading UI file 'machineStatusZone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESTATUSZONE_H
#define UI_MACHINESTATUSZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMachineStatusZone
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *CMachineStatusZone)
    {
        if (CMachineStatusZone->objectName().isEmpty())
            CMachineStatusZone->setObjectName(QStringLiteral("CMachineStatusZone"));
        CMachineStatusZone->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        CMachineStatusZone->setWidget(dockWidgetContents);

        retranslateUi(CMachineStatusZone);

        QMetaObject::connectSlotsByName(CMachineStatusZone);
    } // setupUi

    void retranslateUi(QDockWidget *CMachineStatusZone)
    {
        CMachineStatusZone->setWindowTitle(QApplication::translate("CMachineStatusZone", "DockWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMachineStatusZone: public Ui_CMachineStatusZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESTATUSZONE_H
