#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

void MainWindow::OnClickFileNew()
{

}

void MainWindow::OnClickFileOpen()
{

}

void MainWindow::OnClickFileSave()
{

}

void MainWindow::OnClickFileSaveas()
{

}

void MainWindow::OnClickFileExit()
{
    QApplication::exit();
}

void MainWindow::OnClickEditUndo()
{
    ui->Buffer->undo();
}

void MainWindow::OnClickEditFind()
{
    dlgfind->show();
}

void MainWindow::OnClickEditReplease()
{
    dlgreplace->show();
}

void MainWindow::OnClickEditCopy()
{
    ui->Buffer->copy();
}

void MainWindow::OnClickEditCut()
{
    ui->Buffer->cut();
}

void MainWindow::OnClickEditPaste()
{
    ui->Buffer->paste();
}

void MainWindow::OnClickEditClear()
{
    ui->Buffer->clear();
}

void MainWindow::OnClickEditClearall()
{

}

void MainWindow::OnClickToolOption()
{

}

void MainWindow::OnClickHelpAbout()
{   
    QMessageBox::about(this, "About GurthHex",
                tr("<p><font><b>GurthHex</b> is a powerful editor developed by Gurth Palarran.</font></p>" \
                   "<p><font>Copy right (C) Gurth Inc.</font></p>"));
}
