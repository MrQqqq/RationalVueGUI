#ifndef DATAZONERIGHT_H
#define DATAZONERIGHT_H

#include <QMainWindow>
#include <qmenu.h>
#include <qaction.h>
#include <QTreeWidgetItem>
#include <QContextMenuEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class CdataZoneRight; }
QT_END_NAMESPACE

class CDataZoneRight : public QMainWindow
{
    Q_OBJECT

public:
	CDataZoneRight(QWidget *parent = nullptr);
    ~CDataZoneRight();

    void initTreeWidget();

    void createMenu();

protected:
    void contextMenuEvent(QContextMenuEvent *event);

private slots:
    void onDelAction();
    void onAddAction();

private:
    Ui::CdataZoneRight *ui;

    QMenu *m_PopMenu;
    QMenu *m_AddMenu;
    QMenu *m_DelMenu;

    QAction *m_AddAction;
    QAction *m_DelAction;
};
#endif // CDATAZONELEFT_H
