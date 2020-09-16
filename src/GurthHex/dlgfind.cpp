#include "dlgfind.h"
#include "ui_dlgfind.h"

DlgFind::DlgFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgFind)
{
    ui->setupUi(this);
}

DlgFind::~DlgFind()
{
    delete ui;
}

void DlgFind::on_Cancel_clicked()
{
    reject();
}

void DlgFind::on_find_next_clicked()
{
    emit sendfinddata(ui->find_buff->text());
}
