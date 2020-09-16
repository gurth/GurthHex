/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *FileNew;
    QAction *FileOpen;
    QAction *FileSave;
    QAction *FileSaveas;
    QAction *FileExit;
    QAction *EditUndo;
    QAction *EditFind;
    QAction *EditReplease;
    QAction *EditCopy;
    QAction *EditCut;
    QAction *EditPaste;
    QAction *EditClear;
    QAction *EditClearall;
    QAction *ToolOption;
    QAction *HelpAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *Buffer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTool;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1346, 685);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"Background:\"#262626\";\n"
"}\n"
"\n"
"QMenuBar{\n"
"font-size: 11pt;\n"
"color: rgb(225,225,225);\n"
"background-color:#262626;\n"
"}\n"
"QMenuBar::item:selected{\n"
"background-color:#7EC0EE;\n"
"}\n"
"QMenu {\n"
"background-color:#262626; /*whole background*/\n"
"border: 2px solid 	#009ACD;/*boder*/\n"
"}\n"
"QMenu::item {\n"
"font-size: 11pt; \n"
"color: rgb(225,225,225);  /*font color*/\n"
"border: 2px solid rgb(60,60,60);    /*item boder*/\n"
"background-color:rgb(89,87,87);\n"
"padding:2px 16px; \n"
"margin:1px 1px;\n"
"width: 100px;\n"
"}\n"
"QMenu::item:selected { \n"
"background-color:#7EC0EE;\n"
"}\n"
"QMenu::item:pressed {\n"
"    border: 1px solid rgb(60,60,61); \n"
"    background-color: rgb(220,80,6); \n"
"}"));
        FileNew = new QAction(MainWindow);
        FileNew->setObjectName(QString::fromUtf8("FileNew"));
        FileOpen = new QAction(MainWindow);
        FileOpen->setObjectName(QString::fromUtf8("FileOpen"));
        FileSave = new QAction(MainWindow);
        FileSave->setObjectName(QString::fromUtf8("FileSave"));
        FileSaveas = new QAction(MainWindow);
        FileSaveas->setObjectName(QString::fromUtf8("FileSaveas"));
        FileExit = new QAction(MainWindow);
        FileExit->setObjectName(QString::fromUtf8("FileExit"));
        EditUndo = new QAction(MainWindow);
        EditUndo->setObjectName(QString::fromUtf8("EditUndo"));
        EditFind = new QAction(MainWindow);
        EditFind->setObjectName(QString::fromUtf8("EditFind"));
        EditReplease = new QAction(MainWindow);
        EditReplease->setObjectName(QString::fromUtf8("EditReplease"));
        EditCopy = new QAction(MainWindow);
        EditCopy->setObjectName(QString::fromUtf8("EditCopy"));
        EditCut = new QAction(MainWindow);
        EditCut->setObjectName(QString::fromUtf8("EditCut"));
        EditPaste = new QAction(MainWindow);
        EditPaste->setObjectName(QString::fromUtf8("EditPaste"));
        EditClear = new QAction(MainWindow);
        EditClear->setObjectName(QString::fromUtf8("EditClear"));
        EditClearall = new QAction(MainWindow);
        EditClearall->setObjectName(QString::fromUtf8("EditClearall"));
        ToolOption = new QAction(MainWindow);
        ToolOption->setObjectName(QString::fromUtf8("ToolOption"));
        HelpAbout = new QAction(MainWindow);
        HelpAbout->setObjectName(QString::fromUtf8("HelpAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Buffer = new QTextEdit(centralWidget);
        Buffer->setObjectName(QString::fromUtf8("Buffer"));
        Buffer->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"color: rgb(225,225,225);\n"
"background-color:#363636;\n"
"border: 0.5px solid 	#9370DB;\n"
" }"));

        gridLayout->addWidget(Buffer, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1346, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(FileNew);
        menuFile->addAction(FileOpen);
        menuFile->addAction(FileSave);
        menuFile->addAction(FileSaveas);
        menuFile->addAction(FileExit);
        menuEdit->addAction(EditUndo);
        menuEdit->addAction(EditFind);
        menuEdit->addAction(EditReplease);
        menuEdit->addAction(EditCopy);
        menuEdit->addAction(EditCut);
        menuEdit->addAction(EditPaste);
        menuEdit->addAction(EditClear);
        menuEdit->addAction(EditClearall);
        menuTool->addAction(ToolOption);
        menuHelp->addAction(HelpAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gurth Editor", nullptr));
        FileNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        FileOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        FileSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        FileSaveas->setText(QCoreApplication::translate("MainWindow", "Save as ...", nullptr));
        FileExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        EditUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        EditFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        EditReplease->setText(QCoreApplication::translate("MainWindow", "Replease", nullptr));
        EditCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        EditCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        EditPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        EditClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        EditClearall->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
        ToolOption->setText(QCoreApplication::translate("MainWindow", "Option", nullptr));
        HelpAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTool->setTitle(QCoreApplication::translate("MainWindow", "Tool", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
