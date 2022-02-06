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
