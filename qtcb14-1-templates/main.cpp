#include <QCoreApplication>
#include <QDebug>


template<typename type_fuzzyBuny>

void print(type_fuzzyBuny value)
{
    qInfo() <<value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // <int> --- use a template
    //iin this tamplete use a integer
    print<int>(1);
    print<double>(126.007);
    print<QString>("string Template ");

    return a.exec();
}
