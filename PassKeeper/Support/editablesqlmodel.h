#ifndef EDITABLESQLMODEL_H
#define EDITABLESQLMODEL_H

#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

#include <vector>

class EditableSqlModel : public QSqlQueryModel
{
    Q_OBJECT

public:
    EditableSqlModel(QObject *parent = nullptr);
    EditableSqlModel(QSqlDatabase *DB, QObject *parent = nullptr);

    std::vector<QString> getTabNames() const;
    QString getNameTab() const;

    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;

    void addTable(QString name, QString quer);
    void AddExistTable(QString Name);
    void delTable(QString nameTab = QString());
    bool SelectTable(size_t i);

    void Search(QString request, int ColumnNumb, bool Partial);
    void Refresh();

    // For editable:
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;

private: //Func



private: //Var

    QSqlDatabase *Database;
    QSqlQuery *query;

    size_t Select_Table;
    std::vector<QString> Table_Names;
};
#endif
