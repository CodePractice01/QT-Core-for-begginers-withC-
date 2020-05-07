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

    //size vs size of
    return a.exec();
}
