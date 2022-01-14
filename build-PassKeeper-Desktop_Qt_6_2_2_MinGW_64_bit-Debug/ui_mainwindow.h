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

class Ui_PassKeeper
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionAdd_row;
    QAction *actionAdd_table;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *MW_tableOne_View;
    QWidget *tab_2;
    QPushButton *MW_Seach;
    QLineEdit *MW_Seach_line;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PassKeeper)
    {
        if (PassKeeper->objectName().isEmpty())
            PassKeeper->setObjectName(QString::fromUtf8("PassKeeper"));
        PassKeeper->resize(1081, 600);
        actionLoad = new QAction(PassKeeper);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(PassKeeper);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(PassKeeper);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionAdd_row = new QAction(PassKeeper);
        actionAdd_row->setObjectName(QString::fromUtf8("actionAdd_row"));
        actionAdd_table = new QAction(PassKeeper);
        actionAdd_table->setObjectName(QString::fromUtf8("actionAdd_table"));
        centralwidget = new QWidget(PassKeeper);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 731, 531));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        MW_tableOne_View = new QTableView(tab);
        MW_tableOne_View->setObjectName(QString::fromUtf8("MW_tableOne_View"));
        MW_tableOne_View->setGeometry(QRect(-5, -9, 741, 511));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MW_Seach = new QPushButton(centralwidget);
        MW_Seach->setObjectName(QString::fromUtf8("MW_Seach"));
        MW_Seach->setGeometry(QRect(990, 50, 83, 29));
        MW_Seach_line = new QLineEdit(centralwidget);
        MW_Seach_line->setObjectName(QString::fromUtf8("MW_Seach_line"));
        MW_Seach_line->setGeometry(QRect(770, 50, 221, 28));
        PassKeeper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PassKeeper);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        PassKeeper->setMenuBar(menubar);
        statusbar = new QStatusBar(PassKeeper);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PassKeeper->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionAdd_row);
        menuFile->addAction(actionAdd_table);

        retranslateUi(PassKeeper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PassKeeper);
    } // setupUi

    void retranslateUi(QMainWindow *PassKeeper)
    {
        PassKeeper->setWindowTitle(QCoreApplication::translate("PassKeeper", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("PassKeeper", "Load...", nullptr));
        actionSave->setText(QCoreApplication::translate("PassKeeper", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("PassKeeper", "Save as...", nullptr));
        actionAdd_row->setText(QCoreApplication::translate("PassKeeper", "Add row", nullptr));
        actionAdd_table->setText(QCoreApplication::translate("PassKeeper", "Add table", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PassKeeper", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PassKeeper", "Tab 2", nullptr));
        MW_Seach->setText(QCoreApplication::translate("PassKeeper", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        menuFile->setTitle(QCoreApplication::translate("PassKeeper", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PassKeeper: public Ui_PassKeeper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
