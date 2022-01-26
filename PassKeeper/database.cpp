#include "database.h"

DataBase::DataBase(QString File, Ui::MainWindow *UI) : ui(UI), file(File)
{
    ui->Tables->clear();
    OpenExistDB();
}

DataBase::DataBase(QString NameDB, Ui::MainWindow *UI, QString NameTable, QString query) : ui(UI), file(NameDB)
{
     ui->Tables->clear();
     CreateNewDB(NameTable, query);
}

bool DataBase::SetQuery(QString query)
{
    Q_model->setQuery(query, DB);
    return true;
}

void DataBase::AddTable_FromQuery(QString Name, QString query)
{
    Q_model->setQuery(query, DB);

    ui->Tables->insertTab(1, ui->MW_tableOne_View, Name);
    Table_Names.push_back(Name);
}

void DataBase::CreateNewDB(QString NameTable, QString query)
{
    DB = QSqlDatabase::addDatabase("QSQLITE", file);
    DB.setDatabaseName("./" + file + ".db");

    if(DB.open()){qDebug("open :)");}
    else qDebug("No open :(");

    Table_Names.push_back(NameTable);

    Select_Table = 0;

    Q_model = new QSqlQueryModel();

    Q_model->setQuery(query, DB);
    Q_model->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + ";", DB);

    AddExistTable(Table_Names[Select_Table]);

    ui->MW_tableOne_View->setModel(Q_model);
}

void DataBase::OpenExistDB()
{
    QString File_Type;

    File_Type = file.mid(file.indexOf("."));

    if(File_Type != ".db")
    {
        WarninBox.warning(0,"Warning","The file you are trying to open has a non .db extension! :(");
    }

    else
    {
        QString File_Name;

        DB = QSqlDatabase::addDatabase("QSQLITE", "generalBD");
        DB.setDatabaseName(file);

        if(DB.open()){qDebug("open :)");}
        else qDebug("No open :(");

        for(auto i : DB.tables()){AddExistTable(i);}

        Select_Table = 0;

        Q_model = new QSqlQueryModel();
        Q_model->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + ";", DB);

        ui->MW_tableOne_View->setModel(Q_model);
    }
}

void DataBase::AddExistTable(QString Name)
{
    ui->Tables->insertTab(1, ui->MW_tableOne_View, Name);
    Table_Names.push_back(Name);
}

void DataBase::ChangeTable(size_t T_num)
{
    if(T_num >= Table_Names.size())
    {
        Q_model->setQuery("SELECT * FROM "+ Table_Names[T_num] + ";", DB);
    }
    Select_Table = T_num;
}

void DataBase::Search(QString name, QString column)
{
    Q_model->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + " WHERE " + column + " LIKE '" + name + "%';", DB);
}

void DataBase::on_tabWidget_currentChanged(int index){ ChangeTable(index); }


