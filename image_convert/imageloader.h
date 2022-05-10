#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <QImage>
#include <QImageReader>

class ImageLoader
{
public:
    ImageLoader(QString filePath);
    ~ImageLoader();

    int convert(int format);
    int save(QString filePath);
private:
    bool loadImage();

    QImage qimg;
    QString imgPath;
};

#endif // IMAGELOADER_H
