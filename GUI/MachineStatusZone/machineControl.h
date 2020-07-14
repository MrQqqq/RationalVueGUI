#ifndef MACHINECONTROL_H
#define MACHINECONTROL_H

#include <QDockWidget>

namespace Ui {
class CMachineControl;
}

class CMachineControl : public QDockWidget
{
    Q_OBJECT

public:
    explicit CMachineControl(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    double m_fMaxXYNumber;
    QPoint m_CentorPoint;
    int m_IRadius;
    int m_ISpace;
    int m_ILineWidth;
    ~CMachineControl();

private:
    Ui::CMachineControl *ui;
};

#endif // MACHINECONTROL_H
