#ifndef APPLICANCE_H
#define APPLICANCE_H

#include "freezer.h"
#include "microwave.h"
#include "toaster.h"

#include <QObject>

class applicance : public QObject, public freezer, public microwave, public toaster
{
    Q_OBJECT
public:
    explicit applicance(QObject *parent = nullptr);

signals:


    // toaster interface
public:
    bool grill();

    // microwave interface
public:
    bool cook();

    // freezer interface
public:
    bool freeze();
};

#endif // APPLICANCE_H
