/****************************************************************************
** Meta object code from reading C++ file 'visualizeraccessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "visualizeraccessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualizeraccessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualizerAccessor_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualizerAccessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualizerAccessor_t qt_meta_stringdata_VisualizerAccessor = {
    {
QT_MOC_LITERAL(0, 0, 18) // "VisualizerAccessor"

    },
    "VisualizerAccessor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualizerAccessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VisualizerAccessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VisualizerAccessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VisualizerAccessor.data,
      qt_meta_data_VisualizerAccessor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VisualizerAccessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualizerAccessor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VisualizerAccessor.stringdata0))
        return static_cast<void*>(const_cast< VisualizerAccessor*>(this));
    if (!strcmp(_clname, "TasFixturePluginInterface"))
        return static_cast< TasFixturePluginInterface*>(const_cast< VisualizerAccessor*>(this));
    if (!strcmp(_clname, "com.nokia.testability.TasFixturePluginInterface/1.0"))
        return static_cast< TasFixturePluginInterface*>(const_cast< VisualizerAccessor*>(this));
    return QObject::qt_metacast(_clname);
}

int VisualizerAccessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'c',  'o',  'm',  '.',  'n',  'o', 
    'k',  'i',  'a',  '.',  't',  'e',  's',  't', 
    'a',  'b',  'i',  'l',  'i',  't',  'y',  '.', 
    'V',  'i',  's',  'u',  'a',  'l',  'i',  'z', 
    'e',  'r',  'A',  'c',  'c',  'e',  's',  's', 
    'o',  'r',  0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x12, 0x00, 'V',  'i', 
    's',  'u',  'a',  'l',  'i',  'z',  'e',  'r', 
    'A',  'c',  'c',  'e',  's',  's',  'o',  'r', 
    0x1a, 0x00, 0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    0x12, 0x00, 'v',  'i',  's',  'u',  'a',  'l', 
    'i',  'z',  'e',  'r',  'a',  'c',  'c',  'e', 
    's',  's',  'o',  'r',  '(',  0x00, 'c',  'o', 
    'm',  '.',  'n',  'o',  'k',  'i',  'a',  '.', 
    't',  'e',  's',  't',  'a',  'b',  'i',  'l', 
    'i',  't',  'y',  '.',  'V',  'i',  's',  'u', 
    'a',  'l',  'i',  'z',  'e',  'r',  'A',  'c', 
    'c',  'e',  's',  's',  'o',  'r',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0b, 0x04, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00, 'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'c',  'o',  'm',  '.',  'n',  'o', 
    'k',  'i',  'a',  '.',  't',  'e',  's',  't', 
    'a',  'b',  'i',  'l',  'i',  't',  'y',  '.', 
    'V',  'i',  's',  'u',  'a',  'l',  'i',  'z', 
    'e',  'r',  'A',  'c',  'c',  'e',  's',  's', 
    'o',  'r',  0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    0x12, 0x00, 'v',  'i',  's',  'u',  'a',  'l', 
    'i',  'z',  'e',  'r',  'a',  'c',  'c',  'e', 
    's',  's',  'o',  'r',  '(',  0x00, 'c',  'o', 
    'm',  '.',  'n',  'o',  'k',  'i',  'a',  '.', 
    't',  'e',  's',  't',  'a',  'b',  'i',  'l', 
    'i',  't',  'y',  '.',  'V',  'i',  's',  'u', 
    'a',  'l',  'i',  'z',  'e',  'r',  'A',  'c', 
    'c',  'e',  's',  's',  'o',  'r',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0b, 0x04, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 0x1a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x12, 0x00, 'V',  'i', 
    's',  'u',  'a',  'l',  'i',  'z',  'e',  'r', 
    'A',  'c',  'c',  'e',  's',  's',  'o',  'r', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0x00, 0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
    0xe8, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(VisualizerAccessor, VisualizerAccessor)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
