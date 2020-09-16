#ifndef DATALIST_H
#define DATALIST_H

#include<QString>
#include<QRegExp>

typedef unsigned long long size64;

class Datalist
{
public:
    Datalist();
    ~Datalist();
public:
    QString FilePath;
    char* buff=nullptr;
    size64 size;
public:
    void ArgProcessing();
private:
    QRegExp RegExpPatList[1];
};

#endif // DATALIST_H
