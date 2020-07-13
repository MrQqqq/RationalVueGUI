#ifndef CNUMBERSHOWWIDGET_H
#define CNUMBERSHOWWIDGET_H

#include <QWidget>

namespace Ui {
class CNumberShowWidget;
}

class CNumberShowWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CNumberShowWidget(QWidget *parent = 0);
    ~CNumberShowWidget();
    bool m_bIsLock=true;

private:
    Ui::CNumberShowWidget *ui;
};

#endif // CNUMBERSHOWWIDGET_H
