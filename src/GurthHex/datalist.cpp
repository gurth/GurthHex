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
