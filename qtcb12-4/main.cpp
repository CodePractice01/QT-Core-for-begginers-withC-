#include <QCoreApplication>

#include <QDebug>

#include "car.h"
#include "racecar.h"
#include "feline.h"


//reinterpret cast

//unlike static_cast, but like const_cast , the reinterpret_cast wxpression dow not compile to any CPU
//(Except when converting between integers and pointers or an obscure arhitectures where pointer representation
//depends on its type). it is purely a compile-time directive
//which instructs the compiler to treat expression as if it had the type new_type

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

    car* fordKa = dynamic_cast<car*>(player1);
    if(fordKa) testDrive(fordKa);

    racecar* speedCar = static_cast<racecar*>(fordKa);
    if(speedCar) race(speedCar);

    //pointer to integer
    int* pointer =  reinterpret_cast<int*>(speedCar);
    qInfo() << "pointer = " << pointer;

    //taking  'a racecar' turning into an integer and the taking it integer and turning ie back to race car
    racecar* myCar = reinterpret_cast<racecar*>(pointer);
    qInfo() << "My cars colos is: " << myCar->color;
    return a.exec();
}
