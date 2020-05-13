#include <QCoreApplication>
#include <QDebug>
#include "cat.h"
#include "dog.h"

void test(QObject* obj)
{
    qInfo() << obj;

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cat cookie;
    dog boschi;

    cookie.setObjectName("fluffy!");
    boschi.setObjectName("Doggy");

    test(&cookie);
    test(&boschi);


    return a.exec();
}
