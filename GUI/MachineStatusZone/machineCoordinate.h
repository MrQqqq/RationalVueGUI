#ifndef MACHINECOORDINATE_H
#define MACHINECOORDINATE_H

#include <QDockWidget>

namespace Ui {
class CMachineCoordinate;
}

class CMachineCoordinate : public QDockWidget
{
    Q_OBJECT

public:
    explicit CMachineCoordinate(QWidget *parent = 0);
    ~CMachineCoordinate();

private:
    Ui::CMachineCoordinate *ui;
};

#endif // MACHINECOORDINATE_H
