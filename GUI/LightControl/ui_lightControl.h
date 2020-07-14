/********************************************************************************
** Form generated from reading UI file 'lightControl.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTCONTROL_H
#define UI_LIGHTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
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
            CLightControl->setObjectName(QString::fromUtf8("CLightControl"));
        CLightControl->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        light_mod_2 = new QToolButton(dockWidgetContents);
        light_mod_2->setObjectName(QString::fromUtf8("light_mod_2"));
        light_mod_2->setGeometry(QRect(340, 100, 21, 21));
        light_mod_4 = new QToolButton(dockWidgetContents);
        light_mod_4->setObjectName(QString::fromUtf8("light_mod_4"));
        light_mod_4->setGeometry(QRect(340, 200, 21, 21));
        light_brightness = new QSlider(dockWidgetContents);
        light_brightness->setObjectName(QString::fromUtf8("light_brightness"));
        light_brightness->setGeometry(QRect(30, 40, 22, 211));
        light_brightness->setOrientation(Qt::Vertical);
        light_mod_1 = new QToolButton(dockWidgetContents);
        light_mod_1->setObjectName(QString::fromUtf8("light_mod_1"));
        light_mod_1->setGeometry(QRect(340, 50, 21, 21));
        light_on = new QToolButton(dockWidgetContents);
        light_on->setObjectName(QString::fromUtf8("light_on"));
        light_on->setGeometry(QRect(70, 20, 21, 21));
        light_mod_3 = new QToolButton(dockWidgetContents);
        light_mod_3->setObjectName(QString::fromUtf8("light_mod_3"));
        light_mod_3->setGeometry(QRect(340, 150, 21, 21));
        lightCirclePanel = new QWidget(dockWidgetContents);
        lightCirclePanel->setObjectName(QString::fromUtf8("lightCirclePanel"));
        lightCirclePanel->setGeometry(QRect(140, 50, 180, 180));
        light_off = new QToolButton(dockWidgetContents);
        light_off->setObjectName(QString::fromUtf8("light_off"));
        light_off->setGeometry(QRect(70, 240, 21, 21));
        CLightControl->setWidget(dockWidgetContents);

        retranslateUi(CLightControl);

        QMetaObject::connectSlotsByName(CLightControl);
    } // setupUi

    void retranslateUi(QDockWidget *CLightControl)
    {
        CLightControl->setWindowTitle(QCoreApplication::translate("CLightControl", "DockWidget", nullptr));
        light_mod_2->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
        light_mod_4->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
        light_mod_1->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
        light_on->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
        light_mod_3->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
        light_off->setText(QCoreApplication::translate("CLightControl", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CLightControl: public Ui_CLightControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTCONTROL_H
