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
    bool ArgProcessing();
private:
    bool FunctionProcessing(QString arg);
};

#endif // DATALIST_H
