/********************************************************************************
** Form generated from reading UI file 'dlgfind.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFIND_H
#define UI_DLGFIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgFind
{
public:
    QLineEdit *find_buff;
    QLabel *label;
    QPushButton *find_next;
    QPushButton *Cancel;

    void setupUi(QDialog *DlgFind)
    {
        if (DlgFind->objectName().isEmpty())
            DlgFind->setObjectName(QString::fromUtf8("DlgFind"));
        DlgFind->resize(697, 199);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/GurthHex.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DlgFind->setWindowIcon(icon);
        DlgFind->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"Background:\"#262626\";\n"
"}"));
        find_buff = new QLineEdit(DlgFind);
        find_buff->setObjectName(QString::fromUtf8("find_buff"));
        find_buff->setGeometry(QRect(50, 80, 451, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        find_buff->setFont(font);
        find_buff->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DlgFind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 161, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        find_next = new QPushButton(DlgFind);
        find_next->setObjectName(QString::fromUtf8("find_next"));
        find_next->setGeometry(QRect(560, 40, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        find_next->setFont(font2);
        find_next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 1px solid #00F5FF;\n"
"}"));
        Cancel = new QPushButton(DlgFind);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(560, 120, 101, 31));
        Cancel->setFont(font2);
        Cancel->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 1px solid #00F5FF;\n"
"}"));

        retranslateUi(DlgFind);

        find_next->setDefault(true);


        QMetaObject::connectSlotsByName(DlgFind);
    } // setupUi

    void retranslateUi(QDialog *DlgFind)
    {
        DlgFind->setWindowTitle(QCoreApplication::translate("DlgFind", "Find", nullptr));
        label->setText(QCoreApplication::translate("DlgFind", "What to find:", nullptr));
        find_next->setText(QCoreApplication::translate("DlgFind", "Find Next", nullptr));
        Cancel->setText(QCoreApplication::translate("DlgFind", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgFind: public Ui_DlgFind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFIND_H
