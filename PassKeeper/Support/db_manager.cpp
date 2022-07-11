#include "DB_Manager.h"

DB_Manager::DB_Manager(QObject *parent)
    : QObject{parent}
{
}

bool DB_Manager::CreateNew(QString file, QString Password)
{
    return DB.CreateNew(file, Password);
}

void DB_Manager::slot_NewBD_Ok(QString file, QString NameTab, QString TabQuery, QString Pass)
{
    if(DB.CreateNew(file, Pass))
    {
        Model = new EditableSqlModel(DB.getDB());
        Model->addTable(NameTab, TabQuery);
        emit signal_BDisCreate(Model);
    }
    else // error!!
        qDebug("DB - not created!");
}

void DB_Manager::slot_NewTab_Ok(QString NameTab, QString TabQuery)
{
    Model->addTable(NameTab, TabQuery);
    emit signal_TabisCreate();
}

void DB_Manager::slot_OpenW_Ok(QString Path)
{
    DB.SetExist(Path);
    emit signal_getPass();
}
void DB_Manager::slot_getPass_Ok(QString Pass)
{
    if(DB.EnterPassword(Pass))
    {
        Model = new EditableSqlModel(DB.getDB(), this);
        Model->SelectTable(0);
        emit signal_BDisCreate(Model);
    }
    else // error!!
        qDebug("DB - wrong password!");
}
