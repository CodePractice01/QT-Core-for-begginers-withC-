#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QDebug>
#include "mamal.h"
class canine : public mamal
{
    Q_OBJECT
public:
    explicit canine(QObject *parent = nullptr);
    void bark() {qInfo() << "bark ham ham !"; }
signals:

};

#endif // CANINE_H
