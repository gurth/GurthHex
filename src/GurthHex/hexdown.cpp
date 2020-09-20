#include "hexdown.h"
#include "fileprocess.h"
#include "mainwindow.h"
#include <QtWidgets>
#include <QString>
#include <string.h>

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
    size64 size_buff=buffer.size();
    line=size_buff/49+1;
    size64 size_now= ((line-1)<<4)+(size_buff%49)/3;
    if(w.process.size<size_now)
        if(!w.process.RellocBuff(size_now))
            return false;
    w.process.size=size_now;

    char* p=w.process.buff;
    QByteArray ba = buffer.toLatin1();
    char* q=ba.data();

    for(size64 i=0;i<line;i++)
    {
        for(size64 j=0;j<16;j++)
        {
            sscanf(q,"%x",p);
            p++;
            q+=3;
        }
        q++;
    }
    for(size64 i=0;i<(size_buff%49)/3;i++)
    {
            sscanf(q,"%x",p);
            p++;
            q+=3;
    }
    return true;
}
