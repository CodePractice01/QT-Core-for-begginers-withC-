#include <QCoreApplication>
#include<QDebug>

enum Colors {black, red, green, blue};

//use a structure if you have a group
//of vriables or elements that you want in a certain way
//for example: describing a product

//structure are very constrained comparision to classes
//Precusor to "classes"
struct product
{
  int weight;
    double value;
    Colors color;

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; // no assigment !!

    qInfo() << "Size of product:" << sizeof (laptop);

    laptop.color = Colors::green;
    laptop.value = 550.37;
    laptop.weight = 3;

    qInfo() << "Weight" << laptop.weight;
    qInfo() << "Value" << laptop.value;
    qInfo() << "Color" << laptop.color;

    return a.exec();
}
