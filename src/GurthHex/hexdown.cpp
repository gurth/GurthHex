#include "hexdown.h"
#include "fileprocess.h"
#include "mainwindow.h"
#include <QtWidgets>
#include <QString>


HexDown::HexDown()
{

}

HexDown::~HexDown()
{

}

bool HexDown::TransDown()
{
    return true;
}

bool HexDown::TransDown(MainWindow & w)
{
    QString buffer=w.editor->toPlainText();
    QStringList linelist=buffer.split("/n");
    line=linelist.count();
    if(!w.process.RellocBuffWithLine(line))
        return false;
    char* p=w.process.buff;
    char* linebuff=nullptr;
    for(size64 i=0;i<line-1;i++)
    {

    }
    return true;
}
