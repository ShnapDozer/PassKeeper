#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class DataBase
{
public:

   DataBase(QString File);

   QSqlQueryModel* GetModel(){return model;}

   DataBase* GetDataBase(){return db;}

   bool SetPassword(QString Pass);

   bool SelectTable(QString Name);

   bool AddRow(QString AtrStr);

private:

   DataBase *db;
   QSqlQueryModel *model;

   QString File;

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
