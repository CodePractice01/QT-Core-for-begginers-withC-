#include "feline.h"
#include "mamal.h"

feline::feline(QObject *parent) : mamal(parent)
{
qInfo() << this << "Contructed" ;
}
