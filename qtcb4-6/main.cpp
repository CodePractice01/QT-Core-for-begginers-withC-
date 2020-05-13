#include <QCoreApplication>
#include <QDebug>

#include<array>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //Array

    int ages[4] = {23, 7, 75, 100};


    qInfo() << ages; //location memory of array

    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];
    qInfo() << ages[99];


    //Size vs size of
    array<int,4> cars;
    cars[0] = 88;
    cars[1] = 4;
    cars[2] = 990;
    cars[3] = 76; //end of the array
    cars[99] = 99;

    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3]; //end of the array
    qInfo() << cars[99];

    //size vs size of
     qInfo() << "Size " << cars.size();
     qInfo() << "SizeOf: " << sizeof(cars);
     qInfo() << "LAst " << cars[cars.size() -1];


    return a.exec();
}
