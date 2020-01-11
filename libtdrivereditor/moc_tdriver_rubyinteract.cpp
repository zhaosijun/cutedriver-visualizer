/****************************************************************************
** Meta object code from reading C++ file 'tdriver_rubyinteract.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_rubyinteract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_rubyinteract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverRubyInteract_t {
    QByteArrayData data[25];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverRubyInteract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverRubyInteract_t qt_meta_stringdata_TDriverRubyInteract = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TDriverRubyInteract"
QT_MOC_LITERAL(1, 20, 16), // "completionResult"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "client"
QT_MOC_LITERAL(4, 45, 9), // "statement"
QT_MOC_LITERAL(5, 55, 6), // "result"
QT_MOC_LITERAL(6, 62, 15), // "completionError"
QT_MOC_LITERAL(7, 78, 16), // "evaluationResult"
QT_MOC_LITERAL(8, 95, 15), // "evaluationError"
QT_MOC_LITERAL(9, 111, 16), // "requestNextQuery"
QT_MOC_LITERAL(10, 128, 15), // "resetQueryQueue"
QT_MOC_LITERAL(11, 144, 11), // "resetScript"
QT_MOC_LITERAL(12, 156, 12), // "rubyIsOnline"
QT_MOC_LITERAL(13, 169, 13), // "sendNextQuery"
QT_MOC_LITERAL(14, 183, 16), // "queryCompletions"
QT_MOC_LITERAL(15, 200, 13), // "evalStatement"
QT_MOC_LITERAL(16, 214, 11), // "procStarted"
QT_MOC_LITERAL(17, 226, 10), // "rbiMessage"
QT_MOC_LITERAL(18, 237, 6), // "seqNum"
QT_MOC_LITERAL(19, 244, 4), // "name"
QT_MOC_LITERAL(20, 249, 9), // "BAListMap"
QT_MOC_LITERAL(21, 259, 7), // "message"
QT_MOC_LITERAL(22, 267, 7), // "rbiText"
QT_MOC_LITERAL(23, 275, 4), // "fnum"
QT_MOC_LITERAL(24, 280, 4) // "text"

    },
    "TDriverRubyInteract\0completionResult\0"
    "\0client\0statement\0result\0completionError\0"
    "evaluationResult\0evaluationError\0"
    "requestNextQuery\0resetQueryQueue\0"
    "resetScript\0rubyIsOnline\0sendNextQuery\0"
    "queryCompletions\0evalStatement\0"
    "procStarted\0rbiMessage\0seqNum\0name\0"
    "BAListMap\0message\0rbiText\0fnum\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverRubyInteract[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x06 /* Public */,
       6,    3,   91,    2, 0x06 /* Public */,
       7,    3,   98,    2, 0x06 /* Public */,
       8,    3,  105,    2, 0x06 /* Public */,
       9,    0,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  113,    2, 0x0a /* Public */,
      11,    0,  114,    2, 0x0a /* Public */,
      12,    0,  115,    2, 0x0a /* Public */,
      13,    0,  116,    2, 0x0a /* Public */,
      14,    1,  117,    2, 0x0a /* Public */,
      15,    1,  120,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x09 /* Protected */,
      17,    3,  124,    2, 0x09 /* Protected */,
      22,    3,  131,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,    3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QByteArray,    4,
    QMetaType::Bool, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray, 0x80000000 | 20,   18,   19,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::QByteArray,   23,   18,   24,

       0        // eod
};

void TDriverRubyInteract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverRubyInteract *_t = static_cast<TDriverRubyInteract *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completionResult((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 1: _t->completionError((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 2: _t->evaluationResult((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 3: _t->evaluationError((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 4: _t->requestNextQuery(); break;
        case 5: _t->resetQueryQueue(); break;
        case 6: _t->resetScript(); break;
        case 7: _t->rubyIsOnline(); break;
        case 8: { bool _r = _t->sendNextQuery();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->queryCompletions((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->evalStatement((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->procStarted(); break;
        case 12: _t->rbiMessage((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< BAListMap(*)>(_a[3]))); break;
        case 13: _t->rbiText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverRubyInteract::*_t)(QObject * , QByteArray , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRubyInteract::completionResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverRubyInteract::*_t)(QObject * , QByteArray , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRubyInteract::completionError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverRubyInteract::*_t)(QObject * , QByteArray , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRubyInteract::evaluationResult)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverRubyInteract::*_t)(QObject * , QByteArray , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRubyInteract::evaluationError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TDriverRubyInteract::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRubyInteract::requestNextQuery)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject TDriverRubyInteract::staticMetaObject = {
    { &TDriverRunConsole::staticMetaObject, qt_meta_stringdata_TDriverRubyInteract.data,
      qt_meta_data_TDriverRubyInteract,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverRubyInteract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverRubyInteract::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverRubyInteract.stringdata0))
        return static_cast<void*>(const_cast< TDriverRubyInteract*>(this));
    return TDriverRunConsole::qt_metacast(_clname);
}

int TDriverRubyInteract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TDriverRunConsole::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TDriverRubyInteract::completionResult(QObject * _t1, QByteArray _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDriverRubyInteract::completionError(QObject * _t1, QByteArray _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TDriverRubyInteract::evaluationResult(QObject * _t1, QByteArray _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TDriverRubyInteract::evaluationError(QObject * _t1, QByteArray _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TDriverRubyInteract::requestNextQuery()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
