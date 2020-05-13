#include <QCoreApplication>
#include "animal.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name= "Bryan";
    qInfo() << "My name is at:" << &name << "==" << name;
    animal cat(&a, "fluffy"); //{}constructor scope
    animal dog(&a, "fido");//{}constructor scope

    animal zuru(&a, name);//{}constructor scope

    zuru.sayHEllo("Yo");

    qInfo() << "zuru name scope" << zuru.name;
    return a.exec();
}
