/****************************************************************************
** Meta object code from reading C++ file 'start_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PassKeeper/Window/start_w.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Start_W_t {
    const uint offsetsAndSize[14];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Start_W_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Start_W_t qt_meta_stringdata_Start_W = {
    {
QT_MOC_LITERAL(0, 7), // "Start_W"
QT_MOC_LITERAL(8, 18), // "signal_CreateNewDB"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 16), // "signal_OpenExist"
QT_MOC_LITERAL(45, 14), // "slot_RunMain_W"
QT_MOC_LITERAL(60, 22), // "on_Open_button_clicked"
QT_MOC_LITERAL(83, 24) // "on_Create_Button_clicked"

    },
    "Start_W\0signal_CreateNewDB\0\0"
    "signal_OpenExist\0slot_RunMain_W\0"
    "on_Open_button_clicked\0on_Create_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Start_W[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Start_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Start_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_CreateNewDB(); break;
        case 1: _t->signal_OpenExist(); break;
        case 2: _t->slot_RunMain_W(); break;
        case 3: _t->on_Open_button_clicked(); break;
        case 4: _t->on_Create_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Start_W::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Start_W::signal_CreateNewDB)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Start_W::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Start_W::signal_OpenExist)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Start_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Start_W.offsetsAndSize,
    qt_meta_data_Start_W,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Start_W_t
, QtPrivate::TypeAndForceComplete<Start_W, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Start_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Start_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Start_W.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Start_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Start_W::signal_CreateNewDB()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Start_W::signal_OpenExist()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
