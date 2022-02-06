#include "passwrite_w.h"
#include "ui_passwrite_w.h"

PassWrite_W::PassWrite_W(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PassWrite_W)
{
    ui->setupUi(this);
}

PassWrite_W::~PassWrite_W()
{
    delete ui;
}

void PassWrite_W::on_Pass_lineEdit_textChanged(const QString &arg1){ PassBD = arg1; }

void PassWrite_W::on_ButtonBox_accepted(){ emit signal_EnterPass_Ok(NameBD, PassBD); }

