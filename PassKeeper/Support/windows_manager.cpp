#include "windows_manager.h"

Windows_Manager::Windows_Manager(DB_Manager *DB_MG, QObject *parent)
    : QObject{parent}
{
    InitWindows();
    ConnectWindows(DB_MG);
}

void Windows_Manager::InitWindows()
{
    Main_W      = new MainWindow;
    start_W     = new Start_W;
    nTab_W      = new New_DB_W;
    Exp_W       = new Explorer_W;
    EntPass_W   = new EnterPassword_w;
}

void Windows_Manager::ConnectWindows(DB_Manager *DB_MG)
{
        connect(start_W, SIGNAL(signal_OpenExist()), Exp_W, SLOT(slot_SW_OpenExist()));
        connect(start_W, SIGNAL(signal_CreateNewDB()), nTab_W, SLOT(slot_SW_CreateNew()));
        connect(nTab_W, SIGNAL(signal_NewBD_Ok(QString, QString, QString, QString)),
                DB_MG, SLOT(slot_NewBD_Ok(QString, QString, QString, QString)));
        connect(nTab_W, SIGNAL(signal_NewTab_Ok(QString, QString)),
                DB_MG, SLOT(slot_NewTab_Ok(QString, QString)));
        connect(Exp_W, SIGNAL(signal_OpenW_Ok(QString)),DB_MG, SLOT(slot_OpenW_Ok(QString)));
        connect(DB_MG, SIGNAL(signal_getPass()),EntPass_W, SLOT(slot_getPass()));
        connect(EntPass_W, SIGNAL(signal_getPass_Ok(QString)),DB_MG, SLOT(slot_getPass_Ok(QString)));
        connect(DB_MG, SIGNAL(signal_BDisCreate(EditableSqlModel*)), Main_W, SLOT(slot_BDisCreate(EditableSqlModel*)));
        connect(DB_MG, SIGNAL(signal_TabisCreate()), Main_W, SLOT(slot_TabisCreate()));

        connect(Main_W, SIGNAL(signal_RunMain_W()), start_W, SLOT(slot_RunMain_W()));
        connect(Main_W, SIGNAL(signal_RunMain_W()), nTab_W, SLOT(slot_RunMain_W()));
        connect(Main_W, SIGNAL(signal_RunMain_W()), Exp_W, SLOT(slot_RunMain_W()));
        connect(Main_W, SIGNAL(signal_RunMain_W()), EntPass_W, SLOT(slot_RunMain_W()));

        connect(Main_W, SIGNAL(signal_MW_CreateNewTab(QString, QString)),
                nTab_W, SLOT(slot_MW_CreateNewTab(QString, QString)));
}

void Windows_Manager::ShowStartW()
{
    start_W->show();
    start_W->exec();
}

void Windows_Manager::StartDebug(QString File, QString Password)
{
    emit Exp_W->signal_OpenW_Ok(File);
    emit EntPass_W->signal_getPass_Ok(Password);
}
