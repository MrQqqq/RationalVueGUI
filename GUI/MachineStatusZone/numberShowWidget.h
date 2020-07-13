/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-12 20:51:36
 * @LastEditors: szq
 * @LastEditTime: 2020-07-12 20:51:36
 * @FilePath: \undefinedd:\QTProjects\RationalVueGUI\GUI\MachineStatusZone\numberShowWidget.h
 */ 
#ifndef CNUMBERSHOWWIDGET_H
#define CNUMBERSHOWWIDGET_H

#include <QWidget>

namespace Ui {
class CNumberShowWidget;
}

class CNumberShowWidget : public QWidget
{

public:
    explicit CNumberShowWidget(QWidget *parent = 0);
    ~CNumberShowWidget();
    bool m_bIsLock=true;

private:
    Ui::CNumberShowWidget *ui;
};

#endif // CNUMBERSHOWWIDGET_H
