/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

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

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionPrint;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSaveAs = new QAction(Notepad);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 411, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menubar->setDefaultUp(false);
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(true);
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menuNew->addAction(actionNew);
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionSaveAs);
        menuNew->addAction(actionPrint);
        menuNew->addAction(actionExit);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("Notepad", "SaveAs", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        menuNew->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
