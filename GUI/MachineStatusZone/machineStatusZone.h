/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:26
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 17:25:27
 * @FilePath: \QTCreateByCMake\GUI\MachineStatusZone\machineStatus.h
 */ 
#ifndef CMachineStatusZone_H
#define CMachineStatusZone_H

#include <QMainWindow>
class CMachineStatusZone : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMachineStatusZone(QWidget *parent = 0);
    ~CMachineStatusZone();
};

#endif // CMachineStatusZone_H