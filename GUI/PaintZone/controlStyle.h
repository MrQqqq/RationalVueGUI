#ifndef CONTROLSTYLE_H
#define CONTROLSTYLE_H


#include<QObject>

class QSlider;
class QProgressBar;
class QToolButton;


class controlStyle : public QObject
{
    Q_OBJECT

public:

    //设置工具按钮样式
    static QString setToolButtonQss(QToolButton *tbtn);

    //设置按钮样式
//    static QString setPushButtonQss(QPushButton *pbtn,                               //按钮对象
//                                    int radius = 50,                                 //圆角半径
//                                    int padding = 0,                                //间距
//                                    const QString &normalColor = "#34495E",         //正常颜色
//                                    const QString &normalTextColor = "#FFFFFF",     //文字颜色
//                                    const QString &hoverColor = "#4E6D8C",          //悬停颜色
//                                    const QString &hoverTextColor = "#F0F0F0",      //悬停文字颜色
//                                    const QString &pressedColor = "#2D3E50",        //按下颜色
//                                    const QString &pressedTextColor = "#B8C6D1");   //按下文字颜色

    //设置滑块条样式
    static QString setSliderQss(QSlider *slider,                                    //滑动条对象
                                int sliderHeight = 8,                               //滑动条高度
                                const QString &normalColor = "#E8EDF2",             //正常颜色
                                const QString &grooveColor = "#1ABC9C",             //滑块颜色
                                const QString &handleBorderColor = "#1ABC9C",       //指示器边框颜色
                                const QString &handleColor = "#FFFFFF");            //指示器颜色

    /*/设置进度条样式
    static QString setProgressQss(QProgressBar *bar,
                                     int barHeight = 8,                             //进度条高度
                                     int barRadius = 5,                             //进度条半径
                                     int fontSize = 9,                              //文字字号
                                     const QString &normalColor = "#E8EDF2",        //正常颜色
                                     const QString &chunkColor = "#E74C3C");        //进度颜色
    */
};

#endif // CONTROLSTLYE_H
