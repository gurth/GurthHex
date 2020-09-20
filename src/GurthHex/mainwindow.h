#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fileprocess.h"
#include "dlgfind.h"
#include "dlgreplace.h"
#include "dlgoption.h"
#include "hexshow.h"
#include "hexdown.h"

QT_BEGIN_NAMESPACE
class QTextEdit;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;
}

struct CurPos
{
    int position;
    int col;
    int row;
};

struct BlockPos
{
    CurPos pos;
    CurPos anchor;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ConnectEditorWidgets();
    void DisconnectEditorWidgets();

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

    void OnEditorScrollMoved(int pos);
    void OnEditorSelectionChanged();

private slots:
    void receivefinddata(QString finddata);
    void receivereplacedata(QString target, QString replacewith, bool isall);

private:
    FileProcess process;
    Ui::MainWindow *ui;
    QTextEdit *editor;
    QTextEdit *line;
    QTextEdit *trans;

    DlgFind* dlgfind = new DlgFind;
    DlgReplace* dlgreplace = new DlgReplace;
    DlgOption* dlgoption = new DlgOption;

private:
    void OninitMenu();
    void OninitEditor();

    friend bool HexShow::TransShow(const MainWindow& w);
    friend bool HexDown::TransDown(MainWindow& w);
};

#endif // MAINWINDOW_H
