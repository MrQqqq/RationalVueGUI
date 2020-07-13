/********************************************************************************
** Form generated from reading UI file 'datazoneright.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAZONERIGHT_H
#define UI_DATAZONERIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDataZoneRight
{
public:
    QWidget *dockWidgetContents;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QTreeWidget *treeWidget_2;

    void setupUi(QDockWidget *CDataZoneRight)
    {
        if (CDataZoneRight->objectName().isEmpty())
            CDataZoneRight->setObjectName(QStringLiteral("CDataZoneRight"));
        CDataZoneRight->resize(401, 475);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        layoutWidget = new QWidget(dockWidgetContents);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 401, 451));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);

        treeWidget_2 = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_2->setHeaderItem(__qtreewidgetitem1);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));

        horizontalLayout_3->addWidget(treeWidget_2);

        CDataZoneRight->setWidget(dockWidgetContents);

        retranslateUi(CDataZoneRight);

        QMetaObject::connectSlotsByName(CDataZoneRight);
    } // setupUi

    void retranslateUi(QDockWidget *CDataZoneRight)
    {
        CDataZoneRight->setWindowTitle(QApplication::translate("CDataZoneRight", "DataZoneRight", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDataZoneRight: public Ui_CDataZoneRight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAZONERIGHT_H
