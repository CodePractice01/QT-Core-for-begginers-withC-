#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 43.88;
    qInfo() << "Double: " <<value;

    int age =value;
    qInfo() << "Age: "<< age; // implicit conversion should not be trusted

    age = (int)value; // casting old style :))
    qInfo() << "Age converted: "<< age; // explicit conversion
    return a.exec();
}
