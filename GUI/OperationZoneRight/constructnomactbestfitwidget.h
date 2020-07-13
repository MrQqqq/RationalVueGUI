#ifndef CONSTRUCTNOMACTBESTFITWIDGET_H
#define CONSTRUCTNOMACTBESTFITWIDGET_H

#include <QWidget>


class CConstructNomActBestfitWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CConstructNomActBestfitWidget(QWidget *parent = nullptr);
    ~CConstructNomActBestfitWidget();

signals:

public slots:
    void onBestfitButtonClicked();
    void onShrinkFactorCheckBoxSelected();

public:
    class UI;
    CConstructNomActBestfitWidget::UI* m_pUi;
};

#endif // CONSTRUCTNOMACTBESTFITWIDGET_H
