#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        int age = 40;
        double height = 6.02;

        qInfo() << "Age:" << age;
        qInfo() << "height:" << height;

        //create a warning
        age = 44.90;
        qInfo() << "Age:" << age;

        signed int dogs = -1;
        qInfo() << "Dogs:" << dogs;
        dogs = 15;
        qInfo() << "Dogs:" << dogs;

        unsigned int cats = -1; //will cause an issue !!
        //unsigned > = 0
        qInfo() << "cats:" << cats; // r: 4294967295
        cats = 15;
        qInfo() << "cats:" << cats; //R:15

        qInfo()<< "\n\nsize of dogs, cats and height";
           qInfo() << sizeof(dogs); //how many bites of memory
           qInfo() << sizeof(cats); //how many bites of memory
           qInfo() << sizeof(height); //how many bites of memory
    return a.exec();
}
