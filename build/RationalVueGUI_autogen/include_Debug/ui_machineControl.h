/********************************************************************************
** Form generated from reading UI file 'machineControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINECONTROL_H
#define UI_MACHINECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMachineControl
{
public:

    void setupUi(QWidget *CMachineControl)
    {
        if (CMachineControl->objectName().isEmpty())
            CMachineControl->setObjectName(QStringLiteral("CMachineControl"));
        CMachineControl->resize(400, 300);

        retranslateUi(CMachineControl);

        QMetaObject::connectSlotsByName(CMachineControl);
    } // setupUi

    void retranslateUi(QWidget *CMachineControl)
    {
        CMachineControl->setWindowTitle(QApplication::translate("CMachineControl", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMachineControl: public Ui_CMachineControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINECONTROL_H
