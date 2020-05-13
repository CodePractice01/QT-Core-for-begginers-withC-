#include <QCoreApplication>

#include <QtDebug>
#include "applicance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    applicance Kitchen500;
    qInfo() << "Can cook: " << Kitchen500.cook();

      qInfo() << "Can grill: " << Kitchen500.grill();
       qInfo() << "Can freeze: " << Kitchen500.freeze();
    return a.exec();
}
