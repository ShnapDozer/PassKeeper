#ifndef ENTERPASSWORD_W_H
#define ENTERPASSWORD_W_H

#include <QDialog>

namespace Ui {
class EnterPassword_w;
}

class EnterPassword_w : public QDialog
{
    Q_OBJECT

public:
    explicit EnterPassword_w(QWidget *parent = nullptr);
    ~EnterPassword_w();

signals:
    void signal_getPass_Ok(QString Pass);

public slots:
    void slot_getPass();
    void slot_RunMain_W();

private slots:
    void on_Ok_clicked();

private:
    Ui::EnterPassword_w *ui;
};

#endif // ENTERPASSWORD_W_H
