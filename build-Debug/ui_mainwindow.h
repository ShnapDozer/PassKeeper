/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QTabWidget *TabBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *Seach_line;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddPass_Button;
    QPushButton *AddTab_Button;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *DelR_Button;
    QPushButton *DelT_Button;
    QLabel *Action_Text;
    QFrame *line;
    QTableView *MainTable;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1081, 606);
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
        TabBar = new QTabWidget(centralwidget);
        TabBar->setObjectName(QString::fromUtf8("TabBar"));
        TabBar->setGeometry(QRect(20, 20, 741, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(768, 54, 311, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Seach_line = new QLineEdit(layoutWidget);
        Seach_line->setObjectName(QString::fromUtf8("Seach_line"));

        verticalLayout->addWidget(Seach_line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddPass_Button = new QPushButton(layoutWidget);
        AddPass_Button->setObjectName(QString::fromUtf8("AddPass_Button"));

        horizontalLayout->addWidget(AddPass_Button);

        AddTab_Button = new QPushButton(layoutWidget);
        AddTab_Button->setObjectName(QString::fromUtf8("AddTab_Button"));

        horizontalLayout->addWidget(AddTab_Button);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        DelR_Button = new QPushButton(layoutWidget);
        DelR_Button->setObjectName(QString::fromUtf8("DelR_Button"));

        horizontalLayout_2->addWidget(DelR_Button);

        DelT_Button = new QPushButton(layoutWidget);
        DelT_Button->setObjectName(QString::fromUtf8("DelT_Button"));

        horizontalLayout_2->addWidget(DelT_Button);


        verticalLayout->addLayout(horizontalLayout_2);

        Action_Text = new QLabel(centralwidget);
        Action_Text->setObjectName(QString::fromUtf8("Action_Text"));
        Action_Text->setGeometry(QRect(770, 530, 301, 20));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(760, 520, 321, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainTable = new QTableView(centralwidget);
        MainTable->setObjectName(QString::fromUtf8("MainTable"));
        MainTable->setGeometry(QRect(20, 43, 741, 420));
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

        TabBar->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PassKeeper", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load...", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as...", nullptr));
        actionAdd_row->setText(QCoreApplication::translate("MainWindow", "Add row", nullptr));
        actionAdd_table->setText(QCoreApplication::translate("MainWindow", "Add table", nullptr));
        AddPass_Button->setText(QCoreApplication::translate("MainWindow", "Add Pass", nullptr));
        AddTab_Button->setText(QCoreApplication::translate("MainWindow", "Add Tab", nullptr));
        DelR_Button->setText(QCoreApplication::translate("MainWindow", "Del Pass", nullptr));
        DelT_Button->setText(QCoreApplication::translate("MainWindow", "Del Tab", nullptr));
        Action_Text->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
