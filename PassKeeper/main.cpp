#include <QApplication>
#include <QPluginLoader>
#include <QLibraryInfo>

#include"Support/DB_Manager.h"
#include"Support/windows_manager.h"

int main(int argc, char *argv[])
{
    QPluginLoader loader;
    if(QLibraryInfo::isDebugBuild()) loader.setFileName("sqldrivers/sqlitecipher(d)");
    else loader.setFileName("sqldrivers/sqlitecipher(r)");

    QApplication a(argc, argv);

    DB_Manager      *DB_MG;
    DB_MG = new DB_Manager;

    Windows_Manager Wins_MG(DB_MG);

    Wins_MG.StartDebug("C:/Users/HellNout/Downloads/QtProjects/PassKeeper/build-Debug/Test.db",
                       "132435wer");
    //    Wins_MG.ShowStartW();

    return a.exec();
}
