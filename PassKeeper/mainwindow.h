#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <memory>

#include <QMainWindow>

#include "database.h"
#include "new_db_w.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_MW_Seach_clicked();

    //Window slots:
    void slot_NewTable_Ok(QString Name, QString TableQuery);

private:
    Ui::MainWindow *ui;

    New_DB_W *newTable_W;

    std::shared_ptr <DataBase> DB;
};
#endif // MAINWINDOW_H
