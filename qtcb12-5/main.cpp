#include <QCoreApplication>

#include <QDebug>

#include "car.h"
#include "racecar.h"
#include "feline.h"
#include "dog.h"


//QObject cast dows not use de C++ RTTI, only used on QOBjects


void testDrive(car* obj)
{
    obj->drive();
    obj->stop();
}

void race(racecar* obj){
    obj->goFast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



        racecar* player1 = new racecar(&a);
        car* myCar = qobject_cast<car*>(player1);
        myCar->drive();

        // base to derived

        racecar* fastCar = qobject_cast<racecar*>(myCar);
        fastCar->goFast();
    //will not use non-qt objects!

        //error
        dog* fido = qobject_cast<dog*>(fastCar);
        Q_UNUSED(fido);

    return a.exec();
}
