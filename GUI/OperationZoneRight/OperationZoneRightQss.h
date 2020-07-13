#ifndef OPERATIONZONERIGHT_H
#define OPERATIONZONERIGHT_H

#include <QObject>
#include <QFile>
#include <qapplication.h>
#include <QDebug>

class COperationZoneRightQss : public QObject
{
    Q_OBJECT
public:
    explicit COperationZoneRightQss(QObject *parent = nullptr);

public:
    static void setStyle(const QString &style){
        QFile qss(style);
		qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }

signals:

public slots:
};

#endif // OPERATIONZONERIGHT_H
