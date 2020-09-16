/********************************************************************************
** Form generated from reading UI file 'dlgreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREPLACE_H
#define UI_DLGREPLACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgReplace
{
public:
    QLineEdit *replace_target;
    QLabel *label;
    QPushButton *replace_next;
    QPushButton *Cancel;
    QPushButton *replace_all;
    QLabel *label_2;
    QLineEdit *replace_with;

    void setupUi(QDialog *DlgReplace)
    {
        if (DlgReplace->objectName().isEmpty())
            DlgReplace->setObjectName(QString::fromUtf8("DlgReplace"));
        DlgReplace->resize(761, 247);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/GurthHex.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DlgReplace->setWindowIcon(icon);
        DlgReplace->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"Background:\"#262626\";\n"
"}"));
        replace_target = new QLineEdit(DlgReplace);
        replace_target->setObjectName(QString::fromUtf8("replace_target"));
        replace_target->setGeometry(QRect(50, 60, 451, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        replace_target->setFont(font);
        replace_target->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DlgReplace);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 161, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        replace_next = new QPushButton(DlgReplace);
        replace_next->setObjectName(QString::fromUtf8("replace_next"));
        replace_next->setGeometry(QRect(600, 40, 131, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        replace_next->setFont(font2);
        replace_next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 1px solid #00F5FF;\n"
"}"));
        Cancel = new QPushButton(DlgReplace);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(600, 180, 131, 31));
        Cancel->setFont(font2);
        Cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 1px solid #00F5FF;\n"
"}"));
        replace_all = new QPushButton(DlgReplace);
        replace_all->setObjectName(QString::fromUtf8("replace_all"));
        replace_all->setGeometry(QRect(600, 110, 131, 31));
        replace_all->setFont(font2);
        replace_all->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 1px solid #00F5FF;\n"
"}"));
        label_2 = new QLabel(DlgReplace);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 110, 161, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        replace_with = new QLineEdit(DlgReplace);
        replace_with->setObjectName(QString::fromUtf8("replace_with"));
        replace_with->setGeometry(QRect(50, 150, 451, 41));
        replace_with->setFont(font);
        replace_with->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(DlgReplace);

        replace_next->setDefault(true);
        replace_all->setDefault(true);


        QMetaObject::connectSlotsByName(DlgReplace);
    } // setupUi

    void retranslateUi(QDialog *DlgReplace)
    {
        DlgReplace->setWindowTitle(QCoreApplication::translate("DlgReplace", "Replace", nullptr));
        label->setText(QCoreApplication::translate("DlgReplace", "Target:", nullptr));
        replace_next->setText(QCoreApplication::translate("DlgReplace", "Replace Next", nullptr));
        Cancel->setText(QCoreApplication::translate("DlgReplace", "Cancel", nullptr));
        replace_all->setText(QCoreApplication::translate("DlgReplace", "Replace All", nullptr));
        label_2->setText(QCoreApplication::translate("DlgReplace", "Replace With:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgReplace: public Ui_DlgReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGREPLACE_H
