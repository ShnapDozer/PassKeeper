#include "passwrite_w.h"
#include "ui_passwrite_w.h"

PassWrite_W::PassWrite_W(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PassWrite_W),
    cancel_F(false),
    accept_F(false),
    PassBD(QString())
{
    ui->setupUi(this);
}

PassWrite_W::~PassWrite_W()
{
    delete ui;
}

bool PassWrite_W::enterPass(std::shared_ptr <Database> DB)
{
    accept_F = false;

    this->show();
    this->exec();

    while(!DB->isOpen() && !cancel_F)
    {
        if(accept_F)
        {
            DB->setPassword(PassBD);
            if(DB->OpenDatabase())
                return true;
            else
                WarninBox.warning(0,"Attention!","Your password is wrong! :{");
            accept_F = false;
        }

    }

    this->close();
    return false;

}

void PassWrite_W::on_Pass_lineEdit_textChanged(const QString &arg1){ PassBD = arg1; }

void PassWrite_W::on_ButtonBox_accepted(){ accept_F = true; }

void PassWrite_W::on_ButtonBox_rejected(){ cancel_F = true; }


