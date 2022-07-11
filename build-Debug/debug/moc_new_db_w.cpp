/****************************************************************************
** Meta object code from reading C++ file 'new_db_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PassKeeper/Window/new_db_w.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_db_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_New_DB_W_t {
    const uint offsetsAndSize[46];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_New_DB_W_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_New_DB_W_t qt_meta_stringdata_New_DB_W = {
    {
QT_MOC_LITERAL(0, 8), // "New_DB_W"
QT_MOC_LITERAL(9, 15), // "signal_NewBD_Ok"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 6), // "NameDB"
QT_MOC_LITERAL(33, 7), // "NameTab"
QT_MOC_LITERAL(41, 8), // "TabQuery"
QT_MOC_LITERAL(50, 4), // "Pass"
QT_MOC_LITERAL(55, 16), // "signal_NewTab_Ok"
QT_MOC_LITERAL(72, 17), // "slot_SW_CreateNew"
QT_MOC_LITERAL(90, 20), // "slot_MW_CreateNewTab"
QT_MOC_LITERAL(111, 6), // "PassDB"
QT_MOC_LITERAL(118, 14), // "slot_RunMain_W"
QT_MOC_LITERAL(133, 25), // "on_NameColumn_textChanged"
QT_MOC_LITERAL(159, 4), // "arg1"
QT_MOC_LITERAL(164, 32), // "on_TypeColumn_currentTextChanged"
QT_MOC_LITERAL(197, 20), // "on_ColumnsNT_clicked"
QT_MOC_LITERAL(218, 11), // "QModelIndex"
QT_MOC_LITERAL(230, 5), // "index"
QT_MOC_LITERAL(236, 24), // "on_TableName_textChanged"
QT_MOC_LITERAL(261, 20), // "on_AddButton_clicked"
QT_MOC_LITERAL(282, 23), // "on_DeleteButton_clicked"
QT_MOC_LITERAL(306, 24), // "on_DefaultButton_clicked"
QT_MOC_LITERAL(331, 23) // "on_CreateButton_clicked"

    },
    "New_DB_W\0signal_NewBD_Ok\0\0NameDB\0"
    "NameTab\0TabQuery\0Pass\0signal_NewTab_Ok\0"
    "slot_SW_CreateNew\0slot_MW_CreateNewTab\0"
    "PassDB\0slot_RunMain_W\0on_NameColumn_textChanged\0"
    "arg1\0on_TypeColumn_currentTextChanged\0"
    "on_ColumnsNT_clicked\0QModelIndex\0index\0"
    "on_TableName_textChanged\0on_AddButton_clicked\0"
    "on_DeleteButton_clicked\0"
    "on_DefaultButton_clicked\0"
    "on_CreateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_New_DB_W[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   92,    2, 0x06,    1 /* Public */,
       7,    2,  101,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  106,    2, 0x0a,    9 /* Public */,
       9,    2,  107,    2, 0x0a,   10 /* Public */,
      11,    0,  112,    2, 0x0a,   13 /* Public */,
      12,    1,  113,    2, 0x08,   14 /* Private */,
      14,    1,  116,    2, 0x08,   16 /* Private */,
      15,    1,  119,    2, 0x08,   18 /* Private */,
      18,    1,  122,    2, 0x08,   20 /* Private */,
      19,    0,  125,    2, 0x08,   22 /* Private */,
      20,    0,  126,    2, 0x08,   23 /* Private */,
      21,    0,  127,    2, 0x08,   24 /* Private */,
      22,    0,  128,    2, 0x08,   25 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void New_DB_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<New_DB_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_NewBD_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->signal_NewTab_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slot_SW_CreateNew(); break;
        case 3: _t->slot_MW_CreateNewTab((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->slot_RunMain_W(); break;
        case 5: _t->on_NameColumn_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_TypeColumn_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_ColumnsNT_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_TableName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_AddButton_clicked(); break;
        case 10: _t->on_DeleteButton_clicked(); break;
        case 11: _t->on_DefaultButton_clicked(); break;
        case 12: _t->on_CreateButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (New_DB_W::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&New_DB_W::signal_NewBD_Ok)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (New_DB_W::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&New_DB_W::signal_NewTab_Ok)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject New_DB_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_New_DB_W.offsetsAndSize,
    qt_meta_data_New_DB_W,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_New_DB_W_t
, QtPrivate::TypeAndForceComplete<New_DB_W, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *New_DB_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *New_DB_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_New_DB_W.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int New_DB_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void New_DB_W::signal_NewBD_Ok(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void New_DB_W::signal_NewTab_Ok(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
