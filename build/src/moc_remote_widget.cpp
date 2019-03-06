/****************************************************************************
** Meta object code from reading C++ file 'remote_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/remote_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remote_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RemoteWidget_t {
    QByteArrayData data[11];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteWidget_t qt_meta_stringdata_RemoteWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RemoteWidget"
QT_MOC_LITERAL(1, 13, 11), // "addTransfer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "message"
QT_MOC_LITERAL(4, 34, 6), // "source"
QT_MOC_LITERAL(5, 41, 6), // "remote"
QT_MOC_LITERAL(6, 48, 4), // "args"
QT_MOC_LITERAL(7, 53, 8), // "addMount"
QT_MOC_LITERAL(8, 62, 6), // "folder"
QT_MOC_LITERAL(9, 69, 9), // "addStream"
QT_MOC_LITERAL(10, 79, 6) // "stream"

    },
    "RemoteWidget\0addTransfer\0\0message\0"
    "source\0remote\0args\0addMount\0folder\0"
    "addStream\0stream"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       7,    2,   38,    2, 0x06 /* Public */,
       9,    2,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   10,

       0        // eod
};

void RemoteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteWidget *_t = static_cast<RemoteWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addTransfer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4]))); break;
        case 1: _t->addMount((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->addStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemoteWidget::*_t)(const QString & , const QString & , const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWidget::addTransfer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RemoteWidget::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWidget::addMount)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RemoteWidget::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWidget::addStream)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RemoteWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RemoteWidget.data,
      qt_meta_data_RemoteWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteWidget.stringdata0))
        return static_cast<void*>(const_cast< RemoteWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RemoteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RemoteWidget::addTransfer(const QString & _t1, const QString & _t2, const QString & _t3, const QStringList & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemoteWidget::addMount(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RemoteWidget::addStream(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
