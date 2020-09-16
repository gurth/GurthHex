#include <QApplication>
#include <QDebug>
#include "datalist.h"

Datalist::Datalist()
{
    RegExpPatList[0]=QRegExp("(\"-T\")|(\"--notranscode\")");
}


Datalist::~Datalist()
{

}


void Datalist::ArgProcessing()
{
    QRegExp argrx("(\"-[a-zA-Z]\")|(\"--[a-zA-Z]*\")");
    QStringList arguments = QCoreApplication::arguments();
    if (arguments.count() < 2)
        return;
    for (int i = 0; i < arguments.size(); i++)
    {
        qDebug() << arguments.mid(i, 1) << endl;
    }

}
