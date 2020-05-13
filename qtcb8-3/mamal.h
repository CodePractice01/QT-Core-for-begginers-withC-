#ifndef MAMAL_H
#define MAMAL_H

#include <QObject>
#include <QDebug>
#include "animal.h"

class mamal : public animal
{
    Q_OBJECT
public:
    explicit mamal(QObject *parent = nullptr);

     bool hasBackBone() {return true; }

signals:

};

#endif // MAMAL_H
