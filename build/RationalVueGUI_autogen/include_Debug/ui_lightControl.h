/********************************************************************************
** Form generated from reading UI file 'lightControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTCONTROL_H
#define UI_LIGHTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLightControl
{
public:
    QWidget *dockWidgetContents;

    void setupUi(QDockWidget *CLightControl)
    {
        if (CLightControl->objectName().isEmpty())
            CLightControl->setObjectName(QStringLiteral("CLightControl"));
        CLightControl->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        CLightControl->setWidget(dockWidgetContents);

        retranslateUi(CLightControl);

        QMetaObject::connectSlotsByName(CLightControl);
    } // setupUi

    void retranslateUi(QDockWidget *CLightControl)
    {
        CLightControl->setWindowTitle(QApplication::translate("CLightControl", "DockWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CLightControl: public Ui_CLightControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTCONTROL_H
