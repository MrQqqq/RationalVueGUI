#ifndef OPERATIONZONERIGHT_H
#define OPERATIONZONERIGHT_H

#include <QDockWidget>

namespace Ui {
class COperationZoneRight;
}

class COperationZoneRight : public QDockWidget
{
    Q_OBJECT

public:
    explicit COperationZoneRight(QWidget *parent = 0);
    ~COperationZoneRight();

//private:
//    Ui::COperationZoneRight *ui;
};

#endif // OPERATIONZONERIGHT_H
