/****************************************************************************
** Meta object code from reading C++ file 'icon_cache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/icon_cache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon_cache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IconCache_t {
    QByteArrayData data[8];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IconCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IconCache_t qt_meta_stringdata_IconCache = {
    {
QT_MOC_LITERAL(0, 0, 9), // "IconCache"
QT_MOC_LITERAL(1, 10, 9), // "iconReady"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "Item*"
QT_MOC_LITERAL(4, 27, 4), // "item"
QT_MOC_LITERAL(5, 32, 6), // "parent"
QT_MOC_LITERAL(6, 39, 4), // "icon"
QT_MOC_LITERAL(7, 44, 7) // "getIcon"

    },
    "IconCache\0iconReady\0\0Item*\0item\0parent\0"
    "icon\0getIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IconCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPersistentModelIndex, QMetaType::QIcon,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPersistentModelIndex,    4,    5,

       0        // eod
};

void IconCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IconCache *_t = static_cast<IconCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconReady((*reinterpret_cast< Item*(*)>(_a[1])),(*reinterpret_cast< const QPersistentModelIndex(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 1: _t->getIcon((*reinterpret_cast< Item*(*)>(_a[1])),(*reinterpret_cast< const QPersistentModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IconCache::*_t)(Item * , const QPersistentModelIndex & , const QIcon & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IconCache::iconReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IconCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IconCache.data,
      qt_meta_data_IconCache,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IconCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconCache::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IconCache.stringdata0))
        return static_cast<void*>(const_cast< IconCache*>(this));
    return QObject::qt_metacast(_clname);
}

int IconCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IconCache::iconReady(Item * _t1, const QPersistentModelIndex & _t2, const QIcon & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
