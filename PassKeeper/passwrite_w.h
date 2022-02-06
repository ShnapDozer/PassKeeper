#ifndef PASSWRITE_W_H
#define PASSWRITE_W_H

#include <QDialog>

namespace Ui {
class PassWrite_W;
}

class PassWrite_W : public QDialog
{
    Q_OBJECT

public:
    explicit PassWrite_W(QWidget *parent = nullptr);
    ~PassWrite_W();

    void setNameDB(QString Name){ NameBD = Name; }

signals:
    void signal_EnterPass_Ok(QString Name, QString Pass);

private slots:
    void on_Pass_lineEdit_textChanged(const QString &arg1);

    void on_ButtonBox_accepted();

private:
    Ui::PassWrite_W *ui;

    QString NameBD, PassBD;
};

#endif // PASSWRITE_W_H
