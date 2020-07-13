#ifndef PAINTZONE_H
#define PAINTZONE_H

#include <QDockWidget>

namespace Ui {
class CPaintZone;
}

class CPaintZone : public QDockWidget
{
    Q_OBJECT

public:
    explicit CPaintZone(QWidget *parent = 0);
    ~CPaintZone();

private:
    Ui::CPaintZone *ui;
};

#endif // PAINTZONE_H
