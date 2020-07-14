/********************************************************************************
** Form generated from reading UI file 'dimensionReportZone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSIONREPORTZONE_H
#define UI_DIMENSIONREPORTZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDimensionReportZone
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *CDimensionReportZone)
    {
        if (CDimensionReportZone->objectName().isEmpty())
            CDimensionReportZone->setObjectName(QStringLiteral("CDimensionReportZone"));
        CDimensionReportZone->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        CDimensionReportZone->setWidget(dockWidgetContents);

        retranslateUi(CDimensionReportZone);

        QMetaObject::connectSlotsByName(CDimensionReportZone);
    } // setupUi

    void retranslateUi(QDockWidget *CDimensionReportZone)
    {
        CDimensionReportZone->setWindowTitle(QApplication::translate("CDimensionReportZone", "DockWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDimensionReportZone: public Ui_CDimensionReportZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSIONREPORTZONE_H
