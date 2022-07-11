/****************************************************************************
** Meta object code from reading C++ file 'explorer_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PassKeeper/Window/explorer_w.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'explorer_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Explorer_W_t {
    const uint offsetsAndSize[20];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Explorer_W_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Explorer_W_t qt_meta_stringdata_Explorer_W = {
    {
QT_MOC_LITERAL(0, 10), // "Explorer_W"
QT_MOC_LITERAL(11, 15), // "signal_OpenW_Ok"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 4), // "Path"
QT_MOC_LITERAL(33, 17), // "slot_SW_OpenExist"
QT_MOC_LITERAL(51, 14), // "slot_RunMain_W"
QT_MOC_LITERAL(66, 23), // "on_Brows_Button_clicked"
QT_MOC_LITERAL(90, 23), // "on_PathLine_textChanged"
QT_MOC_LITERAL(114, 4), // "arg1"
QT_MOC_LITERAL(119, 22) // "on_Open_Button_clicked"

    },
    "Explorer_W\0signal_OpenW_Ok\0\0Path\0"
    "slot_SW_OpenExist\0slot_RunMain_W\0"
    "on_Brows_Button_clicked\0on_PathLine_textChanged\0"
    "arg1\0on_Open_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Explorer_W[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   53,    2, 0x0a,    3 /* Public */,
       5,    0,   54,    2, 0x0a,    4 /* Public */,
       6,    0,   55,    2, 0x08,    5 /* Private */,
       7,    1,   56,    2, 0x08,    6 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void Explorer_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Explorer_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_OpenW_Ok((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slot_SW_OpenExist(); break;
        case 2: _t->slot_RunMain_W(); break;
        case 3: _t->on_Brows_Button_clicked(); break;
        case 4: _t->on_PathLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Open_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Explorer_W::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Explorer_W::signal_OpenW_Ok)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Explorer_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Explorer_W.offsetsAndSize,
    qt_meta_data_Explorer_W,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Explorer_W_t
, QtPrivate::TypeAndForceComplete<Explorer_W, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Explorer_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Explorer_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Explorer_W.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Explorer_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Explorer_W::signal_OpenW_Ok(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
