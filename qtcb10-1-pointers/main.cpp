#include <QCoreApplication>
#include<QDebug>


void test (QString name)
{
    //name.length() - the dot - 'show's' it's a stack

    qInfo() << "Size = " << name.length();

}

//a pointer exist on  heap

void testPrt(QString* name)
{
    // ->
    //pointing to another location
    qInfo() << "Size = " << name->length();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString name= "Reif";
    test(name);
    //reference to name
    testPrt(&name);

    return a.exec();

    //Desctructor called here
}
