/****************************************************************************
** Meta object code from reading C++ file 'tdriver_executedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_executedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_executedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverExecuteDialog_t {
    QByteArrayData data[17];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverExecuteDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverExecuteDialog_t qt_meta_stringdata_TDriverExecuteDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TDriverExecuteDialog"
QT_MOC_LITERAL(1, 21, 13), // "anchorClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "link"
QT_MOC_LITERAL(4, 41, 9), // "terminate"
QT_MOC_LITERAL(5, 51, 5), // "error"
QT_MOC_LITERAL(6, 57, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(7, 80, 8), // "finished"
QT_MOC_LITERAL(8, 89, 8), // "exitCode"
QT_MOC_LITERAL(9, 98, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(10, 119, 10), // "exitStatus"
QT_MOC_LITERAL(11, 130, 22), // "readyReadStandardError"
QT_MOC_LITERAL(12, 153, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(13, 177, 7), // "started"
QT_MOC_LITERAL(14, 185, 12), // "stateChanged"
QT_MOC_LITERAL(15, 198, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(16, 221, 8) // "newState"

    },
    "TDriverExecuteDialog\0anchorClicked\0\0"
    "link\0terminate\0error\0QProcess::ProcessError\0"
    "finished\0exitCode\0QProcess::ExitStatus\0"
    "exitStatus\0readyReadStandardError\0"
    "readyReadStandardOutput\0started\0"
    "stateChanged\0QProcess::ProcessState\0"
    "newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverExecuteDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    2,   61,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,
      13,    0,   68,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void TDriverExecuteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverExecuteDialog *_t = static_cast<TDriverExecuteDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->terminate(); break;
        case 2: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->readyReadStandardError(); break;
        case 5: _t->readyReadStandardOutput(); break;
        case 6: _t->started(); break;
        case 7: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverExecuteDialog::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverExecuteDialog::anchorClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TDriverExecuteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TDriverExecuteDialog.data,
      qt_meta_data_TDriverExecuteDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverExecuteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverExecuteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverExecuteDialog.stringdata0))
        return static_cast<void*>(const_cast< TDriverExecuteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TDriverExecuteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TDriverExecuteDialog::anchorClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
