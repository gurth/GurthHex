#include "dlgoption.h"
#include "ui_dlgoption.h"

DlgOption::DlgOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgOption)
{
    ui->setupUi(this);
}

DlgOption::~DlgOption()
{
    delete ui;
}
