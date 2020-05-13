#include <QCoreApplication>
#include "laptop.h"


void test(laptop &machine)
{
    machine.test();
}

void makeLAptops(QObject* parent)
{
    laptop mine(parent,"my laptop Erm");

    laptop yours(parent,"NightZero laptop");

    mine.weight = 3;
    yours.weight = 6;

    test(mine);
    test(yours);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLAptops(&a);

    return a.exec();
}
