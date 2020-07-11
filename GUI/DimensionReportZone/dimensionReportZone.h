/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:26
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:24:44
 * @FilePath: \QTCreateByCMake\GUI\DimensionReportZone\dimensionReportZone.h
 */ 
#ifndef CDimensionReportZone_H
#define CDimensionReportZone_H

#include <QMainWindow>
class CDimensionReportZone : public QMainWindow
{
    Q_OBJECT

public:
    explicit CDimensionReportZone(QWidget *parent = 0);
    ~CDimensionReportZone();
};

#endif // CDimensionReportZone_H