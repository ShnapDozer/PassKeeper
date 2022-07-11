#include "EnterPassword_w.h"
#include "ui_EnterPassword_w.h"

EnterPassword_w::EnterPassword_w(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterPassword_w)
{
    ui->setupUi(this);
    ui->PassEnter->setEchoMode(QLineEdit::Password);
}

EnterPassword_w::~EnterPassword_w()
{
    delete ui;
}

void EnterPassword_w::slot_getPass()
{
    this->show();
}

void EnterPassword_w::slot_RunMain_W()
{
    this->close();
}

void EnterPassword_w::on_Ok_clicked()
{
    emit signal_getPass_Ok(ui->PassEnter->text());
}

