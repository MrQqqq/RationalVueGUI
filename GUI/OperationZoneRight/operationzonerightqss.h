#ifndef OPERATIONZONERIGHTQSS_H
#define OPERATIONZONERIGHTQSS_H

#include <QObject>
#include <QFile>
#include <QApplication>
class COperationZoneRightQss : public QObject
{
    Q_OBJECT
public:
    explicit COperationZoneRightQss(QObject *parent = nullptr);

    static void setStyle(const QString& path){
        QFile qss(path);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

#endif // OPERATIONZONERIGHTQSS_H
