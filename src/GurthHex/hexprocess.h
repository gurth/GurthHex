#ifndef HEXPROCESS_H
#define HEXPROCESS_H

#include <QString>
#include "datalist.h"

class HexProcess
{
protected:
    char* p=nullptr;
    size64 size;
    size64 line;
public:
    HexProcess();
    ~HexProcess();
};

#endif // HEXPROCESS_H
