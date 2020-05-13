#include <QCoreApplication>
#include <QDebug>

void display(QString* value)
{
    qInfo() << "The pointer: " << value;
    qInfo() << "The object "<< &value << " A copy of the pointer";
    qInfo() << "The data "<< *value ;
    qInfo("");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "bryan"; //stack

    QString* description =  new QString("HEllo world");

    qInfo() << "Name len" << name.length();
    qInfo() << "Description len" << description->length();

  //  delete description; // =0

    display(&name); // use & --reference
    display(description); // it's already a pointer and dont use &

    return a.exec();
}
