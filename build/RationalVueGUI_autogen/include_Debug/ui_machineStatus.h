/********************************************************************************
** Form generated from reading UI file 'machineStatus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESTATUS_H
#define UI_MACHINESTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMachineStatus
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_1;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLCDNumber *lcdNumber_1;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdNumber_3;

    void setupUi(QWidget *CMachineStatus)
    {
        if (CMachineStatus->objectName().isEmpty())
            CMachineStatus->setObjectName(QStringLiteral("CMachineStatus"));
        CMachineStatus->setEnabled(true);
        CMachineStatus->resize(400, 210);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CMachineStatus->sizePolicy().hasHeightForWidth());
        CMachineStatus->setSizePolicy(sizePolicy);
        CMachineStatus->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(CMachineStatus);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, -1, -1);
        widget = new QWidget(CMachineStatus);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 3);
        toolButton_1 = new QToolButton(widget);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_1->sizePolicy().hasHeightForWidth());
        toolButton_1->setSizePolicy(sizePolicy2);
        toolButton_1->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_1->setIcon(icon);

        horizontalLayout_2->addWidget(toolButton_1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(9);
        lineEdit->setFont(font);
        lineEdit->setAutoFillBackground(true);
        lineEdit->setMaxLength(40);

        horizontalLayout_2->addWidget(lineEdit);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);

        horizontalLayout_2->addWidget(toolButton_2);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setMinimumContentsLength(6);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(CMachineStatus);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(widget_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(18);
        label_1->setFont(font1);
        label_1->setAutoFillBackground(true);
        label_1->setLineWidth(0);
        label_1->setScaledContents(true);
        label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(36);
        label_2->setFont(font2);
        label_2->setLineWidth(0);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lcdNumber_1 = new QLCDNumber(widget_2);
        lcdNumber_1->setObjectName(QStringLiteral("lcdNumber_1"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        lcdNumber_1->setFont(font3);
        lcdNumber_1->setAutoFillBackground(true);
        lcdNumber_1->setLineWidth(0);
        lcdNumber_1->setSmallDecimalPoint(true);
        lcdNumber_1->setDigitCount(8);
        lcdNumber_1->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_1->setProperty("value", QVariant(20.023));

        horizontalLayout->addWidget(lcdNumber_1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(CMachineStatus);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font1);
        label_3->setAutoFillBackground(true);
        label_3->setLineWidth(0);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font2);
        label_4->setLineWidth(0);
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        lcdNumber_2 = new QLCDNumber(widget_3);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setFont(font3);
        lcdNumber_2->setAutoFillBackground(true);
        lcdNumber_2->setLineWidth(0);
        lcdNumber_2->setSmallDecimalPoint(true);
        lcdNumber_2->setDigitCount(8);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("value", QVariant(12.0007));

        horizontalLayout_3->addWidget(lcdNumber_2);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(CMachineStatus);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font1);
        label_5->setAutoFillBackground(true);
        label_5->setLineWidth(0);
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setFont(font2);
        label_6->setLineWidth(0);
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        lcdNumber_3 = new QLCDNumber(widget_4);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        sizePolicy.setHeightForWidth(lcdNumber_3->sizePolicy().hasHeightForWidth());
        lcdNumber_3->setSizePolicy(sizePolicy);
        lcdNumber_3->setFont(font3);
        lcdNumber_3->setAutoFillBackground(true);
        lcdNumber_3->setLineWidth(0);
        lcdNumber_3->setSmallDecimalPoint(true);
        lcdNumber_3->setDigitCount(8);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("value", QVariant(0.1212));

        horizontalLayout_4->addWidget(lcdNumber_3);


        verticalLayout->addWidget(widget_4);


        retranslateUi(CMachineStatus);

        QMetaObject::connectSlotsByName(CMachineStatus);
    } // setupUi

    void retranslateUi(QWidget *CMachineStatus)
    {
        CMachineStatus->setWindowTitle(QApplication::translate("CMachineStatus", "Form", Q_NULLPTR));
        toolButton_1->setText(QApplication::translate("CMachineStatus", "...", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("CMachineStatus", "MCS", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("CMachineStatus", "...", Q_NULLPTR));
        label_1->setText(QApplication::translate("CMachineStatus", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("CMachineStatus", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("CMachineStatus", "Y", Q_NULLPTR));
        label_4->setText(QApplication::translate("CMachineStatus", "Y", Q_NULLPTR));
        label_5->setText(QApplication::translate("CMachineStatus", "Z", Q_NULLPTR));
        label_6->setText(QApplication::translate("CMachineStatus", "Z", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMachineStatus: public Ui_CMachineStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESTATUS_H
