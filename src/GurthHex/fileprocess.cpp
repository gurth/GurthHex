#include "datalist.h"
#include "fileprocess.h"
#include <QFile>

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
    QFile in(FilePath);
    return true;
}

bool FileProcess::fileloader(QString FilePath)
{
    this->FilePath=FilePath;
    return true;
}
