#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //enum

  /*  int red= 0;
    int blue =2;
    int green =1;*/

    //enum Color{red, green, blue}; // is like 0 based array
    enum Color{red=0, green=25, blue=236}; // is like 0 based array

    Color mycolor = Color::blue;
    qInfo() << "Color" << mycolor;
    return a.exec();
}
