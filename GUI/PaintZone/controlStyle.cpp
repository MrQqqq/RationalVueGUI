#include "controlStyle.h"
#include<QtWidgets>



//QString controlStyle::setToolButtonQss(QToolButton *tbtn)
//{

//}


//QString controlStyle::setPushButtonQss(QPushButton *btn, int radius, int padding,
//                                    const QString &normalColor,
//                                    const QString &normalTextColor,
//                                    const QString &hoverColor,
//                                    const QString &hoverTextColor,
//                                    const QString &pressedColor,
//                                    const QString &pressedTextColor)
//{
//    QStringList list;
//    list.append(QString("QPushButton{border-style:none;padding:%1px;border-radius:%2px;color:%3;background:%4;}")
//                .arg(padding).arg(radius).arg(normalTextColor).arg(normalColor));
//    list.append(QString("QPushButton:hover{color:%1;background:%2;}")
//                .arg(hoverTextColor).arg(hoverColor));
//    list.append(QString("QPushButton:pressed{color:%1;background:%2;}")
//                .arg(pressedTextColor).arg(pressedColor));

//    QString qss = list.join("");
//    btn->setStyleSheet(qss);
//    return qss;
//}


QString controlStyle::setSliderQss(QSlider *slider, int sliderHeight,
                                const QString &normalColor,
                                const QString &grooveColor,
                                const QString &handleBorderColor,
                                const QString &handleColor)
{
    int sliderRadius = sliderHeight / 2;
    int handleWidth = (sliderHeight * 3) / 2 + (sliderHeight / 5);
    int handleRadius = handleWidth / 2;
    int handleOffset = handleRadius / 2;

    QStringList list;
    list.append(QString("QSlider::horizontal{min-height:%1px;}").arg(sliderHeight * 2));
    list.append(QString("QSlider::groove:horizontal{background:%1;height:%2px;border-radius:%3px;}")
                .arg(normalColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::add-page:horizontal{background:%1;height:%2px;border-radius:%3px;}")
                .arg(normalColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::sub-page:horizontal{background:%1;height:%2px;border-radius:%3px;}")
                .arg(grooveColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::handle:horizontal{width:%3px;margin-top:-%4px;margin-bottom:-%4px;border-radius:%5px;"
                        "background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 %1,stop:0.8 %2);}")
                .arg(handleColor).arg(handleBorderColor).arg(handleWidth).arg(handleOffset).arg(handleRadius));

    //偏移一个像素
    handleWidth = handleWidth + 1;
    list.append(QString("QSlider::vertical{min-width:%1px;}").arg(sliderHeight * 2));
    list.append(QString("QSlider::groove:vertical{background:%1;width:%2px;border-radius:%3px;}")
                .arg(normalColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::add-page:vertical{background:%1;width:%2px;border-radius:%3px;}")
                .arg(grooveColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::sub-page:vertical{background:%1;width:%2px;border-radius:%3px;}")
                .arg(normalColor).arg(sliderHeight).arg(sliderRadius));
    list.append(QString("QSlider::handle:vertical{height:%3px;margin-left:-%4px;margin-right:-%4px;border-radius:%5px;"
                        "background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 %1,stop:0.8 %2);}")
                .arg(handleColor).arg(handleBorderColor).arg(handleWidth).arg(handleOffset).arg(handleRadius));

    QString qss = list.join("");
    slider->setStyleSheet(qss);
    return qss;
}



