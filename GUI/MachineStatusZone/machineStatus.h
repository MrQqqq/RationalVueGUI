#ifndef CMACHINESTATUS_H
#define CMACHINESTATUS_H

#include <QWidget>

namespace Ui {
class CMachineStatus;
}

class CMachineStatus : public QWidget
{
    Q_OBJECT

public:
    explicit CMachineStatus(QWidget *parent = 0);
    ~CMachineStatus();
    bool m_bIsLock=true;

private:
    Ui::CMachineStatus *ui;
};

#endif // CMACHINESTATUS_H
