/*
 * @Description: 
 * @Author: szq
 * @Github: https://github.com/MrQqqq
 * @Date: 2020-07-11 15:59:26
 * @LastEditors: szq
 * @LastEditTime: 2020-07-11 16:31:06
 * @FilePath: \QTCreateByCMake\GUI\OperationZoneRight\operationZoneLeft.h
 */ 
#ifndef COperationZoneRight_H
#define COperationZoneRight_H

#include <QMainWindow>

#include <QWidget>
#include <QDockWidget>
#include <QVBoxLayout>
class COperationZoneRight : public QMainWindow
{

public:
    explicit COperationZoneRight(QWidget *parent = 0);
    ~COperationZoneRight();

private:
	QDockWidget* m_pDockWidgetOptZoneRight;
	QWidget* m_pWidgetOptZoneRight;
	QVBoxLayout* m_pVLayoutOptZoneRight;

};

#endif // COperationZoneRight_H