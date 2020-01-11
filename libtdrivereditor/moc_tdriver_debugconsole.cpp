/****************************************************************************
** Meta object code from reading C++ file 'tdriver_debugconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_debugconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_debugconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverDebugConsole_t {
    QByteArrayData data[48];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverDebugConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverDebugConsole_t qt_meta_stringdata_TDriverDebugConsole = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TDriverDebugConsole"
QT_MOC_LITERAL(1, 20, 13), // "connectResult"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "requestDataSync"
QT_MOC_LITERAL(4, 51, 11), // "runStarting"
QT_MOC_LITERAL(5, 63, 8), // "fileName"
QT_MOC_LITERAL(6, 72, 7), // "lineNum"
QT_MOC_LITERAL(7, 80, 15), // "gotRemotePrompt"
QT_MOC_LITERAL(8, 96, 10), // "breakpoint"
QT_MOC_LITERAL(9, 107, 15), // "MEC::Breakpoint"
QT_MOC_LITERAL(10, 123, 11), // "breakpoints"
QT_MOC_LITERAL(11, 135, 22), // "QList<MEC::Breakpoint>"
QT_MOC_LITERAL(12, 158, 22), // "delegateContinueAction"
QT_MOC_LITERAL(13, 181, 5), // "clear"
QT_MOC_LITERAL(14, 187, 16), // "resetConnections"
QT_MOC_LITERAL(15, 204, 9), // "connectTo"
QT_MOC_LITERAL(16, 214, 4), // "host"
QT_MOC_LITERAL(17, 219, 5), // "dport"
QT_MOC_LITERAL(18, 225, 5), // "cport"
QT_MOC_LITERAL(19, 231, 18), // "TDriverRunConsole*"
QT_MOC_LITERAL(20, 250, 16), // "procConsoleOwner"
QT_MOC_LITERAL(21, 267, 21), // "resetProcConsoleOwner"
QT_MOC_LITERAL(22, 289, 10), // "setRunning"
QT_MOC_LITERAL(23, 300, 16), // "handleRemoteText"
QT_MOC_LITERAL(24, 317, 4), // "text"
QT_MOC_LITERAL(25, 322, 17), // "handleControlText"
QT_MOC_LITERAL(26, 340, 14), // "readRemoteText"
QT_MOC_LITERAL(27, 355, 15), // "readControlText"
QT_MOC_LITERAL(28, 371, 18), // "updateActionStates"
QT_MOC_LITERAL(29, 390, 6), // "doQuit"
QT_MOC_LITERAL(30, 397, 11), // "doInterrupt"
QT_MOC_LITERAL(31, 409, 20), // "doContinueOrDelegate"
QT_MOC_LITERAL(32, 430, 10), // "doStepInto"
QT_MOC_LITERAL(33, 441, 10), // "doStepOver"
QT_MOC_LITERAL(34, 452, 9), // "allSynced"
QT_MOC_LITERAL(35, 462, 13), // "addBreakpoint"
QT_MOC_LITERAL(36, 476, 16), // "removeBreakpoint"
QT_MOC_LITERAL(37, 493, 9), // "rdebugInd"
QT_MOC_LITERAL(38, 503, 20), // "removeAllBreakpoints"
QT_MOC_LITERAL(39, 524, 13), // "cmdToDebugger"
QT_MOC_LITERAL(40, 538, 13), // "sendRemoteCmd"
QT_MOC_LITERAL(41, 552, 3), // "cmd"
QT_MOC_LITERAL(42, 556, 12), // "allowQueuing"
QT_MOC_LITERAL(43, 569, 14), // "sendControlCmd"
QT_MOC_LITERAL(44, 584, 19), // "emitRunningPosition"
QT_MOC_LITERAL(45, 604, 26), // "QMap<QString,QStringList>&"
QT_MOC_LITERAL(46, 631, 12), // "remoteParsed"
QT_MOC_LITERAL(47, 644, 8) // "starting"

    },
    "TDriverDebugConsole\0connectResult\0\0"
    "requestDataSync\0runStarting\0fileName\0"
    "lineNum\0gotRemotePrompt\0breakpoint\0"
    "MEC::Breakpoint\0breakpoints\0"
    "QList<MEC::Breakpoint>\0delegateContinueAction\0"
    "clear\0resetConnections\0connectTo\0host\0"
    "dport\0cport\0TDriverRunConsole*\0"
    "procConsoleOwner\0resetProcConsoleOwner\0"
    "setRunning\0handleRemoteText\0text\0"
    "handleControlText\0readRemoteText\0"
    "readControlText\0updateActionStates\0"
    "doQuit\0doInterrupt\0doContinueOrDelegate\0"
    "doStepInto\0doStepOver\0allSynced\0"
    "addBreakpoint\0removeBreakpoint\0rdebugInd\0"
    "removeAllBreakpoints\0cmdToDebugger\0"
    "sendRemoteCmd\0cmd\0allowQueuing\0"
    "sendControlCmd\0emitRunningPosition\0"
    "QMap<QString,QStringList>&\0remoteParsed\0"
    "starting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverDebugConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       3,    0,  187,    2, 0x06 /* Public */,
       4,    2,  188,    2, 0x06 /* Public */,
       7,    2,  193,    2, 0x06 /* Public */,
       8,    1,  198,    2, 0x06 /* Public */,
      10,    1,  201,    2, 0x06 /* Public */,
      12,    0,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  205,    2, 0x0a /* Public */,
      14,    0,  206,    2, 0x0a /* Public */,
      15,    4,  207,    2, 0x0a /* Public */,
      21,    0,  216,    2, 0x0a /* Public */,
      22,    1,  217,    2, 0x0a /* Public */,
      23,    1,  220,    2, 0x0a /* Public */,
      25,    1,  223,    2, 0x0a /* Public */,
      26,    0,  226,    2, 0x0a /* Public */,
      27,    0,  227,    2, 0x0a /* Public */,
      28,    0,  228,    2, 0x0a /* Public */,
      29,    0,  229,    2, 0x0a /* Public */,
      30,    0,  230,    2, 0x0a /* Public */,
      31,    0,  231,    2, 0x0a /* Public */,
      32,    0,  232,    2, 0x0a /* Public */,
      33,    0,  233,    2, 0x0a /* Public */,
      34,    0,  234,    2, 0x0a /* Public */,
      35,    1,  235,    2, 0x0a /* Public */,
      36,    1,  238,    2, 0x0a /* Public */,
      38,    0,  241,    2, 0x0a /* Public */,
      39,    0,  242,    2, 0x08 /* Private */,
      40,    2,  243,    2, 0x08 /* Private */,
      40,    1,  248,    2, 0x28 /* Private | MethodCloned */,
      40,    0,  251,    2, 0x28 /* Private | MethodCloned */,
      43,    2,  252,    2, 0x08 /* Private */,
      43,    1,  257,    2, 0x28 /* Private | MethodCloned */,
      43,    0,  260,    2, 0x28 /* Private | MethodCloned */,
      44,    2,  261,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 19,   16,   17,   18,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   41,   42,
    QMetaType::Bool, QMetaType::QString,   41,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   41,   42,
    QMetaType::Bool, QMetaType::QString,   41,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 45, QMetaType::Bool,   46,   47,

       0        // eod
};

void TDriverDebugConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverDebugConsole *_t = static_cast<TDriverDebugConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->requestDataSync(); break;
        case 2: _t->runStarting((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->gotRemotePrompt((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->breakpoint((*reinterpret_cast< MEC::Breakpoint(*)>(_a[1]))); break;
        case 5: _t->breakpoints((*reinterpret_cast< QList<MEC::Breakpoint>(*)>(_a[1]))); break;
        case 6: _t->delegateContinueAction(); break;
        case 7: _t->clear(); break;
        case 8: _t->resetConnections(); break;
        case 9: _t->connectTo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< TDriverRunConsole*(*)>(_a[4]))); break;
        case 10: _t->resetProcConsoleOwner(); break;
        case 11: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->handleRemoteText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->handleControlText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->readRemoteText(); break;
        case 15: _t->readControlText(); break;
        case 16: _t->updateActionStates(); break;
        case 17: _t->doQuit(); break;
        case 18: _t->doInterrupt(); break;
        case 19: _t->doContinueOrDelegate(); break;
        case 20: _t->doStepInto(); break;
        case 21: _t->doStepOver(); break;
        case 22: _t->allSynced(); break;
        case 23: _t->addBreakpoint((*reinterpret_cast< MEC::Breakpoint(*)>(_a[1]))); break;
        case 24: _t->removeBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->removeAllBreakpoints(); break;
        case 26: _t->cmdToDebugger(); break;
        case 27: { bool _r = _t->sendRemoteCmd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->sendRemoteCmd((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->sendRemoteCmd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->sendControlCmd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->sendControlCmd((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->sendControlCmd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->emitRunningPosition((*reinterpret_cast< QMap<QString,QStringList>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverDebugConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::connectResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::requestDataSync)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::runStarting)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::gotRemotePrompt)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)(MEC::Breakpoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::breakpoint)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)(QList<struct MEC::Breakpoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::breakpoints)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TDriverDebugConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverDebugConsole::delegateContinueAction)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject TDriverDebugConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TDriverDebugConsole.data,
      qt_meta_data_TDriverDebugConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverDebugConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverDebugConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverDebugConsole.stringdata0))
        return static_cast<void*>(const_cast< TDriverDebugConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int TDriverDebugConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void TDriverDebugConsole::connectResult(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDriverDebugConsole::requestDataSync()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TDriverDebugConsole::runStarting(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TDriverDebugConsole::gotRemotePrompt(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TDriverDebugConsole::breakpoint(MEC::Breakpoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TDriverDebugConsole::breakpoints(QList<struct MEC::Breakpoint> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TDriverDebugConsole::delegateContinueAction()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
