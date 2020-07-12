#ifndef OPERATIONZONERIGHT_H
#define OPERATIONZONERIGHT_H

#include <QMainWindow>

namespace Ui {
class OperationZoneRight;
}

class OperationZoneRight : public QMainWindow
{
    Q_OBJECT

public:
    explicit OperationZoneRight(QWidget *parent = 0);
    ~OperationZoneRight();

private:
    Ui::OperationZoneRight *ui;
};

#endif // MAINWINDOW_H
