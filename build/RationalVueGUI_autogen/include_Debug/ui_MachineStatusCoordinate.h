/********************************************************************************
** Form generated from reading UI file 'MachineStatusCoordinate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESTATUSCOORDINATE_H
#define UI_MACHINESTATUSCOORDINATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMachineStatusCoordinate
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_14;
    QToolButton *toolButton_10;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;

    void setupUi(QWidget *CMachineStatusCoordinate)
    {
        if (CMachineStatusCoordinate->objectName().isEmpty())
            CMachineStatusCoordinate->setObjectName(QStringLiteral("CMachineStatusCoordinate"));
        CMachineStatusCoordinate->resize(350, 300);
        gridLayout_2 = new QGridLayout(CMachineStatusCoordinate);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 0, 4, 2);
        widget_1 = new QWidget(CMachineStatusCoordinate);
        widget_1->setObjectName(QStringLiteral("widget_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_1);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 3, 4, 3);
        toolButton_1 = new QToolButton(widget_1);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/button1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_1->setIcon(icon);

        horizontalLayout->addWidget(toolButton_1);

        toolButton_2 = new QToolButton(widget_1);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/button2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget_1);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/button3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_3);

        lineEdit = new QLineEdit(widget_1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(80, 20));
        lineEdit->setAutoFillBackground(true);

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBox = new QComboBox(widget_1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setMinimumContentsLength(3);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addWidget(widget_1, 0, 0, 1, 1);

        widget_2 = new QWidget(CMachineStatusCoordinate);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(4, 0, 4, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(200, 120));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAutoFillBackground(true);
        label_2->setLineWidth(0);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(100, 100));
        label_4->setFont(font);
        label_4->setLineWidth(0);
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(100, 100));
        label_6->setFont(font);
        label_6->setAutoFillBackground(true);
        label_6->setLineWidth(0);
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setLineWidth(0);
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(100, 100));
        label_10->setFont(font);
        label_10->setLineWidth(0);
        label_10->setScaledContents(true);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setAutoFillBackground(true);
        label_12->setLineWidth(0);
        label_12->setScaledContents(true);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 2, 3, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(100, 100));
        label_14->setFont(font);
        label_14->setAutoFillBackground(true);
        label_14->setLineWidth(0);
        label_14->setScaledContents(true);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 3, 1, 1, 1);

        toolButton_10 = new QToolButton(widget_2);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy3);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/X.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon3);
        toolButton_10->setIconSize(QSize(40, 40));

        gridLayout->addWidget(toolButton_10, 0, 0, 1, 1);

        toolButton_4 = new QToolButton(widget_2);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/YY.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon4);
        toolButton_4->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_4, 0, 2, 1, 1);

        toolButton_5 = new QToolButton(widget_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy3.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy3);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/Y.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon5);
        toolButton_5->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_5, 1, 0, 1, 1);

        toolButton_6 = new QToolButton(widget_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/ZZ.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon6);
        toolButton_6->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_6, 1, 2, 1, 1);

        toolButton_7 = new QToolButton(widget_2);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        sizePolicy3.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy3);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/Z.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon7);
        toolButton_7->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_7, 2, 0, 1, 1);

        toolButton_8 = new QToolButton(widget_2);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setAutoFillBackground(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/peo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_8->setIcon(icon8);
        toolButton_8->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_8, 2, 2, 1, 1);

        toolButton_9 = new QToolButton(widget_2);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(20);
        toolButton_9->setFont(font1);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/XX.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon9);
        toolButton_9->setIconSize(QSize(30, 30));

        gridLayout->addWidget(toolButton_9, 3, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(CMachineStatusCoordinate);

        QMetaObject::connectSlotsByName(CMachineStatusCoordinate);
    } // setupUi

    void retranslateUi(QWidget *CMachineStatusCoordinate)
    {
        CMachineStatusCoordinate->setWindowTitle(QApplication::translate("CMachineStatusCoordinate", "Form", Q_NULLPTR));
        toolButton_1->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("CMachineStatusCoordinate", "PT4", Q_NULLPTR));
        label_2->setText(QApplication::translate("CMachineStatusCoordinate", "76.49", Q_NULLPTR));
        label_4->setText(QApplication::translate("CMachineStatusCoordinate", "0.00", Q_NULLPTR));
        label_6->setText(QApplication::translate("CMachineStatusCoordinate", "0.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("CMachineStatusCoordinate", "0.00", Q_NULLPTR));
        label_10->setText(QApplication::translate("CMachineStatusCoordinate", "-2.85", Q_NULLPTR));
        label_12->setText(QApplication::translate("CMachineStatusCoordinate", "-0.00", Q_NULLPTR));
        label_14->setText(QApplication::translate("CMachineStatusCoordinate", "0.00", Q_NULLPTR));
        toolButton_10->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
        toolButton_9->setText(QApplication::translate("CMachineStatusCoordinate", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMachineStatusCoordinate: public Ui_CMachineStatusCoordinate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESTATUSCOORDINATE_H
