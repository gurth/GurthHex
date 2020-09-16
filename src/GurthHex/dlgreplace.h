#ifndef DLGREPLACE_H
#define DLGREPLACE_H

#include <QDialog>

namespace Ui {
class DlgReplace;
}

class DlgReplace : public QDialog
{
    Q_OBJECT

public:
    explicit DlgReplace(QWidget *parent = nullptr);
    ~DlgReplace();

private slots:
    void on_Cancel_clicked();

    void on_replace_next_clicked();

    void on_replace_all_clicked();

signals:
    void sendreplacedata(QString target, QString replacewith, bool isall);

private:
    Ui::DlgReplace *ui;
};

#endif // DLGREPLACE_H
