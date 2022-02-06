#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <memory>

#include <QMainWindow>

#include "database.h"

#include "start_w.h"
#include "new_db_w.h"
#include "explorer_w.h"
#include "passwrite_w.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int argc, char *argv[], QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_MW_Seach_clicked();

    //Window slots:
    void slot_NewTable_Ok(QString NameDB, QString NameTab, QString TableQuery, QString PassDB);
    void slot_EnterPass_Ok(QString NameDB, QString PassDB);

private:
    Ui::MainWindow *ui;

    Start_W *start_W;
    New_DB_W *newTable_W;
    Explorer_W *OpenExist_W;
    PassWrite_W *EnterPass_W;

    std::shared_ptr <DataBase> DB;
};
#endif // MAINWINDOW_H
