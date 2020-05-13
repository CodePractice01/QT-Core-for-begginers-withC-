#include <QCoreApplication>

#include <QDebug>


void test(QString* value )
{
        qInfo() << *value; // = pointer to value   R: sdcvsdvsdvsdvsdvdfv1dfb1df15b15df15gb1df1b5dfb1fc

        //
       //  qInfo() << value;// r:0x560741.....

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   QString* data =  new QString("sdcvsdvsdvsdvsdvdfv1dfb1df15b15df15gb1df1b5dfb1fc");

   qInfo() << "Actual size" << data->length();
   qInfo() << "Pointer size" << sizeof(data);
    qInfo() << "DAta" << *data;
    qInfo() << "Sizeof DAta" << sizeof(*data);

    test(data);

    //super fast memory access

    delete data;

    return a.exec();
}
