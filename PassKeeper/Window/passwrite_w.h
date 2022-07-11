#ifndef PASSWRITE_W_H
#define PASSWRITE_W_H

#include <memory>

#include <QDialog>
#include <QMessageBox>

#include"Support/database.h"

namespace Ui {
class PassWrite_W;
}

class PassWrite_W : public QDialog
{
    Q_OBJECT

public:
    explicit PassWrite_W(QWidget *parent = nullptr);
    ~PassWrite_W();

    bool enterPass(std::shared_ptr <Database> DB);

private slots:
    void on_Pass_lineEdit_textChanged(const QString &arg1);

    void on_ButtonBox_accepted();

    void on_ButtonBox_rejected();

private:
    Ui::PassWrite_W *ui;
    QMessageBox WarninBox;

    bool cancel_F, accept_F;
    QString NameBD, PassBD;
};

#endif // PASSWRITE_W_H
