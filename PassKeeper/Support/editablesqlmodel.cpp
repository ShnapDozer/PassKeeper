#include "editablesqlmodel.h"

#include <QtSql>
#include <algorithm>

EditableSqlModel::EditableSqlModel(QObject *parent)
    : QSqlQueryModel(parent),
      Select_Table(-1)
{
}

EditableSqlModel::EditableSqlModel(QSqlDatabase *DB, QObject *parent)
    : QSqlQueryModel(parent),
      Database(DB),
      query(new QSqlQuery(*DB)),
      Select_Table(-1)
{
    for(auto i : DB->tables())
        AddExistTable(i);
}

std::vector<QString> EditableSqlModel::getTabNames() const
{
    return Table_Names;
}

QString EditableSqlModel::getNameTab() const
{
    if(Select_Table != -1)
        return Table_Names[Select_Table];
    else
        return QString();
}

bool EditableSqlModel::insertRows(int row, int count, const QModelIndex &parent)
{
    query->clear();
    for(int i = 0; i < count; ++i)
        if(!query->exec("INSERT INTO " + Table_Names[Select_Table] + " DEFAULT VALUES;"))
            return false;
    this->Refresh();
    return true;
}

//void EditableSqlModel::delRow(QModelIndex index)
//{
//   QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
//   QString id = data(primaryKeyIndex).toString();

//   this->setQuery("DELETE FROM "+ Table_Names[Select_Table] +" WHERE ID = " + id +";");
//}

bool EditableSqlModel::removeRows(int row, int count, const QModelIndex &parent)
{
    query->clear();
    qDebug()<< QString::number(row);
    for(int id = row; id < row + count; ++id){
        if(!query->exec("DELETE FROM "+ Table_Names[Select_Table] +" WHERE ID= " + QString::number(id) +";"))
            return false;}
    this->Refresh();
    return true;
}

void EditableSqlModel::addTable(QString name, QString quer)
{
    this->setQuery(quer, *Database);
    Table_Names.push_back(name);
    SelectTable(Table_Names.size()-1);
}

void EditableSqlModel::delTable(QString nameTab)
{
    if(nameTab.isNull()) {
        this->setQuery("DROP TABLE "+ Table_Names[Select_Table] +";", *Database);
        Table_Names.erase(Table_Names.begin() + Select_Table);
    }
    else {
        this->setQuery("DROP TABLE IF EXISTS "+ nameTab +";", *Database);
        auto FindTab = std::find(begin(Table_Names), end(Table_Names), nameTab);
        if(FindTab != end(Table_Names))
            Table_Names.erase(FindTab);
    }
}

bool EditableSqlModel::SelectTable(size_t i)
{
    if(i < Table_Names.size())
    {
        Select_Table = i;
        this->Refresh();
        return true;
    }
    else return false;
}

void EditableSqlModel::Search(QString request, int ColumnNumber, bool Partial)
{
    QString ColumnName = this->record().fieldName(ColumnNumber);

    if(Partial)
         this->setQuery("SELECT * FROM "+ Table_Names[Select_Table] +" WHERE " + ColumnName + " LIKE '%" + request + "%';", *Database);
    else
         this->setQuery("SELECT * FROM "+ Table_Names[Select_Table] + " WHERE " + ColumnName + " LIKE '" + request + "';", *Database);
}

void EditableSqlModel::Refresh()
{
    this->setQuery("SElECT * FROM " + Table_Names[Select_Table], *Database);
}
//{ setQuery("SELECT * FROM " + Selected_nameTable + " ORDER BY Name;", *Database); } REWORK!!!!

Qt::ItemFlags EditableSqlModel::flags(const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (index.column() != 0)
        flags |= Qt::ItemIsEditable;
    return flags;
}

bool EditableSqlModel::setData(const QModelIndex &index, const QVariant &value, int /* role */)
{
    if (index.column() < 1 || Table_Names.size() == 0)
        return false;

    QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
    QString id = data(primaryKeyIndex).toString();
    QString ColumName = this->record().fieldName(index.column());

    QString quer = "UPDATE "+ Table_Names[Select_Table] +" SET "+ ColumName +" = '"+ value.toString() +"' WHERE ID = " + id +";";
    this->setQuery(quer, *Database);
    Refresh();

    return true;
}

void EditableSqlModel::AddExistTable(QString Name)
{
    Table_Names.push_back(Name);
}


