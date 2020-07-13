#ifndef RVFIGURESET_H
#define RVFIGURESET_H

#include <QWidget>

class CRVFigureSet : public QWidget
{
    Q_OBJECT
public:
    explicit CRVFigureSet(QWidget *parent = nullptr);
    ~CRVFigureSet();

    void setupUi();

signals:

public slots:

private:
    class UI;
    CRVFigureSet::UI* m_ui;
};


#endif // RVFIGURESET_H

