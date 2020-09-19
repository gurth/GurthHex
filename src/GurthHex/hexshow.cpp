#include "hexshow.h"
#include "fileprocess.h"
#include "mainwindow.h"
#include <QtWidgets>
#include <QString>
#include <wctype.h>

HexShow::HexShow()
{

}

HexShow::~HexShow()
{

}

bool HexShow::TransShow()
{
    return true;
}

bool HexShow::TransShow(const MainWindow & w)
{
    char* p=w.process.buff;
    size=w.process.size;
    line=(size>>4) + 1;
    QString nowlinenum, nowline, nowtrans;
    size64 now=0;
    for(size64 i=0;i<line - 1;i++)
    {
        nowlinenum=QString::asprintf("0x%08x", now);
        w.line->append(nowlinenum);
        now+=16;
        nowline.clear();
        nowtrans.clear();
        for(int j=0;j<16;j++)
        {
            nowline.append(QString::asprintf(" %02x", (unsigned char)*p));
            CheckTrans(*p, nowtrans);
            p++;
        }
        w.editor->append(nowline);
        w.trans->append(nowtrans);
    }
    //last line
    nowlinenum=QString::asprintf("0x%08x", now);
    w.line->append(nowlinenum);
    nowline.clear();
    nowtrans.clear();
    while (true)
    {
        if(now>=size) break;
        nowline.append(QString::asprintf(" %02x", (unsigned char)*p));
        CheckTrans(*p, nowtrans);
        p++;
        now++;
    }
    w.editor->append(nowline);
    w.trans->append(nowtrans);
    return true;
}

void HexShow::CheckTrans(char ch, QString &transline)
{
    /*
    if(!iswcntrl(ch))
    {
        switch (ch)
        {
            case ' ':
            case '\r':
            case '\n':
                transline.append(QString::asprintf(".", ch));
                break;
            default:
                transline.append(QString::asprintf("%c", ch));
                break;
        }

    }
    else
        transline.append(".");
    */
    if(ch>=32 && ch <= 126)
        transline.append(QString::asprintf("%c", ch));
    else
        transline.append('.');
}
