#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //variables - something that will change

    bool isOn =false;

    qInfo() << "is it on" << isOn;

    isOn = true;

    qInfo() << isOn;


    return a.exec();
}
