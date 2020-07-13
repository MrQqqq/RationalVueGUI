#ifndef CMACHINESTATUSZONE_H
#define CMACHINESTATUSZONE_H

#include <QWidget>

namespace Ui {
class CMachineStatusZone;
}

class CMachineStatusZone : public QWidget
{

public:
    explicit CMachineStatusZone(QWidget *parent = 0);
    ~CMachineStatusZone();
    bool m_bIsLock=true;

private:
    Ui::CMachineStatusZone *ui;
};

#endif // CMACHINESTATUSZONE_H
