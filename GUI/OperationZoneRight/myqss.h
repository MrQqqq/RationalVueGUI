#ifndef MYQSS_H
#define MYQSS_H

#include <QObject>
#include <QFile>
#include <qapplication.h>
#include <QDebug>

class MyQss : public QObject
{
    Q_OBJECT
public:
    explicit MyQss(QObject *parent = nullptr);

public:
    static void setStyle(const QString &style){
        QFile qss(style);
        if(qss.open(QFile::ReadOnly)){
            qDebug()<<"成功打开qss文件"<<endl;
        }else{
            qDebug()<<"无法打开qss文件"<<endl;
        }
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }

signals:

public slots:
};

#endif // MYQSS_H
