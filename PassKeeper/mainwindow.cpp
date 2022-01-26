#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    newTable_W = new New_DB_W;

    connect(newTable_W, &New_DB_W::signal_NewDB_Ok, this, &MainWindow::slot_NewTable_Ok);

    //DB = std::make_shared<DataBase>("C://Users//HellNout//Downloads//Qt projects//PassKeeper//build-Debug//Test2.db", ui);

    newTable_W->setModal(true);
    newTable_W->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_MW_Seach_clicked()
{

}

void MainWindow::slot_NewTable_Ok(QString Name, QString TableQuery)
{
    newTable_W->close();

    DB = std::make_shared<DataBase>(Name, ui, Name, TableQuery);
}

