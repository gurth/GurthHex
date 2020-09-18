#ifndef HEXDOWN_H
#define HEXDOWN_H

#include "hexprocess.h"

class MainWindow;

class HexDown : public HexProcess
{
public:
    HexDown();
    ~HexDown();
    bool TransDown();
    bool TransDown(const MainWindow& w);
};

#endif // HEXDOWN_H
