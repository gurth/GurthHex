#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "datalist.h"
#include "fileprocess.h"
#include "highlighter.h"
#include "dlgfind.h"
#include "dlgreplace.h"
#include "hexshow.h"

QT_BEGIN_NAMESPACE
class QTextEdit;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void OnClickFileNew();
    void OnClickFileOpen();
    void OnClickFileSave();
    void OnClickFileSaveas();
    void OnClickFileExit();
    void OnClickEditUndo();
    void OnClickEditFind();
    void OnClickEditReplease();
    void OnClickEditCopy();
    void OnClickEditCut();
    void OnClickEditPaste();
    void OnClickEditClear();
    void OnClickEditClearall();
    void OnClickToolOption();
    void OnClickHelpAbout();

private slots:
    void receivefinddata(QString finddata);
    void receivereplacedata(QString target, QString replacewith, bool isall);

private:
    FileProcess process;
    Ui::MainWindow *ui;
    Highlighter *highlighter;
    QTextEdit *editor;
    DlgFind* dlgfind = new DlgFind;
    DlgReplace* dlgreplace = new DlgReplace;
    int findpos = 0;
    char* buff = nullptr;
private:
    void OninitMenu();
    void OninitEditor();
    friend bool HexShow::TransShow(char* buff);
};

#endif // MAINWINDOW_H
