/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PassKeeper/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 16), // "signal_RunMain_W"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 22), // "signal_MW_CreateNewTab"
QT_MOC_LITERAL(52, 6), // "NameDB"
QT_MOC_LITERAL(59, 6), // "PassDB"
QT_MOC_LITERAL(66, 15), // "slot_BDisCreate"
QT_MOC_LITERAL(82, 17), // "EditableSqlModel*"
QT_MOC_LITERAL(100, 5), // "Model"
QT_MOC_LITERAL(106, 16), // "slot_TabisCreate"
QT_MOC_LITERAL(123, 25), // "on_AddPass_Button_clicked"
QT_MOC_LITERAL(149, 24), // "on_AddTab_Button_clicked"
QT_MOC_LITERAL(174, 22), // "on_DelR_Button_clicked"
QT_MOC_LITERAL(197, 20), // "on_MainTable_pressed"
QT_MOC_LITERAL(218, 11), // "QModelIndex"
QT_MOC_LITERAL(230, 5), // "index"
QT_MOC_LITERAL(236, 25), // "on_Seach_line_textChanged"
QT_MOC_LITERAL(262, 4), // "arg1"
QT_MOC_LITERAL(267, 24) // "on_TabBar_currentChanged"

    },
    "MainWindow\0signal_RunMain_W\0\0"
    "signal_MW_CreateNewTab\0NameDB\0PassDB\0"
    "slot_BDisCreate\0EditableSqlModel*\0"
    "Model\0slot_TabisCreate\0on_AddPass_Button_clicked\0"
    "on_AddTab_Button_clicked\0"
    "on_DelR_Button_clicked\0on_MainTable_pressed\0"
    "QModelIndex\0index\0on_Seach_line_textChanged\0"
    "arg1\0on_TabBar_currentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    2,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   80,    2, 0x0a,    5 /* Public */,
       9,    0,   83,    2, 0x0a,    7 /* Public */,
      10,    0,   84,    2, 0x08,    8 /* Private */,
      11,    0,   85,    2, 0x08,    9 /* Private */,
      12,    0,   86,    2, 0x08,   10 /* Private */,
      13,    1,   87,    2, 0x08,   11 /* Private */,
      16,    1,   90,    2, 0x08,   13 /* Private */,
      18,    1,   93,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_RunMain_W(); break;
        case 1: _t->signal_MW_CreateNewTab((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slot_BDisCreate((*reinterpret_cast< EditableSqlModel*(*)>(_a[1]))); break;
        case 3: _t->slot_TabisCreate(); break;
        case 4: _t->on_AddPass_Button_clicked(); break;
        case 5: _t->on_AddTab_Button_clicked(); break;
        case 6: _t->on_DelR_Button_clicked(); break;
        case 7: _t->on_MainTable_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_Seach_line_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_TabBar_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EditableSqlModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_RunMain_W)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_MW_CreateNewTab)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<EditableSqlModel *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_RunMain_W()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::signal_MW_CreateNewTab(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
