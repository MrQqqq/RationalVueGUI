#ifndef MACHINECONTROL_H
#define MACHINECONTROL_H

#include <QWidget>

namespace Ui {
class CMachineControl;
}

class CMachineControl : public QWidget
{
    Q_OBJECT

public:
    explicit CMachineControl(QWidget *parent = 0);
    ~CMachineControl();
protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::CMachineControl *ui;
};

#endif // MACHINECONTROL_H
