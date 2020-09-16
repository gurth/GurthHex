#ifndef FILEPROCESS_H
#define FILEPROCESS_H

#include <QString>

class FileProcess : public Datalist
{
public:
    FileProcess();
    ~FileProcess();

public:
    bool fileloader();
    bool fileloader(QString FilePath);
private:
};

#endif // FILEPROCESS_H
