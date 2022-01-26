#include "typemodellist.h"

TypeList_Model::TypeList_Model(QObject *parent) : QAbstractListModel(parent){}

int TypeList_Model::rowCount(const QModelIndex & /*parent*/) const{ return query_V.size(); }

QVariant TypeList_Model::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        return QString(query_V[index.row()].name +" "+ query_V[index.row()].type);
    }
    return QVariant();
}


void TypeList_Model::AddTableType(table_Type data)
{
    query_V.push_back(data);
    emit dataChanged(index(query_V.size()), index(query_V.size()));
}

void TypeList_Model::DelTableType(size_t id)
{
    query_V.erase(query_V.begin() + id);
    emit dataChanged(index(id), index(query_V.size()));
}

void TypeList_Model::ClearList()
{
    query_V.clear();
    emit layoutChanged();
}


List_Model::List_Model(QObject *parent) : QAbstractListModel(parent){}

int List_Model::rowCount(const QModelIndex &/*parent*/) const {return String_V.size();}

QVariant List_Model::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
        {
            return QString(String_V[index.row()]);
        }
    return QVariant();
}

void List_Model::push_back(QString data)
{
    String_V.push_back(data);
    emit dataChanged(index(String_V.size()), index(String_V.size()));
}
