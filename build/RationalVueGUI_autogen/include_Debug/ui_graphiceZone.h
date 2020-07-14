/********************************************************************************
** Form generated from reading UI file 'graphiceZone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICEZONE_H
#define UI_GRAPHICEZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGraphiceZone
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *CGraphiceZone)
    {
        if (CGraphiceZone->objectName().isEmpty())
            CGraphiceZone->setObjectName(QStringLiteral("CGraphiceZone"));
        CGraphiceZone->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        CGraphiceZone->setWidget(dockWidgetContents);

        retranslateUi(CGraphiceZone);

        QMetaObject::connectSlotsByName(CGraphiceZone);
    } // setupUi

    void retranslateUi(QDockWidget *CGraphiceZone)
    {
        CGraphiceZone->setWindowTitle(QApplication::translate("CGraphiceZone", "DockWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGraphiceZone: public Ui_CGraphiceZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICEZONE_H
