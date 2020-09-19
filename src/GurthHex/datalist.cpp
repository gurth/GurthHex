#include <QApplication>
#include "datalist.h"

Datalist::Datalist()
{
}


Datalist::~Datalist()
{

}


bool Datalist::ArgProcessing()
{
    QRegExp argrx("(\"-[a-zA-Z]\")|(\"--[a-zA-Z]*\")");
    QStringList arguments = QCoreApplication::arguments();
    int n=0;
    if (arguments.count() < 2)
        return true;
    for (int i = 1; i < arguments.count(); i++)
    {
        if(argrx.exactMatch(arguments[i]))
        {
            if(!FunctionProcessing(arguments[i]))
                return false;
            continue;
        }
        if(!n)
        {
            FilePath=arguments[i];
            n++;
        }
        else
            return false;
    }
    return true;
}


bool Datalist::FunctionProcessing(QString arg)
{

    return true;
}

bool Datalist::RellocBuff(size64 size)
{
    free(buff);
    this->size=size;
    buff=(char*)malloc(size*sizeof(char));
    if(buff)
        return true;
    else
        return false;
}

bool Datalist::RellocBuffWithLine(size64 linenum)
{
    free(buff);
    buff=(char*)malloc((linenum << 4)*sizeof(char));
    if(buff)
        return true;
    else
        return false;
}
