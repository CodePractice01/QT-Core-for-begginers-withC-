#ifndef ANIMA_H
#define ANIMA_H

#include <QObject>
#include <QDebug>


class anima : public QObject
{
    Q_OBJECT
public:
    explicit anima(QObject *parent = nullptr,QString name = "");

    //static = shared varaible
    static QString name;

signals:

};




#endif // ANIMA_H
