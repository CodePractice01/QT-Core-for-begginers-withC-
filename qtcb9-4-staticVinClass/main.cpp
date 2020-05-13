#include <QCoreApplication>
#include "anima.h"
#include <QDebug>

//Global memory
QString anima::name = "";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    anima cat(&a,"kitty");
    anima dog(&a,"bark");
    anima monkey(&a,"Cita");

    qInfo() << "Cat name = " << cat.name;

    return a.exec();
}
