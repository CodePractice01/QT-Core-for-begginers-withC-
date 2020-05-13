#include <QCoreApplication>
#include <QDebug>
#include <iostream>

//error vs exception

//an error "indicates serious probblem that a reasonable application should not try to catch" ---baad things
//An Exception "indicates conditions that a reasonable application might want to catch" --most things

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do{
        int max = 44;
        int div = 0;

        qInfo() << "Enter a number to difive by(0r zeri for an issue !)";

        cin>> div;
        int answer = max /div; //exception- we want to catch!

        qInfo() << answer;


    }while(true);

    return a.exec();
}
