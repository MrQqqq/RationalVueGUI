#ifndef CONSTRUCTCENTEROFGRAVITY_H
#define CONSTRUCTCENTEROFGRAVITY_H

#include <QWidget>

class CConstructCenterOfGravity : public QWidget
{
    Q_OBJECT
public:
    explicit CConstructCenterOfGravity(QWidget *parent = nullptr);
    ~CConstructCenterOfGravity();

signals:

public slots:

private:
    class UI;
    CConstructCenterOfGravity::UI* m_ui;
};

#endif // CONSTRUCTCENTEROFGRAVITY_H
