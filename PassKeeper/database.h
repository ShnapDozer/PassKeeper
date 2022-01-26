#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <memory>

#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QTableView>
#include <QMessageBox>

#include <string>
#include "ui_mainwindow.h"

class DataBase
{
public:

   DataBase(QString File, Ui::MainWindow *UI);

   DataBase(QString NameDB, Ui::MainWindow *UI, QString NameTable, QString query);

   QSqlQueryModel* GetModel(){return Q_model;}

   QSqlDatabase* GetDataBase(){return &DB;}

   bool SetPassword(QString Pass);

   bool SetQuery(QString query);

   bool SelectTable(QString Name);

   bool AddRow(QString AtrStr);

   void AddTable_FromQuery(QString Name, QString query);

   void ChangeTable(size_t T_num);

   void ChangeTable(QString name);

   void Search(QString name, QString column = "Null000");

private slots:
   void on_tabWidget_currentChanged(int index);

private:

   void CreateNewDB(QString NameTable, QString query);
   void OpenExistDB();

   void AddExistTable(QString Name);

   Ui::MainWindow *ui;

   QSqlDatabase DB;
   QSqlQuery *query;
   QSqlQueryModel  *Q_model;

   QMessageBox WarninBox;


   QString file;

   size_t Select_Table;

   std::vector<QString> Table_Names;
};

#endif // DATABASE_H
