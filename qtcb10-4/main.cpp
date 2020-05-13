#include <QCoreApplication>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //create the parent
    //parent child relasionship
    test* parent = new test(&a); //create the pointer

    //in the test clas we have the dog pointer and we're just going
    //to make a new animal and give it a parent

    parent->dog = new animal(parent);


    delete parent;
    //appears deconstructed messages

    return a.exec();
    // a deconstructed !!
}
