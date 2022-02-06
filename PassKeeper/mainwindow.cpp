#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(int argc, char *argv[], QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << QSqlDatabase::drivers();

    newTable_W = new New_DB_W;
    OpenExist_W = new Explorer_W;
    EnterPass_W = new PassWrite_W;

    start_W = new Start_W(newTable_W, EnterPass_W);

    connect(newTable_W, &New_DB_W::signal_NewTable_Ok, this, &MainWindow::slot_NewTable_Ok);
    connect(EnterPass_W, &PassWrite_W::signal_EnterPass_Ok, this, &MainWindow::slot_EnterPass_Ok);


    if(argc > 1){ DB = std::make_shared<DataBase>(argv[1], ui); }
    else
    {
        start_W->show();
        start_W->exec();
    }
    //DB = std::make_shared<DataBase>("C:/Users/HellNout/Downloads/QtProjects/PassKeeper/build-Debug/TestPass.db", ui, "ewfwge");

    //DB->UpdatePassword("wefwe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MW_Seach_clicked()
{

}

void MainWindow::slot_NewTable_Ok(QString NameDB, QString NameTab, QString TableQuery, QString PassDB)
{
    newTable_W->close();
    start_W->close();

    DB = std::make_shared<DataBase>(NameDB, ui, NameTab, TableQuery, PassDB);
}

void MainWindow::slot_EnterPass_Ok(QString NameDB, QString PassDB)
{
     DB = std::make_shared<DataBase>(NameDB, ui, PassDB);
}


