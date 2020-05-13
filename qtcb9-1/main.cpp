#include <QCoreApplication>
#include <QDebug>

void test(int number)
{
    //int number = 50;
    qInfo() << "2 Test number is at: " << &number << " = "<<number;
}

void testRef(int &number)
{
     qInfo() << "4 Test number is at: " << &number << " = "<<number;

     int age = 40 ;
        qInfo() << "4 Test number is at: " << &age << " = "<<age;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 75;
     qInfo() << "1 Test number is at: " << &number << "=" << number;

    test(number);

    bool ok = true;
    if(ok)
    {
        //age dows not exist in this scope
        //qInfo() << "3 Test number is at: " << &age << "=" << age; //

        qInfo() << "3 Test number is at: " << &number << "=" << number; // r: 1 Test...
    }

    testRef(number);

    return a.exec();
}
