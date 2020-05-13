#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << "Animal name param: " << &name << "=" << name;
    qInfo() << "Animal name param: " << &this->name << "=" << this->name;

}
