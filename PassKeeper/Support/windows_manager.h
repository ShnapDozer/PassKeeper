#ifndef WINDOWS_MANAGER_H
#define WINDOWS_MANAGER_H

#include <QObject>
#include <QString>

#include"Support/DB_Manager.h"

#include "mainwindow.h"
#include "Window/start_w.h"
#include "Window/new_db_w.h"
#include "Window/explorer_w.h"
#include "Window/passwrite_w.h"
#include "Window/EnterPassword_w.h"

class Windows_Manager : public QObject
{
    Q_OBJECT
public:
    Windows_Manager(DB_Manager *DB_MG, QObject *parent = nullptr);

    void ShowStartW();
    void StartFile(QString File);
    void StartDebug(QString File, QString Password);

private://Funcs
     void InitWindows();
     void ConnectWindows(DB_Manager *DB_MG);

private:

//windows:
    Start_W         *start_W;
    New_DB_W        *nTab_W;
    Explorer_W      *Exp_W;
    EnterPassword_w *EntPass_W;
    MainWindow      *Main_W;
};

#endif // WINDOWS_MANAGER_H
