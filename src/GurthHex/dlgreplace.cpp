#include "dlgreplace.h"
#include "ui_dlgreplace.h"

DlgReplace::DlgReplace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgReplace)
{
    ui->setupUi(this);
}

DlgReplace::~DlgReplace()
{
    delete ui;
}

void DlgReplace::on_Cancel_clicked()
{
    reject();
}

void DlgReplace::on_replace_next_clicked()
{
    emit sendreplacedata(ui->replace_target->text(), ui->replace_with->text(), false);
}

void DlgReplace::on_replace_all_clicked()
{
    emit sendreplacedata(ui->replace_target->text(), ui->replace_with->text(), true);
}
