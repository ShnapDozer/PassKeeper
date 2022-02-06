#include "mainwindow.h"

#include <QApplication>
#include <QPluginLoader>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QPluginLoader loader;

    if(QLibraryInfo::isDebugBuild()) loader.setFileName("sqldrivers/sqlitecipher(d)");
    else loader.setFileName("sqldrivers/sqlitecipher(r)");

    QApplication a(argc, argv);

    MainWindow w(argc, argv);
    w.show();

    return a.exec();
}
