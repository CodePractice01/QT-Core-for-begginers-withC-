#include <QCoreApplication>

#include <QDebug>

#include "car.h"
#include "racecar.h"
#include "feline.h"

//dynamic cast

//dynamic_cast can be used only with pointers and references to objects.
//its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.


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
    testDrive(player1); // its coverted automaticcaly

    // pointer to car-here called objects

    //dynamic cast: neet to tell it what type of object we want back and it the actual variable that we want to
    //can return 0 or value
    car* obj =dynamic_cast<car*>(player1);
    if(obj) testDrive(obj);

    //error --will not work
    //feline* cat =dynamic_cast<racecar*>(player1);


    return a.exec();
}
