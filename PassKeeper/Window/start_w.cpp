#include "start_w.h"
#include "ui_start_w.h"

Start_W::Start_W(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Start_W)
{
    ui->setupUi(this);
}

Start_W::~Start_W()
{
    delete ui;
}

void Start_W::slot_RunMain_W()
{
    this->close();
}

void Start_W::on_Open_button_clicked()
{
    emit signal_OpenExist();
}

void Start_W::on_Create_Button_clicked()
{
    emit signal_CreateNewDB();
    this->close();
}

