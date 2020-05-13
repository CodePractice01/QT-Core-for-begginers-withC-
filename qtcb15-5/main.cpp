#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString greeting = "HEllo yeu";

    QByteArray buffer(greeting.toLatin1());
    buffer.append("!");

    qInfo() << "simple " << buffer;

    //string- character nr, add '.' on the left side of string
    //ex:HEllo yeu = 9: R:..........HEllo yeu
    qInfo() << "buffer.rightJustified(20,'.') -- " << buffer.rightJustified(20,'.');
    qInfo() << "buffer.at(buffer.length() - 1)-- "<< buffer.at(buffer.length() - 1);

    QString modified(buffer);
    qInfo() << "modified -- " << modified;

    return a.exec();
}
