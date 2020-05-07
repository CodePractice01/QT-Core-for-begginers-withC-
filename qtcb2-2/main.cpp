#include <QCoreApplication>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<< "HEllo World !";

    qInfo("zabang");
    return a.exec();
}
