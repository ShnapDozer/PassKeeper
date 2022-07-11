/****************************************************************************
** Meta object code from reading C++ file 'DB_Manager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PassKeeper/Support/DB_Manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DB_Manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DB_Manager_t {
    const uint offsetsAndSize[32];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DB_Manager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DB_Manager_t qt_meta_stringdata_DB_Manager = {
    {
QT_MOC_LITERAL(0, 10), // "DB_Manager"
QT_MOC_LITERAL(11, 17), // "signal_BDisCreate"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 17), // "EditableSqlModel*"
QT_MOC_LITERAL(48, 5), // "Model"
QT_MOC_LITERAL(54, 18), // "signal_TabisCreate"
QT_MOC_LITERAL(73, 14), // "signal_getPass"
QT_MOC_LITERAL(88, 13), // "slot_NewBD_Ok"
QT_MOC_LITERAL(102, 4), // "file"
QT_MOC_LITERAL(107, 7), // "NameTab"
QT_MOC_LITERAL(115, 8), // "TabQuery"
QT_MOC_LITERAL(124, 4), // "Pass"
QT_MOC_LITERAL(129, 14), // "slot_NewTab_Ok"
QT_MOC_LITERAL(144, 13), // "slot_OpenW_Ok"
QT_MOC_LITERAL(158, 4), // "Path"
QT_MOC_LITERAL(163, 15) // "slot_getPass_Ok"

    },
    "DB_Manager\0signal_BDisCreate\0\0"
    "EditableSqlModel*\0Model\0signal_TabisCreate\0"
    "signal_getPass\0slot_NewBD_Ok\0file\0"
    "NameTab\0TabQuery\0Pass\0slot_NewTab_Ok\0"
    "slot_OpenW_Ok\0Path\0slot_getPass_Ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DB_Manager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    0,   59,    2, 0x06,    3 /* Public */,
       6,    0,   60,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    4,   61,    2, 0x0a,    5 /* Public */,
      12,    2,   70,    2, 0x0a,   10 /* Public */,
      13,    1,   75,    2, 0x0a,   13 /* Public */,
      15,    1,   78,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void DB_Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DB_Manager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_BDisCreate((*reinterpret_cast< EditableSqlModel*(*)>(_a[1]))); break;
        case 1: _t->signal_TabisCreate(); break;
        case 2: _t->signal_getPass(); break;
        case 3: _t->slot_NewBD_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->slot_NewTab_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->slot_OpenW_Ok((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slot_getPass_Ok((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
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
            using _t = void (DB_Manager::*)(EditableSqlModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DB_Manager::signal_BDisCreate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DB_Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DB_Manager::signal_TabisCreate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DB_Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DB_Manager::signal_getPass)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DB_Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DB_Manager.offsetsAndSize,
    qt_meta_data_DB_Manager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DB_Manager_t
, QtPrivate::TypeAndForceComplete<DB_Manager, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<EditableSqlModel *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *DB_Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DB_Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DB_Manager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DB_Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DB_Manager::signal_BDisCreate(EditableSqlModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DB_Manager::signal_TabisCreate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DB_Manager::signal_getPass()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
