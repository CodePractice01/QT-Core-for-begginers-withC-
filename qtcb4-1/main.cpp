#include <QCoreApplication>

#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool isOn = false;

    qInfo() << "is it on" << isOn;

    isOn= true;

    qInfo() << "now isOn is"<< isOn;
    return a.exec();
}
