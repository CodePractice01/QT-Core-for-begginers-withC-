#include <QCoreApplication>
#include <QDebug>


//q string list

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString data = "HEllo World how are you?";
    QStringList lst = data.split(" "); //split the string

     qInfo() << lst;

     foreach (QString str, lst) {
         qInfo() <<  str;
     }

     lst.sort(Qt::CaseInsensitive);
     qInfo() <<  lst;

     QString myVar = "HEllo";

     //take that list and search the variante "Hello"
     if(lst.contains(myVar))
     {
         //find the first position in that list
         int index = lst.indexOf(myVar);
         //and return the value
          qInfo() << lst.value(index);
     }
    return a.exec();
}
