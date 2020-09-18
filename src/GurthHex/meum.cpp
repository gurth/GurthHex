#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QFileDialog>
#include "hexdown.h"
#include "hexshow.h"

void MainWindow::OnClickFileNew()
{

}

void MainWindow::OnClickFileOpen()
{
    process.FilePath= QFileDialog::getOpenFileName(this, tr("Open File"),
                                                   "",tr("Gurth File (*.gurth)"));
    if(!process.fileloader())
        QMessageBox::information(nullptr, "Error", "File opening failed.", QMessageBox::Yes);
    else
    {
        HexShow hs;
        if(!hs.TransShow(*this))
            QMessageBox::information(nullptr, "Error", "File Show failed.", QMessageBox::Yes);

    }
}

void MainWindow::OnClickFileSave()
{
    HexDown hd;
    if(!hd.TransDown(*this))
        QMessageBox::information(nullptr, "Error", "File Down failed.", QMessageBox::Yes);
    else
    {
        if(!process.filesaver())
            QMessageBox::information(nullptr, "Error", "File Save failed.", QMessageBox::Yes);
        else
            QMessageBox::information(NULL, "Error", "File saving failed.", QMessageBox::Yes);
    }

}

void MainWindow::OnClickFileSaveas()
{
    process.FilePath = QFileDialog::getSaveFileName(this, tr("Open File"),
                                                    "",tr("Gurth File (*.gurth)"));
    OnClickFileSave();
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
    ui->Buffer->clear();
}

void MainWindow::OnClickToolOption()
{
    dlgoption->show();
}

void MainWindow::OnClickHelpAbout()
{   
    QMessageBox::about(this, "About GurthHex",
                tr("<p><font><b>GurthHex</b> is a powerful editor developed by Gurth Palarran.</font></p>" \
                   "<p><font>Copy right (C) Gurth Inc.</font></p>"));
}
