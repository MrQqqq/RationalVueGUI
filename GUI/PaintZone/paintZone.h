/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:26
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 16:32:45
 * @FilePath: \QTCreateByCMake\GUI\PaintZone\operationZoneRight.h
 */ 
#ifndef CPaintZone_H
#define CPaintZone_H

#include <QMainWindow>
class CPaintZone : public QMainWindow
{
    Q_OBJECT

public:
    explicit CPaintZone(QWidget *parent = 0);
    ~CPaintZone();
};

#endif // CPaintZone_H