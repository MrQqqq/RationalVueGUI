#ifndef DOCKWIDGET_H
#define DOCKWIDGET_H

#include <QDockWidget>
#include <qmenu.h>
#include <qaction.h>
#include <QTreeWidgetItem>
#include <QContextMenuEvent>

namespace Ui {
class CDataZoneRight;
}

class CDataZoneRight : public QDockWidget
{

public:
    explicit CDataZoneRight(QWidget *parent = nullptr);
    ~CDataZoneRight();
    void initTreeWidget();
    void createMenu();

private slots:
    void onDelAction();
    void onAddAction();

protected:
    void contextMenuEvent(QContextMenuEvent *event);

private:
    Ui::CDataZoneRight *ui;
    QMenu *m_PopMenu;
    QMenu *m_AddMenu;
    QMenu *m_DelMenu;

    QAction *m_AddAction;
    QAction *m_DelAction;
};

#endif // DOCKWIDGET_H
