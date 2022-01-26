/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionAdd_row;
    QAction *actionAdd_table;
    QWidget *centralwidget;
    QTabWidget *Tables;
    QWidget *tab;
    QTableView *MW_tableOne_View;
    QPushButton *MW_Seach;
    QLineEdit *MW_Seach_line;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1081, 600);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionAdd_row = new QAction(MainWindow);
        actionAdd_row->setObjectName(QString::fromUtf8("actionAdd_row"));
        actionAdd_table = new QAction(MainWindow);
        actionAdd_table->setObjectName(QString::fromUtf8("actionAdd_table"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Tables = new QTabWidget(centralwidget);
        Tables->setObjectName(QString::fromUtf8("Tables"));
        Tables->setGeometry(QRect(30, 20, 731, 531));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        MW_tableOne_View = new QTableView(tab);
        MW_tableOne_View->setObjectName(QString::fromUtf8("MW_tableOne_View"));
        MW_tableOne_View->setGeometry(QRect(-5, -9, 741, 511));
        Tables->addTab(tab, QString());
        MW_Seach = new QPushButton(centralwidget);
        MW_Seach->setObjectName(QString::fromUtf8("MW_Seach"));
        MW_Seach->setGeometry(QRect(990, 50, 83, 29));
        MW_Seach_line = new QLineEdit(centralwidget);
        MW_Seach_line->setObjectName(QString::fromUtf8("MW_Seach_line"));
        MW_Seach_line->setGeometry(QRect(770, 50, 221, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionAdd_row);
        menuFile->addAction(actionAdd_table);

        retranslateUi(MainWindow);

        Tables->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load...", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as...", nullptr));
        actionAdd_row->setText(QCoreApplication::translate("MainWindow", "Add row", nullptr));
        actionAdd_table->setText(QCoreApplication::translate("MainWindow", "Add table", nullptr));
        Tables->setTabText(Tables->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        MW_Seach->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
