#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QDockWidget>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QDockWidget* readDataZoneRight();
    void initDataZoneRight(QDockWidget *dockWidget);
    void setDataZoneRigthStyle();
private:
    Ui::MainWindow *ui;
    QWidget *pWidget;
    QDockWidget *pDataZoneRightDockWidget;
};
#endif // MAINWINDOW_H
