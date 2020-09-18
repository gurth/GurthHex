#ifndef HEXSHOW_H
#define HEXSHOW_H

#include <QString>
#include "hexprocess.h"

class MainWindow;

class HexShow : public HexProcess
{
private:

public:
    HexShow();
    ~HexShow();
    bool TransShow();
    bool TransShow(const MainWindow& w);
};

#endif // HEXSHOW_H
