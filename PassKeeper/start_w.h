#ifndef START_W_H
#define START_W_H

#include <QDialog>
#include <QMessageBox>

#include <QFileDialog>

#include "new_db_w.h"
#include "passwrite_w.h"

namespace Ui {
class Start_W;
}

class Start_W : public QDialog
{
    Q_OBJECT

public:
    explicit Start_W( New_DB_W *NewTabW, PassWrite_W *PassW, QWidget *parent = nullptr);
    ~Start_W();

signals:
    void signal_CreateNewDB(QString Name, QString Password);
    void signal_OpenExist(QString path);

private slots:
    void on_Open_button_clicked();

    void on_Create_Button_clicked();

    void on_NameNewDB_TexLine_textChanged(const QString &arg1);

    void on_PassNewDB_TexLine_textChanged(const QString &arg1);

    void on_Brows_Button_clicked();

private:
    Ui::Start_W *ui;

    New_DB_W *newTable_W;
    PassWrite_W *EnterPass_W;

    QString NameDB, NameExDB, PassDB = QString();
    QMessageBox WarninBox;
};

#endif // START_W_H
