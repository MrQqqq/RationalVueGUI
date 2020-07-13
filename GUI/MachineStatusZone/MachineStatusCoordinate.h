#ifndef MACHINESTATUSCOORDINATE_H
#define MACHINESTATUSCOORDINATE_H

#include <QWidget>

namespace Ui {
class CMachineStatusCoordinate;
}

class CMachineStatusCoordinate : public QWidget
{

public:
    explicit CMachineStatusCoordinate(QWidget *parent = 0);
    ~CMachineStatusCoordinate();

private:
    Ui::CMachineStatusCoordinate *ui;
};

#endif // MACHINESTATUSCOORDINATE_H
