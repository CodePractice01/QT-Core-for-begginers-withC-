#include <QCoreApplication>

#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hellow World";

    return a.exec();
}
