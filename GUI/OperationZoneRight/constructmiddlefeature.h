#ifndef CONSTRUCTMIDDLEFEATURE_H
#define CONSTRUCTMIDDLEFEATURE_H

#include <QWidget>

class CConstructMiddleFeature : public QWidget
{
    Q_OBJECT
public:
    explicit CConstructMiddleFeature(QWidget *parent = nullptr);
    ~CConstructMiddleFeature();

signals:

public slots:

private:
    class UI;
    CConstructMiddleFeature::UI* m_ui;
};

#endif // CONSTRUCTMIDDLEFEATURE_H
