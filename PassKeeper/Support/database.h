#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <memory>

#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include <QTableView>
#include <QMessageBox>

#include <string>

class Database
{
public:

    Database();// Default constructor
    Database(QString NameDB, QString Passsword);

    bool CreateNew(QString NameDB, QString Passsword); // NameDB = FilePath + Name
    void SetExist(QString File);

    //State:
    bool isOpen(){ return Open_F; }

    //Setters:
    void setName(QString name);
    void setFilePath(QString file);
    void setPassword(QString pass);

    //Getters:
    QSqlDatabase* getDB();

    //Functions:
    bool OpenDatabase();
    bool EnterPassword(QString Pass);

    ~Database();

private: //Functions:


private: // Field:

    QSqlDatabase *DB;

    QString Name_DB, filePath, NameColumn, Action;
    bool Open_F;

    QMessageBox WarninBox;
};

//class DataBase
//{
//public:

//   DataBase(QString file, Ui::MainWindow *UI);

//   DataBase(QString NameDB, QString Password, Ui::MainWindow *UI);

//   //---Getter:

//   QSqlQueryModel* getModel()  {return Q_model;}

//   QSqlDatabase* getDataBase() {return &DB;}

//   QString getActionStr()      {return Action;}

//   QString getStrData(QModelIndex DataIndex);

//   //---Other:

//   bool EnterPassword();

//   bool SetQuery(QString query);

//   bool SelectTable(QString Name);

//   void AddEmptyRow();

//   void AddTable();
//   void AddTable_FromQuery(QString Name, QString query);

//   void DelRow(QModelIndex insertIndex);

//   void DelTab();

//   void ChangeTable(size_t T_num);
//   void ChangeTable(QString name);

//   void Search(QString name, QString column = "Name", bool Partial = true);

//   ~DataBase();

//private slots:
//   void on_tabWidget_currentChanged(int index);

//private:

//   void initWindow();

//   bool CreateNewDB(QString Pass);
//   bool OpenExistDB();

//   void SetDBonModel();

//   void AddExistTable(QString Name);

//private:

//   Ui::MainWindow *ui;

//   QSqlDatabase DB;
//   QSqlQuery *query;
//   EditableSqlModel  *Q_model;

//   QSqlTableModel *T_model;

//   QMessageBox WarninBox;

//   New_DB_W    *newTable_W;
//   Explorer_W  *OpenExist_W;
//   PassWrite_W *EnterPass_W;

//   QString Name_DB, filePath, NameColumn, Action;

//   size_t Select_Table;

//   std::vector<QString> Table_Names;
//};

#endif // DATABASE_H
