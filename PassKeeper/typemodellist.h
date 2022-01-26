#ifndef TYPEMODELLIST_H
#define TYPEMODELLIST_H

#include <QDialog>
#include <QAbstractListModel>
#include <QListView>

struct table_Type
{
    QString name, type;
};

class TypeList_Model: public QAbstractListModel
{
public:
    TypeList_Model(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    void AddTableType(table_Type data);
    void DelTableType(size_t id);
    void ClearList();

    std::vector <table_Type> getTypeList(){return query_V;}
private:

    Q_OBJECT;
    std::vector <table_Type> query_V;
};

class List_Model : public QAbstractListModel
{
    Q_OBJECT;
    std::vector <QString> String_V;

public:
    List_Model(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    void push_back(QString data);

    QString get_String(size_t index){return String_V[index];}
    std::vector <QString> get_Vec(){return String_V;}
};
#endif // TYPEMODELLIST_H
