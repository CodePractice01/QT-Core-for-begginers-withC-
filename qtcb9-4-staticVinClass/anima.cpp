#include "anima.h"

anima::anima(QObject *parent, QString name)
{
    anima::name = name;

    qInfo() << "Name changed in " << this << " --" << anima::name;
}
