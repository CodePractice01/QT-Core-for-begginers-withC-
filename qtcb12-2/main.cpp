#include <QCoreApplication>


//dynamic cast

//dynamic_cast can be used only with pointers and references to objects.
//its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    return a.exec();
}
