#ifndef MACHINESTATUSZONE_H
#define MACHINESTATUSZONE_H

#include <QDockWidget>

namespace Ui {
class CMachineStatusZone;
}

class CMachineStatusZone : public QDockWidget
{
    Q_OBJECT

public:
    explicit CMachineStatusZone(QWidget *parent = 0);
    bool m_bIsLock=true;
    ~CMachineStatusZone();

private:
    Ui::CMachineStatusZone *ui;
};

#endif // MACHINESTATUSZONE_H
