#include "explorer_w.h"
#include "ui_explorer_w.h"

Explorer_W::Explorer_W(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Explorer_W)
{
    ui->setupUi(this);
}

Explorer_W::~Explorer_W()
{
    delete ui;
}

void Explorer_W::slot_SW_OpenExist()
{
    this->show();

}

void Explorer_W::slot_RunMain_W()
{
    this->close();
}

void Explorer_W::on_Brows_Button_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, "Chose pass DB", "", "DB pass (*.db) ;; All Files (*.*)");
    ui->PathLine->setText(filePath);
}


void Explorer_W::on_PathLine_textChanged(const QString &arg1)
{
    filePath = arg1;
}


void Explorer_W::on_Open_Button_clicked()
{
    if(!filePath.isEmpty())
        emit signal_OpenW_Ok(filePath);
}

