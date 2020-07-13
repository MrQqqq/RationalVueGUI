#ifndef OPERATIONZONELEFT_H
#define OPERATIONZONELEFT_H

#include <QDockWidget>

namespace Ui {
class COperationZoneLeft;
}

class COperationZoneLeft : public QDockWidget
{
    Q_OBJECT

public:
    explicit COperationZoneLeft(QWidget *parent = 0);
    ~COperationZoneLeft();

private:
    Ui::COperationZoneLeft *ui;
};

#endif // OPERATIONZONELEFT_H
