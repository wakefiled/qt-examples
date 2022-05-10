#include "imageloader.h"

ImageLoader::ImageLoader(QString filePath)
    :imgPath(filePath)
{
    this->loadImage();
}

ImageLoader::~ImageLoader()
{

}

bool ImageLoader::loadImage()
{
    QImageReader reader;
    reader.setFileName(imgPath);
    qimg = reader.read();

    qDebug() << "start\n";
    qDebug() << qimg.width() << " " << qimg.height();

    return true;
}

int ImageLoader::convert(int format)
{
    //auto imageSize = qimg.size();
    QDebug dbg(QtDebugMsg);

    for (int i = 0; i < qimg.height(); i++ )
    {
        for ( int j = 0; j < qimg.width(); j++ )
        {
            int black = QColor(qimg.pixel(j,i)).black();
            char c = '-';
            if (black < 30)
            {
                c='#';
            }
            else if(black < 120)
            {
                c='%';
            }
            else if (black < 200)
            {
                c='*';
            }
            dbg.nospace() << c;
        }
        dbg << "\r\n";
    }
    dbg << "end";

    return 0;
}

int ImageLoader::save(QString filePath)
{


    return 0;
}
