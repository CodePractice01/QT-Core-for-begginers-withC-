#include <QCoreApplication>

#include <QDebug>
#include <QTextStream>
#include <iostream>

#include "station.h"
#include "radio.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombax;
    station* channels[3];

    //create some station
    channels[0] = new station(&boombax,94,"Rock and roll");
    channels[1] = new station(&boombax,101,"HipHopl");
    channels[2] = new station(&boombax,89,"News");

    boombax.connect(&boombax, &radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);

    do{
        qInfo() << "Enter on,off test or quit:";

        //reading the standard input
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON")
        {
            qInfo() << "Turning the radio on";
            for(int i =0;i<3;i++)
            {
                //grab the channel
                station* channel = channels[i];
                //make connection
                boombax.connect(channel, &station::send, &boombax, &radio::listen);
            }
            qInfo() << "Radio is on";
        }

        if(line == "OFF")
        {
            qInfo() << "Turning the radio off";

            for(int i =0;i<3;i++)
            {
                //grab the channel
                station* channel = channels[i];
                // disconnect
                boombax.disconnect(channel, &station::send, &boombax, &radio::listen);
            }
            qInfo() << "Radio is off";
        }

        if(line == "TEST")
        {
            qInfo() << "TEsting";

            for(int i =0;i<3;i++)
            {
                //grab the channel
                station* channel = channels[i];
                channel->broadcast("Broadcasting live");
            }
            qInfo() << "Testing complete";

        }

        if(line == "QUIT")
        {
            qInfo() << "Quitting";
            emit boombax.quit();
            break;
        }

    }while(true);

    return a.exec();
}
