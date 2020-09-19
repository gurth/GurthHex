#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QScrollBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    OninitMenu();
    OninitEditor();

    if(!process.ArgProcessing())
        QMessageBox::information(nullptr, "Error", "Arguments Processing failed.", QMessageBox::Yes);
    else
    {
        if(process.fileloader())
        {
            HexShow hs;
            hs.TransShow(*this);
            ConnectScrolls();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dlgfind;
}

void inline MainWindow::OninitMenu()
{
    connect(ui->FileNew,SIGNAL(triggered()),this,SLOT(OnClickFileNew()));
    connect(ui->FileOpen,SIGNAL(triggered()),this,SLOT(OnClickFileOpen()));
    connect(ui->FileSave,SIGNAL(triggered()),this,SLOT(OnClickFileSave()));
    connect(ui->FileSaveas,SIGNAL(triggered()),this,SLOT(OnClickFileSaveas()));
    connect(ui->FileExit,SIGNAL(triggered()),this,SLOT(OnClickFileExit()));
    connect(ui->EditUndo,SIGNAL(triggered()),this,SLOT(OnClickEditUndo()));
    connect(ui->EditFind,SIGNAL(triggered()),this,SLOT(OnClickEditFind()));
    connect(ui->EditReplease,SIGNAL(triggered()),this,SLOT(OnClickEditReplease()));
    connect(ui->EditCopy,SIGNAL(triggered()),this,SLOT(OnClickEditCopy()));
    connect(ui->EditClear,SIGNAL(triggered()),this,SLOT(OnClickEditClear()));
    connect(ui->EditClearall,SIGNAL(triggered()),this,SLOT(OnClickEditClearall()));
    connect(ui->ToolOption,SIGNAL(triggered()),this,SLOT(OnClickToolOption()));
    connect(ui->HelpAbout,SIGNAL(triggered()),this,SLOT(OnClickHelpAbout()));
}

void inline MainWindow::OninitEditor()
{   
    editor = ui->Buffer;
    line=ui->line;
    trans=ui->trans;

    line->setReadOnly(true);
    line->verticalScrollBar()->hide();

    trans->setReadOnly(true);
    trans->verticalScrollBar()->hide();

    highlighter = new Highlighter(editor->document());

    connect(dlgfind, SIGNAL(sendfinddata(QString)), this, SLOT(receivefinddata(QString)));
    connect(dlgreplace, SIGNAL(sendreplacedata(QString,QString,bool)), this, SLOT(receivereplacedata(QString,QString,bool)));
}


void MainWindow::receivefinddata(QString finddata)
{
    if(ui->Buffer->find(finddata))
    {
        QPalette palette = ui->Buffer->palette();
        palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
        ui->Buffer->setPalette((palette));
    }
    else
    {
        QTextCursor cursor=ui->Buffer->textCursor();
        cursor.movePosition(QTextCursor::Start);
        ui->Buffer->setTextCursor(cursor);
        if(ui->Buffer->find(finddata))
        {
            QPalette palette = ui->Buffer->palette();
            palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
            ui->Buffer->setPalette((palette));
        }
        else
            QMessageBox::information(this,tr("Warnning"),tr("Cannot Find."),QMessageBox::Ok);
    }
}

void MainWindow::receivereplacedata(QString target, QString replacewith, bool isall)
{
    if(isall)
    {
        QString content=ui->Buffer->toPlainText();
        std::string t,r;
        t=target.toStdString(),r=replacewith.toStdString();
        content.replace(target,replacewith);
        ui->Buffer->setPlainText(content);
    }
    else
    {
        QTextCursor cursor=ui->Buffer->textCursor();
        if(ui->Buffer->find(target));
        else
        {
            cursor.movePosition(QTextCursor::Start);
            ui->Buffer->setTextCursor(cursor);
            if(ui->Buffer->find(target))
            {
                QPalette palette = ui->Buffer->palette();
                palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
                ui->Buffer->setPalette((palette));
            }
            else
                QMessageBox::information(this,tr("Warnning"),tr("Cannot Find"),QMessageBox::Ok);
        }
        cursor=ui->Buffer->textCursor();
        if(cursor.hasSelection())
        {
            cursor.removeSelectedText();
            cursor.insertText(replacewith);
        }
    }
}


void MainWindow::ConnectScrolls()
{
    connect(editor->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int)));
    connect(line->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int)));
    connect(trans->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int)));
}

void MainWindow::DisconnectScrolls()
{
    disconnect(connect(editor->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int))));
    disconnect(connect(line->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int))));
    disconnect(connect(trans->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(OnEditorScrollMoved(int))));
}

void MainWindow::OnEditorScrollMoved(int pos)
{
    editor->verticalScrollBar()->setValue(pos);
    line->verticalScrollBar()->setValue(pos);
    trans->verticalScrollBar()->setValue(pos);
}
