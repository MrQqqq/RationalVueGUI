#ifndef DIMENSIONREPORTZONE_H
#define DIMENSIONREPORTZONE_H

#include <QDockWidget>

namespace Ui {
class CDimensionReportZone;
}

class CDimensionReportZone : public QDockWidget
{
    Q_OBJECT

public:
    explicit CDimensionReportZone(QWidget *parent = 0);
    ~CDimensionReportZone();

private:
    Ui::CDimensionReportZone *ui;
};

#endif // DIMENSIONREPORTZONE_H
