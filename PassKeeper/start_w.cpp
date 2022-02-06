#include "start_w.h"
#include "ui_start_w.h"

Start_W::Start_W(New_DB_W *NewTabW, PassWrite_W *PassW, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Start_W),
    newTable_W(NewTabW),
    EnterPass_W(PassW)
{
    ui->setupUi(this);
    ui->NameNewDB_TexLine->setPlaceholderText(QString("Enter name DB"));
    ui->PassNewDB_TexLine->setPlaceholderText(QString("Enter password DB"));
}

Start_W::~Start_W()
{
    delete ui;
}

void Start_W::on_Open_button_clicked()
{
    EnterPass_W->setNameDB(NameExDB);

    EnterPass_W->show();
    EnterPass_W->exec();
}

void Start_W::on_Create_Button_clicked()
{
    if(NameDB.isNull()){WarninBox.warning(0,"Attention!","Enter the file name! :}");}
    else
    {
        newTable_W->setDB_Name(NameDB);
        newTable_W->setDB_Password(PassDB);

        newTable_W->show();
        newTable_W->exec();
    }
}

void Start_W::on_NameNewDB_TexLine_textChanged(const QString &arg1){ NameDB = arg1; }

void Start_W::on_PassNewDB_TexLine_textChanged(const QString &arg1){ PassDB = arg1; }


void Start_W::on_Brows_Button_clicked()
{
    NameExDB = QFileDialog::getOpenFileName(this, "Open the database", "", "All files (*.*);; Acces db (*.accdb);; Database (*.db);");
    ui->Path_line->setText(NameExDB);
}

