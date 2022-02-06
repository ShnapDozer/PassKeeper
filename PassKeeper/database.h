#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <memory>

#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QTableView>
#include <QMessageBox>

#include <string>
#include "ui_mainwindow.h"

class DataBase
{
public:

   DataBase(QString File, Ui::MainWindow *UI, QString Password = QString());

   DataBase(QString NameDB, Ui::MainWindow *UI, QString NameTable, QString query, QString Password = QString());

   QSqlQueryModel* GetModel(){return Q_model;}

   QSqlDatabase* GetDataBase(){return &DB;}

   void UpdatePassword(QString Pass);

   bool EnterPassword(QString Pass);

   bool SetQuery(QString query);

   bool SelectTable(QString Name);

   bool AddRow(QString AtrStr);

   void AddTable_FromQuery(QString Name, QString query);

   void ChangeTable(size_t T_num);

   void ChangeTable(QString name);

   void Search(QString name, QString column = "Null000");

   ~DataBase();

private slots:
   void on_tabWidget_currentChanged(int index);

private:

   void CreateNewDB(QString NameTable, QString query, QString Pass);
   void OpenExistDB(QString Pass);

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
