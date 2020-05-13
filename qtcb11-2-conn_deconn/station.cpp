#include "station.h"

station::station(QObject *parent, int channel, QString name) : QObject(parent)
{
    this->channel = channel;
    this->name = name;
}

void station::broadcast(QString message)
{
    //send signal wmit by de radio.h --listen 'function'
    emit send(channel, name, message);
}
