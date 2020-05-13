#include <QCoreApplication>
#include <QDebug>
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //called test class
    //use the template value passed and..return the value
    //one class multiple type of value used
    //but don't mix matching
    test<int> intCalc;
    qInfo() << intCalc.add(1,4); //r: 5

    test<double> doubleCalc;
    qInfo() << doubleCalc.add(1.09,0.075); //R:1.165

    test<QString> stringCalc;
    qInfo() << "string Calc" << stringCalc.add("Hello", "sunshine"); // r:Hello sunshine

    return a.exec();
}
