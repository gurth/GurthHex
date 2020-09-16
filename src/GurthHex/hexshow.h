#ifndef HEXSHOW_H
#define HEXSHOW_H

#include<QString>

class HexShow
{
private:
    const QString title=" Offset: 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F ";
    QString buffer;
public:
    HexShow();
    ~HexShow();
    bool TransShow(char* buff);
};

#endif // HEXSHOW_H
