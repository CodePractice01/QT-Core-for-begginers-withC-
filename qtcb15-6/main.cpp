#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

void test(QVariant value)
{
    qInfo() << value;
    int test = 0;
    bool ok = false;

    test =value.toInt(&ok);

    if(ok){
         qInfo() << "Int = " << test;
    }
    else{
         qInfo() << "Not a number";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value = 1;
    QVariant value2 = "Hello monday!";

    test(value);//R: QVariant(int,1)
                // Int:1

    test(value2); //r: QVariant(QString, "Hello monday!")
                   //Not a number!

    return a.exec();
}
