#ifndef HEXSHOW_H
#define HEXSHOW_H

#include <QString>
#include "hexprocess.h"

class MainWindow;

class HexShow : public HexProcess
{
private:
    void CheckTrans(char ch, QString& transline);
public:
    HexShow();
    ~HexShow();
    bool TransShow();
    bool TransShow(const MainWindow& w);
};

#endif // HEXSHOW_H
