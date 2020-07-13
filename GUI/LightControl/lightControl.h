#ifndef LIGHTCONTROL_H
#define LIGHTCONTROL_H

#include <QDockWidget>

namespace Ui {
class CLightControl;
}

class CLightControl : public QDockWidget
{
    Q_OBJECT

public:
    explicit CLightControl(QWidget *parent = 0);
    ~CLightControl();

private:
    Ui::CLightControl *ui;
};

#endif // LIGHTCONTROL_H
