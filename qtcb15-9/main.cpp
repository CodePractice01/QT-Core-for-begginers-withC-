#include <QCoreApplication>
#include <QDebug>


//q list

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "HEllo World how are you?";
    QList <QString> list = data.split(" ");

    foreach (QString word, list) {
        qInfo()<< word;
    }

    QVector<int> ages ({44,56,21,13});

    foreach (int age, ages) {
        qInfo()<< "age: " << age;
    }


    return a.exec();
}
