#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Alice in taraMinunilor";
    qInfo() << name;

    qInfo() <<  name.mid(1,3); //trim qord: lic
    qInfo() << name.insert(0, "Ms. "); //insert Ms.
    qInfo() << name.split(" "); // R: "Ms.", "Alice", "in", "tara", "minunilor"

    int index = name.indexOf(".");
    qInfo() << name.remove(0, index+1).trimmed(); // R: Alice in taraMinunilor

    QString title = "teacher";
    QString full = name.trimmed() + " " + title;  //concatenate
    qInfo() << full;

    qInfo() << full.toLatin1();
    return a.exec();
}
