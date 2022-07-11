QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Support/DB_Manager.cpp \
    Support/database.cpp \
    Support/editablesqlmodel.cpp \
    Support/typemodellist.cpp \
    Support/windows_manager.cpp \
    Window/EnterPassword_w.cpp \
    Window/explorer_w.cpp \
    Window/new_db_w.cpp \
    Window/start_w.cpp \
    main.cpp \
    mainwindow.cpp


HEADERS += \
    Support/DB_Manager.h \
    Support/database.h \
    Support/editablesqlmodel.h \
    Support/typemodellist.h \
    Support/windows_manager.h \
    Window/EnterPassword_w.h \
    Window/explorer_w.h \
    Window/new_db_w.h \
    Window/start_w.h \
    mainwindow.h

FORMS += \
    Window/EnterPassword_w.ui \
    Window/explorer_w.ui \
    Window/new_db_w.ui \
    Window/start_w.ui \
    mainwindow.ui

win32 {
  LIBS += "C:\Program Files (x86)\Windows Kits\10\Lib\10.0.19041.0\um\x64\User32.Lib"
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
