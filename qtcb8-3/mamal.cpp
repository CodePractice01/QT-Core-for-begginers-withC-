#include "mamal.h"

mamal::mamal(QObject *parent) : animal(parent)
{
    qInfo() << this << "Contructed" ;
}
