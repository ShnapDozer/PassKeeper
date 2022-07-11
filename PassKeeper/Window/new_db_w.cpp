#include "new_db_w.h"
#include "ui_new_db_w.h"

void setDefault_typeList(TypeList_Model &c_data)
{
    c_data.ClearList();
    c_data.AddTableType({"Name", "TEXT"});
    c_data.AddTableType({"Pass", "TEXT"});

}

New_DB_W::New_DB_W(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_DB_W), ColumnTypes(0), change_row(-1), Col_name("000!"), Col_type("INT")
{
    ui->setupUi(this);

    ui->ColumnsNT->setModel(&ColumnTypes);
    ui->BD_Name->setPlaceholderText(QString("Enter name for DB:"));

    ui->BD_Pass->setPlaceholderText(QString("Enter pass for DB:"));
    ui->BD_Pass->setEchoMode(QLineEdit::Password);

    ui->Tab_Name->setPlaceholderText(QString("Enter name for Tab:"));
}

New_DB_W::~New_DB_W()
{
    delete ui;
}

void New_DB_W::slot_SW_CreateNew()
{
    CreateDB_F = true;
    this->show();
}

void New_DB_W::slot_MW_CreateNewTab(QString NameDB, QString PassDB)
{
    CreateDB_F = false;

    ui->BD_Name->setText(NameDB);
    ui->BD_Pass->setText(PassDB);

    ui->BD_Name->setReadOnly(true);
    ui->BD_Pass->setReadOnly(true);
    this->show();
}

void New_DB_W::slot_RunMain_W()
{
    this->close();
}

void New_DB_W::on_NameColumn_textChanged(const QString &arg1) { Col_name = arg1; }

void New_DB_W::on_TypeColumn_currentTextChanged(const QString &arg1) { Col_type = arg1; }

void New_DB_W::on_ColumnsNT_clicked(const QModelIndex &index) { change_row = index.row(); }

void New_DB_W::on_TableName_textChanged(const QString &arg1){ Tab_name = arg1; }

void New_DB_W::on_AddButton_clicked(){ if(Col_name != "000!"){ ColumnTypes.AddTableType({Col_name, Col_type}); } }

void New_DB_W::on_DeleteButton_clicked(){if(change_row != -1){ColumnTypes.DelTableType(change_row);}}

void New_DB_W::on_DefaultButton_clicked(){ setDefault_typeList(ColumnTypes); }

void New_DB_W::on_CreateButton_clicked()
{
    if(ui->BD_Name->text().isNull()){WarninBox.warning(0,"Attention!","Enter the DB name! :}");}
    else if(ui->Tab_Name->text().isNull()){WarninBox.warning(0,"Attention!","Enter the Tab name! :}");}
    else if(ColumnTypes.getTypeList().size() == 0){WarninBox.warning(0,"Attention!","Collumn types is empty! :(");}
    else
    {
        query_DB +="CREATE TABLE " + ui->Tab_Name->text() +" (ID INTEGER PRIMARY KEY AUTOINCREMENT, ";

        auto Vec = ColumnTypes.getTypeList();
        for(int i = 0; i < Vec.size(); ++i)
        {
            query_DB += Vec[i].name + " " + Vec[i].type;
            if(i != (Vec.size()-1)){query_DB += ", ";}
            else query_DB += ");";
        }

        if(CreateDB_F)
            emit signal_NewBD_Ok(ui->BD_Name->text(), ui->Tab_Name->text(), query_DB, ui->BD_Pass->text());
        else
            emit signal_NewTab_Ok(ui->Tab_Name->text(), query_DB);

        this->close();
    }
}

