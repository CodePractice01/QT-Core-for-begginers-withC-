#include "racecar.h"

racecar::racecar(QObject *parent) : car(parent)
{
        this->color = "blue";
}

void racecar::goFast()
{
    qInfo() << "zooooom";
}
