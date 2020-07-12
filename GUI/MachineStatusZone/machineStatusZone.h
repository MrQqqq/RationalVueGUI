#ifndef CMACHINESTATUSZONE_H
#define CMACHINESTATUSZONE_H

#include <QMainWindow>
#include <numberShowWidget.h>
#include <MachineStatusCoordinate.h>
namespace Ui {
class CMachineStatusZone;
}

class CMachineStatusZone : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMachineStatusZone(QWidget *parent = 0);
    ~CMachineStatusZone();
    CNumberShowWidget * m_pMSWidget;
    CMachineStatusCoordinate * m_pMSCoordinateWidget;
private:
    Ui::CMachineStatusZone *ui;
};

#endif // MACHINESTATUSZONE_H
