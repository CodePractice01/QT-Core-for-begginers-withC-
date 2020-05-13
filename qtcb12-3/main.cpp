#include <QCoreApplication>
#include <QDebug>

#include "car.h"
#include "racecar.h"
#include "feline.h"


//static cast
//the static cast operator performs a nonpolymophic cast
//for eexample, it can be used to cast a base class ointer into a derived class pointer


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
    testDrive(player1); //implicit casting is taking place

    car* gremlin = dynamic_cast<car*>(player1);

    if(gremlin) testDrive(gremlin);

    //up casting- going from tge car to the racecar
    //--we can go from base back to the derived because the classes we created are polymorphic
    //--static Cast should work fine - this is the qay to go from a base to a derived class saftly!
    racecar* speedster = static_cast<racecar*>(gremlin);
    //if the conversion is succesfull then covert 'car' to 'racecar'
    if(speedster) race(speedster);

    return a.exec();
}
