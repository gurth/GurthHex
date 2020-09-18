#include "fileprocess.h"
#include <QFile>
#include <QDataStream>

FileProcess::FileProcess()
{

}


FileProcess::~FileProcess()
{
    if(buff)
        free(buff);
}


bool FileProcess::fileloader()
{
    QFile file(FilePath);
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen())
        return false;
    size=file.size();
    QDataStream in(&file);
    buff=(char*)malloc(sizeof (char)*size);
    in.readRawData(buff, size);
    file.close();
    return true;
}

bool FileProcess::fileloader(QString FilePath)
{
    this->FilePath=FilePath;
    if(fileloader())
        return true;
    else
        return false;
}

bool FileProcess::filesaver()
{
    QFile file(FilePath);
    file.open(QIODevice::WriteOnly);
    if(!file.isOpen())
            return false;
    QDataStream out(&file);
    out.writeRawData((const char*)buff, size);
    file.close();
    return true;
}

bool FileProcess::filesaver(QString FilePath)
{
    this->FilePath=FilePath;
    if(filesaver())
        return true;
    else
        return false;
}
