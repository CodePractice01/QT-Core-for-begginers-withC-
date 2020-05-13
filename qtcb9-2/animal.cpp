#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    // this->name is from animal.h :  QString name;
    this->name = name;

    qInfo() << "Animal name param: " << &name << "-" << name;

     qInfo() << "Animal name: " << &this->name << "-" << this->name;

}

void animal::sayHEllo(QString message)
{
    // both value point to the same location , are the same
    qInfo() << message << "from" << name << "at" << &name;
     qInfo() << message << "from" << this->name << "at" << &this->name;
}
