/********************************************************************************
** Form generated from reading UI file 'operationzoneright.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATIONZONERIGHT_H
#define UI_OPERATIONZONERIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COperationZoneRight
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *NomActBtns_2;
    QLabel *label_4;
    QLineEdit *LineEdit_LSENew;
    QPushButton *NomActBtns;
    QCheckBox *AxisRotation_3;
    QLineEdit *LineEdit_LSEOrig;
    QCheckBox *AxisRotation_2;
    QLabel *label_5;
    QLineEdit *lineEdit_ShrinkFactor;
    QTableWidget *tableWidget;
    QLabel *Label_LSENew;
    QLabel *Label_LSEOrig;
    QCheckBox *AxisRotation;
    QCheckBox *AxisTranslation;
    QCheckBox *CheckBox_ShrinkFactor;
    QCheckBox *AxisTranslation_2;
    QCheckBox *AxisTranslation_3;
    QLabel *NomActFeature;
    QPushButton *NomActBtns_3;

    void setupUi(QDockWidget *COperationZoneRight)
    {
        if (COperationZoneRight->objectName().isEmpty())
            COperationZoneRight->setObjectName(QStringLiteral("COperationZoneRight"));
        COperationZoneRight->resize(709, 259);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        NomActBtns_2 = new QPushButton(dockWidgetContents);
        NomActBtns_2->setObjectName(QStringLiteral("NomActBtns_2"));
        NomActBtns_2->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(NomActBtns_2, 6, 2, 1, 1);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(30, 30));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/NomActIcon1.png")));
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        LineEdit_LSENew = new QLineEdit(dockWidgetContents);
        LineEdit_LSENew->setObjectName(QStringLiteral("LineEdit_LSENew"));
        LineEdit_LSENew->setMaximumSize(QSize(120, 16777215));
        LineEdit_LSENew->setReadOnly(true);

        gridLayout->addWidget(LineEdit_LSENew, 5, 4, 1, 2);

        NomActBtns = new QPushButton(dockWidgetContents);
        NomActBtns->setObjectName(QStringLiteral("NomActBtns"));
        NomActBtns->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(NomActBtns, 6, 1, 1, 1);

        AxisRotation_3 = new QCheckBox(dockWidgetContents);
        AxisRotation_3->setObjectName(QStringLiteral("AxisRotation_3"));
        AxisRotation_3->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisRotation_3, 4, 2, 1, 1);

        LineEdit_LSEOrig = new QLineEdit(dockWidgetContents);
        LineEdit_LSEOrig->setObjectName(QStringLiteral("LineEdit_LSEOrig"));
        LineEdit_LSEOrig->setMaximumSize(QSize(120, 16777215));
        LineEdit_LSEOrig->setReadOnly(true);

        gridLayout->addWidget(LineEdit_LSEOrig, 5, 2, 1, 1);

        AxisRotation_2 = new QCheckBox(dockWidgetContents);
        AxisRotation_2->setObjectName(QStringLiteral("AxisRotation_2"));
        AxisRotation_2->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisRotation_2, 3, 2, 1, 1);

        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(30, 30));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/NomActIcon2.png")));
        label_5->setScaledContents(true);

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        lineEdit_ShrinkFactor = new QLineEdit(dockWidgetContents);
        lineEdit_ShrinkFactor->setObjectName(QStringLiteral("lineEdit_ShrinkFactor"));
        lineEdit_ShrinkFactor->setMaximumSize(QSize(120, 16777215));
        lineEdit_ShrinkFactor->setReadOnly(true);

        gridLayout->addWidget(lineEdit_ShrinkFactor, 3, 5, 1, 1);

        tableWidget = new QTableWidget(dockWidgetContents);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/GCV1.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setIcon(icon);
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setCheckState(Qt::Checked);
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setCheckState(Qt::Checked);
        tableWidget->setItem(0, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setCheckState(Qt::Checked);
        tableWidget->setItem(0, 3, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setMaximumSize(QSize(311, 231));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setShowGrid(true);
        tableWidget->setSortingEnabled(false);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->setRowCount(3);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(60);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 2, 0, 3, 1);

        Label_LSENew = new QLabel(dockWidgetContents);
        Label_LSENew->setObjectName(QStringLiteral("Label_LSENew"));
        Label_LSENew->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Label_LSENew, 5, 3, 1, 1);

        Label_LSEOrig = new QLabel(dockWidgetContents);
        Label_LSEOrig->setObjectName(QStringLiteral("Label_LSEOrig"));
        Label_LSEOrig->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Label_LSEOrig, 5, 1, 1, 1);

        AxisRotation = new QCheckBox(dockWidgetContents);
        AxisRotation->setObjectName(QStringLiteral("AxisRotation"));
        AxisRotation->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisRotation, 2, 2, 1, 1);

        AxisTranslation = new QCheckBox(dockWidgetContents);
        AxisTranslation->setObjectName(QStringLiteral("AxisTranslation"));
        AxisTranslation->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisTranslation, 2, 3, 1, 2);

        CheckBox_ShrinkFactor = new QCheckBox(dockWidgetContents);
        CheckBox_ShrinkFactor->setObjectName(QStringLiteral("CheckBox_ShrinkFactor"));
        CheckBox_ShrinkFactor->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(CheckBox_ShrinkFactor, 2, 5, 1, 1);

        AxisTranslation_2 = new QCheckBox(dockWidgetContents);
        AxisTranslation_2->setObjectName(QStringLiteral("AxisTranslation_2"));
        AxisTranslation_2->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisTranslation_2, 3, 3, 1, 2);

        AxisTranslation_3 = new QCheckBox(dockWidgetContents);
        AxisTranslation_3->setObjectName(QStringLiteral("AxisTranslation_3"));
        AxisTranslation_3->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(AxisTranslation_3, 4, 3, 1, 2);

        NomActFeature = new QLabel(dockWidgetContents);
        NomActFeature->setObjectName(QStringLiteral("NomActFeature"));
        NomActFeature->setMaximumSize(QSize(200, 20));
        NomActFeature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(NomActFeature, 1, 0, 1, 1);

        NomActBtns_3 = new QPushButton(dockWidgetContents);
        NomActBtns_3->setObjectName(QStringLiteral("NomActBtns_3"));
        NomActBtns_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(NomActBtns_3, 6, 3, 1, 2);

        COperationZoneRight->setWidget(dockWidgetContents);

        retranslateUi(COperationZoneRight);

        QMetaObject::connectSlotsByName(COperationZoneRight);
    } // setupUi

    void retranslateUi(QDockWidget *COperationZoneRight)
    {
        COperationZoneRight->setWindowTitle(QApplication::translate("COperationZoneRight", "Construct Operation Zone", Q_NULLPTR));
        NomActBtns_2->setText(QApplication::translate("COperationZoneRight", "Trans Nom", Q_NULLPTR));
        label_4->setText(QString());
        NomActBtns->setText(QApplication::translate("COperationZoneRight", "Bestfit", Q_NULLPTR));
        AxisRotation_3->setText(QApplication::translate("COperationZoneRight", "Z Axis rotation", Q_NULLPTR));
        AxisRotation_2->setText(QApplication::translate("COperationZoneRight", "Y Axis rotation", Q_NULLPTR));
        label_5->setText(QString());
        lineEdit_ShrinkFactor->setText(QString());
        lineEdit_ShrinkFactor->setPlaceholderText(QApplication::translate("COperationZoneRight", "1.0000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("COperationZoneRight", "Label", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("COperationZoneRight", "X", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("COperationZoneRight", "Y", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("COperationZoneRight", "Z", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("COperationZoneRight", "GCV1", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        Label_LSENew->setText(QApplication::translate("COperationZoneRight", "LSE New", Q_NULLPTR));
        Label_LSEOrig->setText(QApplication::translate("COperationZoneRight", "LSE Orig", Q_NULLPTR));
        AxisRotation->setText(QApplication::translate("COperationZoneRight", "X Axis rotation", Q_NULLPTR));
        AxisTranslation->setText(QApplication::translate("COperationZoneRight", "X translation", Q_NULLPTR));
        CheckBox_ShrinkFactor->setText(QApplication::translate("COperationZoneRight", "Shrink Factor", Q_NULLPTR));
        AxisTranslation_2->setText(QApplication::translate("COperationZoneRight", "Y translation", Q_NULLPTR));
        AxisTranslation_3->setText(QApplication::translate("COperationZoneRight", "Z translation", Q_NULLPTR));
        NomActFeature->setText(QApplication::translate("COperationZoneRight", "NomAct Feature", Q_NULLPTR));
        NomActBtns_3->setText(QApplication::translate("COperationZoneRight", "Trans Act", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class COperationZoneRight: public Ui_COperationZoneRight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATIONZONERIGHT_H
