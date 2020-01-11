/****************************************************************************
** Meta object code from reading C++ file 'tdriver_featurabstractview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_featurabstractview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_featurabstractview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverFeaturAbstractView_t {
    QByteArrayData data[20];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverFeaturAbstractView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverFeaturAbstractView_t qt_meta_stringdata_TDriverFeaturAbstractView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "TDriverFeaturAbstractView"
QT_MOC_LITERAL(1, 26, 9), // "reScanned"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "path"
QT_MOC_LITERAL(4, 42, 12), // "aFileChanged"
QT_MOC_LITERAL(5, 55, 9), // "resetPath"
QT_MOC_LITERAL(6, 65, 18), // "resetPathFromIndex"
QT_MOC_LITERAL(7, 84, 5), // "index"
QT_MOC_LITERAL(8, 90, 16), // "resetPathFromBox"
QT_MOC_LITERAL(9, 107, 9), // "clearView"
QT_MOC_LITERAL(10, 117, 6), // "reScan"
QT_MOC_LITERAL(11, 124, 12), // "doFileDialog"
QT_MOC_LITERAL(12, 137, 11), // "scanPattern"
QT_MOC_LITERAL(13, 149, 12), // "scanPattern2"
QT_MOC_LITERAL(14, 162, 5), // "model"
QT_MOC_LITERAL(15, 168, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(16, 188, 11), // "locationBox"
QT_MOC_LITERAL(17, 200, 10), // "QComboBox*"
QT_MOC_LITERAL(18, 211, 11), // "pendingScan"
QT_MOC_LITERAL(19, 223, 14) // "pathLineNumber"

    },
    "TDriverFeaturAbstractView\0reScanned\0"
    "\0path\0aFileChanged\0resetPath\0"
    "resetPathFromIndex\0index\0resetPathFromBox\0"
    "clearView\0reScan\0doFileDialog\0scanPattern\0"
    "scanPattern2\0model\0QAbstractItemModel*\0"
    "locationBox\0QComboBox*\0pendingScan\0"
    "pathLineNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverFeaturAbstractView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,
      16, 0x80000000 | 17, 0x00095009,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Int, 0x00095001,

       0        // eod
};

void TDriverFeaturAbstractView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverFeaturAbstractView *_t = static_cast<TDriverFeaturAbstractView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reScanned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->aFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->resetPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->resetPathFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->resetPathFromBox(); break;
        case 5: _t->clearView(); break;
        case 6: { int _r = _t->reScan();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->doFileDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverFeaturAbstractView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverFeaturAbstractView::reScanned)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TDriverFeaturAbstractView *_t = static_cast<TDriverFeaturAbstractView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->scanPattern(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->scanPattern2(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 3: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 4: *reinterpret_cast< QComboBox**>(_v) = _t->locationBox(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->pendingScan(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->pathLineNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TDriverFeaturAbstractView *_t = static_cast<TDriverFeaturAbstractView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScanPattern(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setScanPattern2(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 5: _t->setPendingScan(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TDriverFeaturAbstractView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TDriverFeaturAbstractView.data,
      qt_meta_data_TDriverFeaturAbstractView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverFeaturAbstractView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverFeaturAbstractView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverFeaturAbstractView.stringdata0))
        return static_cast<void*>(const_cast< TDriverFeaturAbstractView*>(this));
    return QWidget::qt_metacast(_clname);
}

int TDriverFeaturAbstractView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TDriverFeaturAbstractView::reScanned(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
