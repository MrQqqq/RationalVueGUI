#ifndef MACHINECONTROL_H
#define MACHINECONTROL_H

#include <QWidget>
#include <QPoint>
namespace Ui {
class CMachineControl;
}

class CMachineControl : public QWidget
{
    Q_OBJECT

public:
    explicit CMachineControl(QWidget *parent = 0);
    ~CMachineControl();
    double m_fMaxXYNumber;
    QPoint m_CentorPoint;
    int m_IRadius;
    int m_ISpace;
protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::CMachineControl *ui;
};

#endif // MACHINECONTROL_H
