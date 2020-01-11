/****************************************************************************
** Meta object code from reading C++ file 'tdriver_runconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_runconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_runconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverRunConsole_t {
    QByteArrayData data[27];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverRunConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverRunConsole_t qt_meta_stringdata_TDriverRunConsole = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TDriverRunConsole"
QT_MOC_LITERAL(1, 18, 18), // "requestRemoteDebug"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "host"
QT_MOC_LITERAL(4, 43, 5), // "dport"
QT_MOC_LITERAL(5, 49, 5), // "cport"
QT_MOC_LITERAL(6, 55, 18), // "TDriverRunConsole*"
QT_MOC_LITERAL(7, 74, 16), // "procConsoleOwner"
QT_MOC_LITERAL(8, 91, 20), // "lineForRdebugConsole"
QT_MOC_LITERAL(9, 112, 16), // "needDebugConsole"
QT_MOC_LITERAL(10, 129, 9), // "runSignal"
QT_MOC_LITERAL(11, 139, 12), // "runningState"
QT_MOC_LITERAL(12, 152, 5), // "clear"
QT_MOC_LITERAL(13, 158, 7), // "runFile"
QT_MOC_LITERAL(14, 166, 8), // "fileName"
QT_MOC_LITERAL(15, 175, 33), // "TDriverRunConsole::RunRequest..."
QT_MOC_LITERAL(16, 209, 13), // "rdebugStarted"
QT_MOC_LITERAL(17, 223, 11), // "rdebugReady"
QT_MOC_LITERAL(18, 235, 19), // "setStdStreamsHidden"
QT_MOC_LITERAL(19, 255, 5), // "state"
QT_MOC_LITERAL(20, 261, 10), // "endProcess"
QT_MOC_LITERAL(21, 272, 9), // "procError"
QT_MOC_LITERAL(22, 282, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(23, 305, 12), // "procFinished"
QT_MOC_LITERAL(24, 318, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(25, 339, 11), // "procStarted"
QT_MOC_LITERAL(26, 351, 12) // "readProcText"

    },
    "TDriverRunConsole\0requestRemoteDebug\0"
    "\0host\0dport\0cport\0TDriverRunConsole*\0"
    "procConsoleOwner\0lineForRdebugConsole\0"
    "needDebugConsole\0runSignal\0runningState\0"
    "clear\0runFile\0fileName\0"
    "TDriverRunConsole::RunRequestType\0"
    "rdebugStarted\0rdebugReady\0setStdStreamsHidden\0"
    "state\0endProcess\0procError\0"
    "QProcess::ProcessError\0procFinished\0"
    "QProcess::ExitStatus\0procStarted\0"
    "readProcText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverRunConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   89,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      11,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  110,    2, 0x0a /* Public */,
      13,    2,  111,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    0,  117,    2, 0x0a /* Public */,
      18,    1,  118,    2, 0x0a /* Public */,
      20,    0,  121,    2, 0x0a /* Public */,
      21,    1,  122,    2, 0x09 /* Protected */,
      23,    2,  125,    2, 0x09 /* Protected */,
      25,    0,  130,    2, 0x09 /* Protected */,
      26,    0,  131,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 15,   14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 24,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TDriverRunConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverRunConsole *_t = static_cast<TDriverRunConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestRemoteDebug((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< TDriverRunConsole*(*)>(_a[4]))); break;
        case 1: _t->lineForRdebugConsole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->needDebugConsole((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->runSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->runningState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: { bool _r = _t->runFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TDriverRunConsole::RunRequestType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->rdebugStarted(); break;
        case 8: _t->rdebugReady(); break;
        case 9: _t->setStdStreamsHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->endProcess(); break;
        case 11: _t->procError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 12: _t->procFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 13: _t->procStarted(); break;
        case 14: _t->readProcText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TDriverRunConsole* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverRunConsole::*_t)(QString , quint16 , quint16 , TDriverRunConsole * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRunConsole::requestRemoteDebug)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverRunConsole::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRunConsole::lineForRdebugConsole)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverRunConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRunConsole::needDebugConsole)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverRunConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRunConsole::runSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TDriverRunConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverRunConsole::runningState)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject TDriverRunConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TDriverRunConsole.data,
      qt_meta_data_TDriverRunConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverRunConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverRunConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverRunConsole.stringdata0))
        return static_cast<void*>(const_cast< TDriverRunConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int TDriverRunConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TDriverRunConsole::requestRemoteDebug(QString _t1, quint16 _t2, quint16 _t3, TDriverRunConsole * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDriverRunConsole::lineForRdebugConsole(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TDriverRunConsole::needDebugConsole(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TDriverRunConsole::runSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TDriverRunConsole::runningState(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
