#ifndef MACHINESTATUSZONE_H
#define MACHINESTATUSZONE_H
#include "machineStatus.h"
#include <QDockWidget>

namespace Ui {
class CMachineStatusZone;
}

class CMachineStatusZone : public QDockWidget
{
    Q_OBJECT

public:
    explicit CMachineStatusZone(QWidget *parent = 0);
    ~CMachineStatusZone();
    CMachineStatus * m_pMachineStatus;
private:
    Ui::CMachineStatusZone *ui;
};

#endif // MACHINESTATUSZONE_H
