/****************************************************************************
** Meta object code from reading C++ file 'item_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/item_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'item_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ItemModel_t {
    QByteArrayData data[10];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemModel_t qt_meta_stringdata_ItemModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ItemModel"
QT_MOC_LITERAL(1, 10, 7), // "getIcon"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "Item*"
QT_MOC_LITERAL(4, 25, 4), // "item"
QT_MOC_LITERAL(5, 30, 5), // "index"
QT_MOC_LITERAL(6, 36, 4), // "drop"
QT_MOC_LITERAL(7, 41, 4), // "QDir"
QT_MOC_LITERAL(8, 46, 4), // "path"
QT_MOC_LITERAL(9, 51, 6) // "parent"

    },
    "ItemModel\0getIcon\0\0Item*\0item\0index\0"
    "drop\0QDir\0path\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPersistentModelIndex,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QModelIndex,    8,    9,

       0        // eod
};

void ItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemModel *_t = static_cast<ItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getIcon((*reinterpret_cast< Item*(*)>(_a[1])),(*reinterpret_cast< const QPersistentModelIndex(*)>(_a[2]))); break;
        case 1: _t->drop((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemModel::*_t)(Item * , const QPersistentModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemModel::getIcon)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemModel::*_t)(const QDir & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemModel::drop)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ItemModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ItemModel.data,
      qt_meta_data_ItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemModel.stringdata0))
        return static_cast<void*>(const_cast< ItemModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int ItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void ItemModel::getIcon(Item * _t1, const QPersistentModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemModel::drop(const QDir & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
