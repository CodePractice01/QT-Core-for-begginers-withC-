#include <QCoreApplication>
#include <QDebug>

//the first thing you give it is the first thing it's going to return
template <class T, class F>
T add(T value1, F value2)
{
    return value1+value2;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add(1, 4.6); //R:5  //always give it a template
    qInfo() << add(1.09, 4); // R: 5.09 -- the first thing you give it is the first thing it's going to return
    qInfo() << add(55, true); // R: 56  =  true is not 0 and takes 55+1=56
   // qInfo() << add(55, "HEllo W"); //this will fail


    return a.exec();
}
