QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    explorer_w.cpp \
    main.cpp \
    mainwindow.cpp \
    new_db_w.cpp \
    passwrite_w.cpp \
    start_w.cpp \
    typemodellist.cpp

HEADERS += \
    database.h \
    explorer_w.h \
    mainwindow.h \
    new_db_w.h \
    passwrite_w.h \
    start_w.h \
    typemodellist.h

FORMS += \
    explorer_w.ui \
    mainwindow.ui \
    new_db_w.ui \
    passwrite_w.ui \
    start_w.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
