#ifndef FILEPROCESS_H
#define FILEPROCESS_H

#include <QString>
#include "datalist.h"

class FileProcess : public Datalist
{
public:
    FileProcess();
    ~FileProcess();
public:
    bool fileloader();
    bool fileloader(QString FilePath);

    bool filesaver();
    bool filesaver(QString FilePath);
private:
};

#endif // FILEPROCESS_H
