#ifndef DLGOPTION_H
#define DLGOPTION_H

#include <QDialog>

namespace Ui {
class DlgOption;
}

class DlgOption : public QDialog
{
    Q_OBJECT

public:
    explicit DlgOption(QWidget *parent = nullptr);
    ~DlgOption();

private:
    Ui::DlgOption *ui;
};

#endif // DLGOPTION_H
