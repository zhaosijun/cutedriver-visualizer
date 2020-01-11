/****************************************************************************
** Meta object code from reading C++ file 'tdriver_editbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_editbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_editbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverEditBar_t {
    QByteArrayData data[19];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverEditBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverEditBar_t qt_meta_stringdata_TDriverEditBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TDriverEditBar"
QT_MOC_LITERAL(1, 15, 11), // "requestFind"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "findText"
QT_MOC_LITERAL(4, 37, 24), // "QTextDocument::FindFlags"
QT_MOC_LITERAL(5, 62, 7), // "options"
QT_MOC_LITERAL(6, 70, 22), // "requestFindIncremental"
QT_MOC_LITERAL(7, 93, 18), // "requestReplaceFind"
QT_MOC_LITERAL(8, 112, 11), // "replaceText"
QT_MOC_LITERAL(9, 124, 17), // "requestReplaceAll"
QT_MOC_LITERAL(10, 142, 14), // "requestUnfocus"
QT_MOC_LITERAL(11, 157, 28), // "routedAutoRefreshInteractive"
QT_MOC_LITERAL(12, 186, 8), // "findNext"
QT_MOC_LITERAL(13, 195, 15), // "findIncremental"
QT_MOC_LITERAL(14, 211, 8), // "findPrev"
QT_MOC_LITERAL(15, 220, 15), // "replaceFindNext"
QT_MOC_LITERAL(16, 236, 10), // "replaceAll"
QT_MOC_LITERAL(17, 247, 27), // "routeAutoRefreshInteractive"
QT_MOC_LITERAL(18, 275, 11) // "appVariable"

    },
    "TDriverEditBar\0requestFind\0\0findText\0"
    "QTextDocument::FindFlags\0options\0"
    "requestFindIncremental\0requestReplaceFind\0"
    "replaceText\0requestReplaceAll\0"
    "requestUnfocus\0routedAutoRefreshInteractive\0"
    "findNext\0findIncremental\0findPrev\0"
    "replaceFindNext\0replaceAll\0"
    "routeAutoRefreshInteractive\0appVariable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverEditBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       6,    2,   79,    2, 0x06 /* Public */,
       7,    3,   84,    2, 0x06 /* Public */,
       9,    3,   91,    2, 0x06 /* Public */,
      10,    0,   98,    2, 0x06 /* Public */,
      11,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,    3,    8,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,    3,    8,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,

       0        // eod
};

void TDriverEditBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverEditBar *_t = static_cast<TDriverEditBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[2]))); break;
        case 1: _t->requestFindIncremental((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[2]))); break;
        case 2: _t->requestReplaceFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3]))); break;
        case 3: _t->requestReplaceAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3]))); break;
        case 4: _t->requestUnfocus(); break;
        case 5: _t->routedAutoRefreshInteractive(); break;
        case 6: _t->findNext(); break;
        case 7: _t->findIncremental(); break;
        case 8: _t->findPrev(); break;
        case 9: _t->replaceFindNext(); break;
        case 10: _t->replaceAll(); break;
        case 11: _t->routeAutoRefreshInteractive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverEditBar::*_t)(QString , QTextDocument::FindFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::requestFind)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverEditBar::*_t)(QString , QTextDocument::FindFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::requestFindIncremental)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverEditBar::*_t)(QString , QString , QTextDocument::FindFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::requestReplaceFind)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverEditBar::*_t)(QString , QString , QTextDocument::FindFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::requestReplaceAll)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TDriverEditBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::requestUnfocus)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TDriverEditBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverEditBar::routedAutoRefreshInteractive)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TDriverEditBar *_t = static_cast<TDriverEditBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->appVariable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TDriverEditBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_TDriverEditBar.data,
      qt_meta_data_TDriverEditBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverEditBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverEditBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverEditBar.stringdata0))
        return static_cast<void*>(const_cast< TDriverEditBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int TDriverEditBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TDriverEditBar::requestFind(QString _t1, QTextDocument::FindFlags _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TDriverEditBar::requestFindIncremental(QString _t1, QTextDocument::FindFlags _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TDriverEditBar::requestReplaceFind(QString _t1, QString _t2, QTextDocument::FindFlags _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TDriverEditBar::requestReplaceAll(QString _t1, QString _t2, QTextDocument::FindFlags _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TDriverEditBar::requestUnfocus()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void TDriverEditBar::routedAutoRefreshInteractive()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
