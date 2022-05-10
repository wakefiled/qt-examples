#include <QCoreApplication>
#include "imageloader.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Input File Path
    QString imageFilePath = "C:/image/luluca.png";
    //QString imageFilePath = "C:/image/bellona.jpg";
    ImageLoader il(imageFilePath);

    // Convert
    il.convert(0);

    // Output Convert File
    il.save("C:/image/result.log");

    return a.exec();
}
