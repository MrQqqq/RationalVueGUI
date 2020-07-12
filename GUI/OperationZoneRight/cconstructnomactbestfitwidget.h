#ifndef CCONSTRUCTNOMACTBESTFITWIDGET_H
#define CCONSTRUCTNOMACTBESTFITWIDGET_H

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

#endif // CCONSTRUCTNOMACTBESTFITWIDGET_H
