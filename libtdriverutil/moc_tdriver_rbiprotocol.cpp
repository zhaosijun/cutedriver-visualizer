/****************************************************************************
** Meta object code from reading C++ file 'tdriver_rbiprotocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_rbiprotocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_rbiprotocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverRbiProtocol_t {
    QByteArrayData data[22];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverRbiProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverRbiProtocol_t qt_meta_stringdata_TDriverRbiProtocol = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TDriverRbiProtocol"
QT_MOC_LITERAL(1, 19, 14), // "writeDataReady"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "data"
QT_MOC_LITERAL(4, 40, 15), // "messageReceived"
QT_MOC_LITERAL(5, 56, 6), // "seqNum"
QT_MOC_LITERAL(6, 63, 4), // "name"
QT_MOC_LITERAL(7, 68, 9), // "BAListMap"
QT_MOC_LITERAL(8, 78, 7), // "message"
QT_MOC_LITERAL(9, 86, 13), // "helloReceived"
QT_MOC_LITERAL(10, 100, 16), // "gotDisconnection"
QT_MOC_LITERAL(11, 117, 9), // "connected"
QT_MOC_LITERAL(12, 127, 11), // "readyToRead"
QT_MOC_LITERAL(13, 139, 12), // "bytesWritten"
QT_MOC_LITERAL(14, 152, 5), // "bytes"
QT_MOC_LITERAL(15, 158, 12), // "disconnected"
QT_MOC_LITERAL(16, 171, 9), // "connError"
QT_MOC_LITERAL(17, 181, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(18, 210, 20), // "sendStringListMapMsg"
QT_MOC_LITERAL(19, 231, 3), // "map"
QT_MOC_LITERAL(20, 235, 15), // "startNewMessage"
QT_MOC_LITERAL(21, 251, 12) // "addWriteData"

    },
    "TDriverRbiProtocol\0writeDataReady\0\0"
    "data\0messageReceived\0seqNum\0name\0"
    "BAListMap\0message\0helloReceived\0"
    "gotDisconnection\0connected\0readyToRead\0"
    "bytesWritten\0bytes\0disconnected\0"
    "connError\0QAbstractSocket::SocketError\0"
    "sendStringListMapMsg\0map\0startNewMessage\0"
    "addWriteData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverRbiProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    3,   82,    2, 0x06 /* Public */,
       9,    0,   89,    2, 0x06 /* Public */,
      10,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   91,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,
      18,    3,  100,    2, 0x0a /* Public */,
      18,    2,  107,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::UInt, QMetaType::QByteArray, 0x80000000 | 7, QMetaType::UInt,    6,   19,    5,
    QMetaType::UInt, QMetaType::QByteArray, 0x80000000 | 7,    6,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void TDriverRbiProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverRbiProtocol *_t = static_cast<TDriverRbiProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeDataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< BAListMap(*)>(_a[3]))); break;
        case 2: _t->helloReceived(); break;
        case 3: _t->gotDisconnection(); break;
        case 4: _t->connected(); break;
        case 5: _t->readyToRead(); break;
        case 6: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->disconnected(); break;
        case 8: _t->connError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: { quint32 _r = _t->sendStringListMapMsg((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const BAListMap(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 10: { quint32 _r = _t->sendStringListMapMsg((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const BAListMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = _r; }  break;
        case 11: _t->startNewMessage(); break;
        case 12: _t->addWriteData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverRbiProtocol::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRbiProtocol::writeDataReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverRbiProtocol::*_t)(quint32 , QByteArray , BAListMap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRbiProtocol::messageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverRbiProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRbiProtocol::helloReceived)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverRbiProtocol::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRbiProtocol::gotDisconnection)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject TDriverRbiProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TDriverRbiProtocol.data,
      qt_meta_data_TDriverRbiProtocol,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverRbiProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverRbiProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverRbiProtocol.stringdata0))
        return static_cast<void*>(const_cast< TDriverRbiProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int TDriverRbiProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void TDriverRbiProtocol::writeDataReady(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDriverRbiProtocol::messageReceived(quint32 _t1, QByteArray _t2, BAListMap _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TDriverRbiProtocol::helloReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TDriverRbiProtocol::gotDisconnection()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
