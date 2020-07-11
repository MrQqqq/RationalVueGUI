/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:26
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 18:27:05
 * @FilePath: \QTCreateByCMake\GUI\StatusBarZone\statusBarZone.h
 */ 
#ifndef CStatusBatZone_H
#define CStatusBatZone_H

#include <QStatusBar>
class CStatusBarZone : public QStatusBar
{
    Q_OBJECT

public:
    explicit CStatusBarZone(QWidget *parent = 0);
    ~CStatusBarZone();
};

#endif // CStatusBatZone_H