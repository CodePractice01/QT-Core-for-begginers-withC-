#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44; //can change
    const int id =215; //can not change


    qInfo()<< "const id" << id;

    qInfo()<< "age 1 " << age;
    age  = 30;
    qInfo()<< "age" << age;


    return a.exec();
}
