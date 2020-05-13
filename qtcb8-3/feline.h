#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>
#include "mamal.h"

class feline : public mamal
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);

    void meow() {qInfo() << "meow"; }
signals:

};

#endif // FELINE_H
