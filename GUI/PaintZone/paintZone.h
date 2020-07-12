#ifndef CPaintZone_H
#define CPaintZone_H

#include <QWidget>

namespace Ui {
class CPaintZone;
}

class CPaintZone : public QWidget
{
    Q_OBJECT

public:
    explicit CPaintZone(QWidget *parent = 0);
    ~CPaintZone();

private:
    Ui::CPaintZone *ui;

private slots:
    void initForm();
};

#endif // LIGHTCONTROL_H
