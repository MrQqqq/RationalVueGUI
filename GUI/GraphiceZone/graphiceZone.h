#ifndef GRAPHICEZONE_H
#define GRAPHICEZONE_H

#include <QDockWidget>

namespace Ui {
class CGraphiceZone;
}

class CGraphiceZone : public QDockWidget
{
    Q_OBJECT

public:
    explicit CGraphiceZone(QWidget *parent = 0);
    ~CGraphiceZone();

private:
    Ui::CGraphiceZone *ui;
};

#endif // GRAPHICEZONE_H
