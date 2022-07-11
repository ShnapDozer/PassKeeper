#ifndef START_W_H
#define START_W_H

#include <QDialog>
#include <QMessageBox>

#include <QFileDialog>

#include"Support/database.h"

namespace Ui {
class Start_W;
}

class Start_W : public QDialog
{
    Q_OBJECT

public:
    explicit Start_W(QWidget *parent = nullptr);
    ~Start_W();

signals:
    void signal_CreateNewDB();
    void signal_OpenExist  ();

public slots:
    void slot_RunMain_W();

private slots:
    void on_Open_button_clicked();
    void on_Create_Button_clicked();

private:
    Ui::Start_W *ui;
};

#endif // START_W_H
