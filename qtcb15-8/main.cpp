#include <QCoreApplication>
#include <QDebug>


//q list

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "HEllo World how are you?";
    QList<QString> lst = data.split(" ");
    lst.insert(3,"zzz");
    foreach (QString str, lst) {
        qInfo() << str;
    }

    QList<int> ages ( {44, 21, 13} );

    foreach(int age, ages){
        qInfo() << age;
    }
    return a.exec();
}
