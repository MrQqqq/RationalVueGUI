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
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLightControl
{
public:
    QWidget *dockWidgetContents;
    QToolButton *light_mod_2;
    QToolButton *light_mod_4;
    QSlider *light_brightness;
    QToolButton *light_mod_1;
    QToolButton *light_on;
    QToolButton *light_mod_3;
    QWidget *lightCirclePanel;
    QToolButton *light_off;

    void setupUi(QDockWidget *CLightControl)
    {
        if (CLightControl->objectName().isEmpty())
            CLightControl->setObjectName(QStringLiteral("CLightControl"));
        CLightControl->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        light_mod_2 = new QToolButton(dockWidgetContents);
        light_mod_2->setObjectName(QStringLiteral("light_mod_2"));
        light_mod_2->setGeometry(QRect(340, 100, 21, 21));
        light_mod_4 = new QToolButton(dockWidgetContents);
        light_mod_4->setObjectName(QStringLiteral("light_mod_4"));
        light_mod_4->setGeometry(QRect(340, 200, 21, 21));
        light_brightness = new QSlider(dockWidgetContents);
        light_brightness->setObjectName(QStringLiteral("light_brightness"));
        light_brightness->setGeometry(QRect(30, 40, 22, 211));
        light_brightness->setOrientation(Qt::Vertical);
        light_mod_1 = new QToolButton(dockWidgetContents);
        light_mod_1->setObjectName(QStringLiteral("light_mod_1"));
        light_mod_1->setGeometry(QRect(340, 50, 21, 21));
        light_on = new QToolButton(dockWidgetContents);
        light_on->setObjectName(QStringLiteral("light_on"));
        light_on->setGeometry(QRect(70, 20, 21, 21));
        light_mod_3 = new QToolButton(dockWidgetContents);
        light_mod_3->setObjectName(QStringLiteral("light_mod_3"));
        light_mod_3->setGeometry(QRect(340, 150, 21, 21));
        lightCirclePanel = new QWidget(dockWidgetContents);
        lightCirclePanel->setObjectName(QStringLiteral("lightCirclePanel"));
        lightCirclePanel->setGeometry(QRect(140, 50, 180, 180));
        light_off = new QToolButton(dockWidgetContents);
        light_off->setObjectName(QStringLiteral("light_off"));
        light_off->setGeometry(QRect(70, 240, 21, 21));
        CLightControl->setWidget(dockWidgetContents);

        retranslateUi(CLightControl);

        QMetaObject::connectSlotsByName(CLightControl);
    } // setupUi

    void retranslateUi(QDockWidget *CLightControl)
    {
        CLightControl->setWindowTitle(QApplication::translate("CLightControl", "DockWidget", Q_NULLPTR));
        light_mod_2->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
        light_mod_4->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
        light_mod_1->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
        light_on->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
        light_mod_3->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
        light_off->setText(QApplication::translate("CLightControl", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CLightControl: public Ui_CLightControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTCONTROL_H
