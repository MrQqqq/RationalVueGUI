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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPaintZone
{
public:
    QSlider *light_brightness;
    QToolButton *light_on;
    QToolButton *light_off;
    QToolButton *light_mod_1;
    QToolButton *light_mod_2;
    QToolButton *light_mod_3;
    QToolButton *light_mod_4;
    QWidget *lightCirclePanel;

    void setupUi(QWidget *CPaintZone)
    {
        if (CPaintZone->objectName().isEmpty())
            CPaintZone->setObjectName(QStringLiteral("CPaintZone"));
        CPaintZone->resize(386, 300);
        light_brightness = new QSlider(CPaintZone);
        light_brightness->setObjectName(QStringLiteral("light_brightness"));
        light_brightness->setGeometry(QRect(50, 40, 22, 211));
        light_brightness->setOrientation(Qt::Vertical);
        light_on = new QToolButton(CPaintZone);
        light_on->setObjectName(QStringLiteral("light_on"));
        light_on->setGeometry(QRect(50, 10, 21, 21));
        QIcon icon;
        icon.addFile(QStringLiteral("icons/light_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        light_on->setIcon(icon);
        light_off = new QToolButton(CPaintZone);
        light_off->setObjectName(QStringLiteral("light_off"));
        light_off->setGeometry(QRect(50, 260, 21, 21));
        light_mod_1 = new QToolButton(CPaintZone);
        light_mod_1->setObjectName(QStringLiteral("light_mod_1"));
        light_mod_1->setGeometry(QRect(330, 60, 21, 21));
        light_mod_2 = new QToolButton(CPaintZone);
        light_mod_2->setObjectName(QStringLiteral("light_mod_2"));
        light_mod_2->setGeometry(QRect(330, 110, 21, 21));
        light_mod_3 = new QToolButton(CPaintZone);
        light_mod_3->setObjectName(QStringLiteral("light_mod_3"));
        light_mod_3->setGeometry(QRect(330, 160, 21, 21));
        light_mod_4 = new QToolButton(CPaintZone);
        light_mod_4->setObjectName(QStringLiteral("light_mod_4"));
        light_mod_4->setGeometry(QRect(330, 210, 21, 21));
        lightCirclePanel = new QWidget(CPaintZone);
        lightCirclePanel->setObjectName(QStringLiteral("lightCirclePanel"));
        lightCirclePanel->setGeometry(QRect(130, 60, 171, 171));

        retranslateUi(CPaintZone);

        QMetaObject::connectSlotsByName(CPaintZone);
    } // setupUi

    void retranslateUi(QWidget *CPaintZone)
    {
        CPaintZone->setWindowTitle(QApplication::translate("CPaintZone", "lightControl", Q_NULLPTR));
        light_on->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        light_off->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        light_mod_1->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        light_mod_2->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        light_mod_3->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
        light_mod_4->setText(QApplication::translate("CPaintZone", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPaintZone: public Ui_CPaintZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTZONE_H
