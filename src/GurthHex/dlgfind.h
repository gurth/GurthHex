#ifndef DLGFIND_H
#define DLGFIND_H

#include <QDialog>

namespace Ui {
class DlgFind;
}

class DlgFind : public QDialog
{
    Q_OBJECT
public:
    explicit DlgFind(QWidget *parent = nullptr);
    ~DlgFind();

private slots:
    void on_Cancel_clicked();

    void on_find_next_clicked();

private:
    Ui::DlgFind *ui;

signals:
    void sendfinddata(QString finddata);

};

#endif // DLGFIND_H
