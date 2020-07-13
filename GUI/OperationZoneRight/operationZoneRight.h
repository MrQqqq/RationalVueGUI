#ifndef OPERATIONZONERIGHT_H
#define OPERATIONZONERIGHT_H

#include <QMainWindow>

namespace Ui {
class COperationZoneRight;
}

class COperationZoneRight : public QMainWindow
{

public:
    explicit COperationZoneRight(QWidget *parent = 0);
    ~COperationZoneRight();

private:
    Ui::COperationZoneRight *ui;
};

#endif // MAINWINDOW_H
