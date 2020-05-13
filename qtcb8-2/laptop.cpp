#include "laptop.h"
#
laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
    //when created - "this" is automaticalle created
//this->name is " QString name;"
//name different ^

    this->name = name;
    qInfo() << this << name << " constructed";
}

laptop::~laptop()
{
    //When destroyed
     qInfo() << this << name << " deconstructed";
}

double laptop::asKilograms()
{
    //this points to a location
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilograms();
}
