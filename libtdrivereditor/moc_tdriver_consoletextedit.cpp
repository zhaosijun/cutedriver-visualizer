/****************************************************************************
** Meta object code from reading C++ file 'tdriver_consoletextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_consoletextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_consoletextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverConsoleTextEdit_t {
    QByteArrayData data[20];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverConsoleTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverConsoleTextEdit_t qt_meta_stringdata_TDriverConsoleTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TDriverConsoleTextEdit"
QT_MOC_LITERAL(1, 23, 21), // "disconnectCommandLine"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 20), // "configureCommandLine"
QT_MOC_LITERAL(4, 67, 21), // "TDriverComboLineEdit*"
QT_MOC_LITERAL(5, 89, 20), // "sendAndAppendCommand"
QT_MOC_LITERAL(6, 110, 4), // "text"
QT_MOC_LITERAL(7, 115, 18), // "sendAndAppendChars"
QT_MOC_LITERAL(8, 134, 15), // "QTextCharFormat"
QT_MOC_LITERAL(9, 150, 6), // "format"
QT_MOC_LITERAL(10, 157, 11), // "setIODevice"
QT_MOC_LITERAL(11, 169, 10), // "QIODevice*"
QT_MOC_LITERAL(12, 180, 12), // "setLocalEcho"
QT_MOC_LITERAL(13, 193, 8), // "setQuiet"
QT_MOC_LITERAL(14, 202, 16), // "copyAppendCursor"
QT_MOC_LITERAL(15, 219, 23), // "TDriverConsoleTextEdit*"
QT_MOC_LITERAL(16, 243, 6), // "source"
QT_MOC_LITERAL(17, 250, 10), // "appendLine"
QT_MOC_LITERAL(18, 261, 10), // "appendText"
QT_MOC_LITERAL(19, 272, 18) // "centerAppendCursor"

    },
    "TDriverConsoleTextEdit\0disconnectCommandLine\0"
    "\0configureCommandLine\0TDriverComboLineEdit*\0"
    "sendAndAppendCommand\0text\0sendAndAppendChars\0"
    "QTextCharFormat\0format\0setIODevice\0"
    "QIODevice*\0setLocalEcho\0setQuiet\0"
    "copyAppendCursor\0TDriverConsoleTextEdit*\0"
    "source\0appendLine\0appendText\0"
    "centerAppendCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverConsoleTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    2,   76,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,
      17,    2,   93,    2, 0x0a /* Public */,
      18,    2,   98,    2, 0x0a /* Public */,
      19,    0,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 8,    6,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    6,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    6,    9,
    QMetaType::Void,

       0        // eod
};

void TDriverConsoleTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverConsoleTextEdit *_t = static_cast<TDriverConsoleTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnectCommandLine(); break;
        case 1: _t->configureCommandLine((*reinterpret_cast< TDriverComboLineEdit*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->sendAndAppendCommand((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->sendAndAppendChars((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->setIODevice((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 5: _t->setLocalEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setQuiet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->copyAppendCursor((*reinterpret_cast< TDriverConsoleTextEdit*(*)>(_a[1]))); break;
        case 8: _t->appendLine((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 9: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 10: _t->centerAppendCursor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TDriverConsoleTextEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject TDriverConsoleTextEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TDriverConsoleTextEdit.data,
      qt_meta_data_TDriverConsoleTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverConsoleTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverConsoleTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverConsoleTextEdit.stringdata0))
        return static_cast<void*>(const_cast< TDriverConsoleTextEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TDriverConsoleTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
