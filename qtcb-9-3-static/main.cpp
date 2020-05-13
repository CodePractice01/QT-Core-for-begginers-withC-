#include <QCoreApplication>
#include <QDebug>

//Global scope -- bad do not use !!
static QString name= "Achim";


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    name = "Bob";
    qInfo() << name; //r:Bob;

    bool test =true;
    if(test)
    {
        QString name = "Tammy";

        qInfo() << name; //Tammy
    }

      qInfo() << name; //r:Bob;

    return a.exec();
}
