#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <memory>

#include <QApplication>
#include <QMainWindow>
#include <QClipboard>
#include <QDebug>

#include "Support/database.h"
#include "Support/editablesqlmodel.h"
#include "Support/DB_Manager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void UI_Init();

signals:
    void signal_RunMain_W();
    void signal_MW_CreateNewTab(QString NameDB, QString PassDB);

public slots:
    void slot_BDisCreate(EditableSqlModel *Model);
    void slot_TabisCreate();

private slots:

    void on_AddPass_Button_clicked();

    void on_AddTab_Button_clicked();

    void on_DelR_Button_clicked();

    void on_MainTable_pressed(const QModelIndex &index);

    void on_Seach_line_textChanged(const QString &arg1);

    void on_TabBar_currentChanged(int index);

private:
    QAbstractItemModel* getModel();
    void updateTabBar(std::vector<QString> Names);

    int getID(QModelIndex index);

private:
    Ui::MainWindow *ui;
    QClipboard *WinClipBoard;

    EditableSqlModel *EditModel;

    int PressID;
    QModelIndex PressIndex;

};

#endif // MAINWINDOW_H
