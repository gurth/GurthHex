#ifndef DATALIST_H
#define DATALIST_H

#include<QString>
#include<QRegExp>

struct Option
{

};

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
private:
    Option option;
public:
    bool ArgProcessing();
    bool RellocBuff(size64 size);
    bool RellocBuffWithLine(size64 linenum);
private:
    bool FunctionProcessing(QString arg);
};

#endif // DATALIST_H
