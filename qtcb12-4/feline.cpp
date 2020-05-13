#include "feline.h"

feline::feline(QObject *parent) : QObject(parent)
{

}

void feline::meow()
{
    qInfo() << "meaw";
}

void feline::hiss()
{
    qInfo() << "hiss";
}
