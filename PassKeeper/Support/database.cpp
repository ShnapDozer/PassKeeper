#include "database.h"

//DataBase::DataBase(QString file, Ui::MainWindow *UI) : ui(UI), filePath(file)
//{
//    ui->Tables->clear();
//    initWindow();
//    if(OpenExistDB())
//        SetDBonModel();
//}

//DataBase::DataBase(QString NameDB, QString Password, Ui::MainWindow *UI) : ui(UI), Name_DB(NameDB)
//{
//     ui->Tables->clear();
//     initWindow();
//     if(CreateNewDB(Password))
//         SetDBonModel();
//}

//QString DataBase::getStrData(QModelIndex DataIndex){ return Q_model->data(DataIndex).toString(); }

////void DataBase::UpdatePassword(QString Pass){ DB.setConnectOptions("QSQLITE_UPDATE_KEY=" + Pass); }

//bool DataBase::SetQuery(QString query)
//{
//    Q_model->setQuery(query, DB);
//    return true;
//}

//void DataBase::AddEmptyRow()
//{
//    QString Quer = "INSERT INTO " + Table_Names[Select_Table] + " VALUES(" + QString::number(Q_model->rowCount() + 1) +", NUll, NULL);";

//    Q_model->setQuery(Quer, DB);
//    qDebug() << Q_model->lastError();
//    Q_model->Refresh();
//}

//void DataBase::AddTable()
//{

//}

//void DataBase::AddTable_FromQuery(QString Name, QString query)
//{
//    Q_model->setQuery(query, DB);

//    ui->Tables->insertTab(1, ui->MW_tableOne_View, Name);
//    Table_Names.push_back(Name);
//}

//void DataBase::DelRow(QModelIndex index)
//{
//    Q_model->setQuery("DELETE FROM "+ Table_Names[Select_Table] +" WHERE ID =" + QString::number(index.row()));
//}



//bool DataBase::OpenExistDB()
//{
//    QString File_Type;
//    File_Type = filePath.mid(filePath.indexOf("."));

//    if(File_Type != ".db")
//        WarninBox.warning(0,"Warning","The file you are trying to open has a non .db extension! :(");

//    else
//    {
//        Name_DB = filePath.mid(filePath.indexOf("/"), filePath.indexOf("."));

//        DB = QSqlDatabase::addDatabase("SQLITECIPHER", Name_DB);
//        DB.setDatabaseName(filePath);

//        if(EnterPassword())
//        {
//            for(auto i : DB.tables()){AddExistTable(i);}
//            Select_Table = 0;
//            return true;
//        }
//    }
//    return false;
//}

//bool DataBase::EnterPassword()
//{
//    while(true)
//    {
//        DB.setPassword(EnterPass_W->getPass());

//        if(EnterPass_W->isCancel())
//        {
//            Action = "Password is not entered :(";
//            return false;
//        }

//        if(DB.open())
//            {
//                qDebug("open :)");
//                Action = "DB is open :)";
//                return true;
//            }
//            else
//            {
//                qDebug() << "Can not open connection: " << DB.lastError().driverText();
//                WarninBox.warning(0,"Warning",":( Can not open connection: " + DB.lastError().driverText());
//            }
//    }
//    return false;
//}

//void DataBase::SetDBonModel()
//{
//    Q_model = new EditableSqlModel(DB);
//    Q_model->setSelectedTableName(Table_Names[Select_Table]);
//    Q_model->Refresh();

//    ui->MW_tableOne_View->setModel(Q_model);

//    ui->MW_tableOne_View->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
//    ui->MW_tableOne_View->horizontalHeader()->setStretchLastSection(true);
//}

//void DataBase::AddExistTable(QString Name)
//{
//    ui->Tables->insertTab(1, ui->MW_tableOne_View, Name);
//    Table_Names.push_back(Name);
//}

//void DataBase::ChangeTable(size_t T_num)
//{
//    if(T_num <= Table_Names.size())
//    {
//        Select_Table = T_num;
//        Q_model->setSelectedTableName(Table_Names[Select_Table]);
//        Q_model->Refresh();
//    }
//}

//void DataBase::Search(QString name, QString column, bool Partial)
//{
//    if(Partial)
//       Q_model->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + " WHERE " + column + " LIKE '%" + name + "%';", DB);
//    else
//         Q_model->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + " WHERE " + column + " LIKE '" + name + "';", DB);
//}

//DataBase::~DataBase()
//{
//    DB.close();
//}

//void DataBase::on_tabWidget_currentChanged(int index){ ChangeTable(index); }

//void DataBase::initWindow()
//{

//    newTable_W = new New_DB_W();
//    OpenExist_W = new Explorer_W();
//    EnterPass_W = new PassWrite_W();

//}

////void DataBase::slot_EnterPass_Ok(QString PassDB)
////{
////    if(!PassDB.isNull())
////        DB.setPassword(PassDB);

////    if(DB.open())
////    {
////        qDebug("open :)");
////        Action = "DB is open :)";
////    }
////    else
////    {
////        qDebug() << "Can not open connection: " << DB.lastError().driverText();
////        WarninBox.warning(0,"Warning",":( Can not open connection:" + DB.lastError().driverText());
////    }
////}


Database::Database() : Open_F(false)
{

}
Database::Database(QString file, QString Password) : Open_F(false)
{
    SetExist(file);
    EnterPassword(Password);
}

bool Database::CreateNew(QString NameDB, QString Passsword)
{
    Name_DB = NameDB;
    filePath = "./" + Name_DB + ".db";

    DB = new QSqlDatabase
            (QSqlDatabase::addDatabase("SQLITECIPHER", Name_DB));

    DB->setDatabaseName(filePath);

    filePath = DB->databaseName();

    if(!Passsword.isNull())
    {
        DB->setPassword(Passsword);
        DB->setConnectOptions("QSQLITE_CREATE_KEY");
    }

    if(DB->open())
    {
        Open_F = 1;
        qDebug("open :)");
        Action = "DB is create :)";
    }
    else
    {
        qDebug() << "Can not open connection: " << DB->lastError().driverText();
        Action = ":( Can not create new DB:" + DB->lastError().driverText();
        return false;
    }

    return true;
}

void Database::SetExist(QString File)
{
    filePath = File;
    int start = filePath.lastIndexOf("/") + 1, end = filePath.indexOf(".");
    Name_DB = filePath.mid(start, end - start);

    QString File_Type = filePath.mid(end);
    qDebug() << Name_DB;

    if(File_Type != ".db")
        WarninBox.warning(0,"Warning","The file you are trying to open has a non .db extension! :(");

    else
    {
        DB = new QSqlDatabase
                (QSqlDatabase::addDatabase("SQLITECIPHER", Name_DB));
        DB->setDatabaseName(filePath);
    }
}

void Database::setName(QString name)
{
    Name_DB = name;
}

void Database::setFilePath(QString file)
{
    filePath = file;
}

QSqlDatabase* Database::getDB()
{
    return DB;
}

bool Database::EnterPassword(QString Pass)
{
    DB->setPassword(Pass);

    if(DB->open())
        {
            Open_F = 1;
            qDebug("open :)");
            Action = "DB is open :)";

            return true;
        }
        else
        {
            qDebug() << "Can not open connection: " << DB->lastError().driverText();
            WarninBox.warning(0,"Warning",":( Can not open connection: " + DB->lastError().driverText());
        }
    return false;
}

Database::~Database()
{
    DB->close();
}

