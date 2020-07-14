#ifndef CLightControl_H
#define CLightControl_H

#include <QWidget>
#include <QDockWidget> //1
namespace Ui {
class CLightControl;
}

class CLightControl : public QDockWidget  //1
{
    Q_OBJECT

public:
    explicit CLightControl(QWidget *parent = 0);
    ~CLightControl();

private:
    Ui::CLightControl *ui;

private slots:
    void initForm();
};

#endif // LIGHTCONTROL_H
