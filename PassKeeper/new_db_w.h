#ifndef NEW_DB_W_H
#define NEW_DB_W_H

#include "typemodellist.h"

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class New_DB_W;
}

class New_DB_W : public QDialog
{
    Q_OBJECT

public:
    explicit New_DB_W(QWidget *parent = nullptr);
    ~New_DB_W();

    void setDB_Password(QString Pass){ DB_pass = Pass; }
    void setDB_Name(QString Name){ DB_name = Name; }

private slots:
    void on_NameColumn_textChanged(const QString &arg1);

    void on_TypeColumn_currentTextChanged(const QString &arg1);

    void on_ColumnsNT_clicked(const QModelIndex &index);

    void on_TableName_textChanged(const QString &arg1);

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

    void on_DefaultButton_clicked();

    void on_CreateButton_clicked();

signals:
    void signal_NewTable_Ok(QString NameDB, QString NameTab, QString TableQuery, QString PassDB);

private:
    Ui::New_DB_W *ui;

    size_t change_row;

    std::vector<std::pair<QString, QString>>Columns_type;

    TypeList_Model ColumnTypes;

    QMessageBox WarninBox;
    QString query_DB, Tab_name, Col_name, Col_type, DB_name, DB_pass;
};

#endif // NEW_DB_W_H
