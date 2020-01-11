/****************************************************************************
** Meta object code from reading C++ file 'tdriver_codetextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tdriver_codetextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_codetextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TDriverCodeTextEdit_t {
    QByteArrayData data[103];
    char stringdata0[1629];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TDriverCodeTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TDriverCodeTextEdit_t qt_meta_stringdata_TDriverCodeTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TDriverCodeTextEdit"
QT_MOC_LITERAL(1, 20, 12), // "modesChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "addedBreakpoint"
QT_MOC_LITERAL(4, 50, 15), // "MEC::Breakpoint"
QT_MOC_LITERAL(5, 66, 17), // "removedBreakpoint"
QT_MOC_LITERAL(6, 84, 9), // "rdebugInd"
QT_MOC_LITERAL(7, 94, 28), // "requestInteractiveCompletion"
QT_MOC_LITERAL(8, 123, 9), // "statement"
QT_MOC_LITERAL(9, 133, 28), // "requestInteractiveEvaluation"
QT_MOC_LITERAL(10, 162, 22), // "setUsingTabulatorsMode"
QT_MOC_LITERAL(11, 185, 7), // "enabled"
QT_MOC_LITERAL(12, 193, 11), // "setRubyMode"
QT_MOC_LITERAL(13, 205, 11), // "setWrapMode"
QT_MOC_LITERAL(14, 217, 11), // "madeCurrent"
QT_MOC_LITERAL(15, 229, 13), // "enableWatcher"
QT_MOC_LITERAL(16, 243, 14), // "disableWatcher"
QT_MOC_LITERAL(17, 258, 6), // "doFind"
QT_MOC_LITERAL(18, 265, 8), // "findText"
QT_MOC_LITERAL(19, 274, 12), // "QTextCursor&"
QT_MOC_LITERAL(20, 287, 3), // "cur"
QT_MOC_LITERAL(21, 291, 24), // "QTextDocument::FindFlags"
QT_MOC_LITERAL(22, 316, 7), // "options"
QT_MOC_LITERAL(23, 324, 13), // "doReplaceFind"
QT_MOC_LITERAL(24, 338, 11), // "replaceText"
QT_MOC_LITERAL(25, 350, 17), // "doIncrementalFind"
QT_MOC_LITERAL(26, 368, 12), // "doReplaceAll"
QT_MOC_LITERAL(27, 381, 11), // "commentCode"
QT_MOC_LITERAL(28, 393, 10), // "setRunning"
QT_MOC_LITERAL(29, 404, 5), // "state"
QT_MOC_LITERAL(30, 410, 12), // "focusInEvent"
QT_MOC_LITERAL(31, 423, 12), // "QFocusEvent*"
QT_MOC_LITERAL(32, 436, 12), // "doAutoIndent"
QT_MOC_LITERAL(33, 449, 10), // "QKeyEvent*"
QT_MOC_LITERAL(34, 460, 23), // "getTranslationParameter"
QT_MOC_LITERAL(35, 484, 8), // "paramKey"
QT_MOC_LITERAL(36, 493, 10), // "settingKey"
QT_MOC_LITERAL(37, 504, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(38, 526, 15), // "tdriverParamMap"
QT_MOC_LITERAL(39, 542, 11), // "sutParamMap"
QT_MOC_LITERAL(40, 554, 8), // "QString&"
QT_MOC_LITERAL(41, 563, 10), // "paramValue"
QT_MOC_LITERAL(42, 574, 22), // "setTranslationDatabase"
QT_MOC_LITERAL(43, 597, 26), // "startTranslationCompletion"
QT_MOC_LITERAL(44, 624, 23), // "doTranslationCompletion"
QT_MOC_LITERAL(45, 648, 19), // "splitToComplCursors"
QT_MOC_LITERAL(46, 668, 11), // "QTextCursor"
QT_MOC_LITERAL(47, 680, 9), // "selection"
QT_MOC_LITERAL(48, 690, 16), // "joinComplCursors"
QT_MOC_LITERAL(49, 707, 25), // "autoInteractiveCompletion"
QT_MOC_LITERAL(50, 733, 24), // "tryInteractiveCompletion"
QT_MOC_LITERAL(51, 758, 23), // "doInteractiveCompletion"
QT_MOC_LITERAL(52, 782, 26), // "popupInteractiveCompletion"
QT_MOC_LITERAL(53, 809, 6), // "client"
QT_MOC_LITERAL(54, 816, 11), // "completions"
QT_MOC_LITERAL(55, 828, 26), // "errorInteractiveCompletion"
QT_MOC_LITERAL(56, 855, 19), // "doGenericCompletion"
QT_MOC_LITERAL(57, 875, 5), // "event"
QT_MOC_LITERAL(58, 881, 5), // "bool&"
QT_MOC_LITERAL(59, 887, 7), // "handled"
QT_MOC_LITERAL(60, 895, 13), // "keyPressEvent"
QT_MOC_LITERAL(61, 909, 16), // "contextMenuEvent"
QT_MOC_LITERAL(62, 926, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(63, 945, 20), // "cursorPositionChange"
QT_MOC_LITERAL(64, 966, 15), // "dataSyncRequest"
QT_MOC_LITERAL(65, 982, 8), // "gotoLine"
QT_MOC_LITERAL(66, 991, 7), // "lineNum"
QT_MOC_LITERAL(67, 999, 14), // "setRunningLine"
QT_MOC_LITERAL(68, 1014, 16), // "clearBreakpoints"
QT_MOC_LITERAL(69, 1031, 21), // "rdebugBreakpointReset"
QT_MOC_LITERAL(70, 1053, 16), // "rdebugBreakpoint"
QT_MOC_LITERAL(71, 1070, 2), // "bp"
QT_MOC_LITERAL(72, 1073, 20), // "removeBreakpointLine"
QT_MOC_LITERAL(73, 1094, 19), // "rdebugDelBreakpoint"
QT_MOC_LITERAL(74, 1114, 22), // "uiToggleBreakpointLine"
QT_MOC_LITERAL(75, 1137, 16), // "updateHighlights"
QT_MOC_LITERAL(76, 1154, 19), // "updateSideAreaWidth"
QT_MOC_LITERAL(77, 1174, 17), // "doInteractiveEval"
QT_MOC_LITERAL(78, 1192, 18), // "popupCompleterInfo"
QT_MOC_LITERAL(79, 1211, 4), // "text"
QT_MOC_LITERAL(80, 1216, 19), // "popupBasicCompleter"
QT_MOC_LITERAL(81, 1236, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(82, 1256, 5), // "model"
QT_MOC_LITERAL(83, 1262, 24), // "documentBlockCountChange"
QT_MOC_LITERAL(84, 1287, 8), // "newCount"
QT_MOC_LITERAL(85, 1296, 11), // "fileChanged"
QT_MOC_LITERAL(86, 1308, 4), // "path"
QT_MOC_LITERAL(87, 1313, 17), // "doSyntaxHighlight"
QT_MOC_LITERAL(88, 1331, 27), // "testBlockDelimiterHighlight"
QT_MOC_LITERAL(89, 1359, 24), // "highlightBlockDelimiters"
QT_MOC_LITERAL(90, 1384, 33), // "QList<QTextEdit::ExtraSelecti..."
QT_MOC_LITERAL(91, 1418, 15), // "extraSelections"
QT_MOC_LITERAL(92, 1434, 19), // "highlightCursorLine"
QT_MOC_LITERAL(93, 1454, 26), // "highlightCompletionCursors"
QT_MOC_LITERAL(94, 1481, 20), // "highlightRunningLine"
QT_MOC_LITERAL(95, 1502, 24), // "highlightBreakpointLines"
QT_MOC_LITERAL(96, 1527, 14), // "updateSideArea"
QT_MOC_LITERAL(97, 1542, 16), // "cancelCompletion"
QT_MOC_LITERAL(98, 1559, 16), // "adjustTextCursor"
QT_MOC_LITERAL(99, 1576, 18), // "completerActivated"
QT_MOC_LITERAL(100, 1595, 8), // "fileName"
QT_MOC_LITERAL(101, 1604, 8), // "noNameId"
QT_MOC_LITERAL(102, 1613, 15) // "noNameIdCounter"

    },
    "TDriverCodeTextEdit\0modesChanged\0\0"
    "addedBreakpoint\0MEC::Breakpoint\0"
    "removedBreakpoint\0rdebugInd\0"
    "requestInteractiveCompletion\0statement\0"
    "requestInteractiveEvaluation\0"
    "setUsingTabulatorsMode\0enabled\0"
    "setRubyMode\0setWrapMode\0madeCurrent\0"
    "enableWatcher\0disableWatcher\0doFind\0"
    "findText\0QTextCursor&\0cur\0"
    "QTextDocument::FindFlags\0options\0"
    "doReplaceFind\0replaceText\0doIncrementalFind\0"
    "doReplaceAll\0commentCode\0setRunning\0"
    "state\0focusInEvent\0QFocusEvent*\0"
    "doAutoIndent\0QKeyEvent*\0getTranslationParameter\0"
    "paramKey\0settingKey\0QMap<QString,QString>\0"
    "tdriverParamMap\0sutParamMap\0QString&\0"
    "paramValue\0setTranslationDatabase\0"
    "startTranslationCompletion\0"
    "doTranslationCompletion\0splitToComplCursors\0"
    "QTextCursor\0selection\0joinComplCursors\0"
    "autoInteractiveCompletion\0"
    "tryInteractiveCompletion\0"
    "doInteractiveCompletion\0"
    "popupInteractiveCompletion\0client\0"
    "completions\0errorInteractiveCompletion\0"
    "doGenericCompletion\0event\0bool&\0handled\0"
    "keyPressEvent\0contextMenuEvent\0"
    "QContextMenuEvent*\0cursorPositionChange\0"
    "dataSyncRequest\0gotoLine\0lineNum\0"
    "setRunningLine\0clearBreakpoints\0"
    "rdebugBreakpointReset\0rdebugBreakpoint\0"
    "bp\0removeBreakpointLine\0rdebugDelBreakpoint\0"
    "uiToggleBreakpointLine\0updateHighlights\0"
    "updateSideAreaWidth\0doInteractiveEval\0"
    "popupCompleterInfo\0text\0popupBasicCompleter\0"
    "QAbstractItemModel*\0model\0"
    "documentBlockCountChange\0newCount\0"
    "fileChanged\0path\0doSyntaxHighlight\0"
    "testBlockDelimiterHighlight\0"
    "highlightBlockDelimiters\0"
    "QList<QTextEdit::ExtraSelection>&\0"
    "extraSelections\0highlightCursorLine\0"
    "highlightCompletionCursors\0"
    "highlightRunningLine\0highlightBreakpointLines\0"
    "updateSideArea\0cancelCompletion\0"
    "adjustTextCursor\0completerActivated\0"
    "fileName\0noNameId\0noNameIdCounter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TDriverCodeTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       3,  588, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  364,    2, 0x06 /* Public */,
       3,    1,  365,    2, 0x06 /* Public */,
       5,    1,  368,    2, 0x06 /* Public */,
       7,    1,  371,    2, 0x06 /* Public */,
       9,    1,  374,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  377,    2, 0x0a /* Public */,
      12,    1,  380,    2, 0x0a /* Public */,
      13,    1,  383,    2, 0x0a /* Public */,
      14,    0,  386,    2, 0x0a /* Public */,
      15,    0,  387,    2, 0x0a /* Public */,
      16,    0,  388,    2, 0x0a /* Public */,
      17,    3,  389,    2, 0x0a /* Public */,
      23,    4,  396,    2, 0x0a /* Public */,
      17,    2,  405,    2, 0x0a /* Public */,
      17,    1,  410,    2, 0x2a /* Public | MethodCloned */,
      25,    2,  413,    2, 0x0a /* Public */,
      25,    1,  418,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  421,    2, 0x0a /* Public */,
      23,    2,  428,    2, 0x2a /* Public | MethodCloned */,
      26,    3,  433,    2, 0x0a /* Public */,
      26,    2,  440,    2, 0x2a /* Public | MethodCloned */,
      27,    0,  445,    2, 0x0a /* Public */,
      28,    1,  446,    2, 0x0a /* Public */,
      30,    1,  449,    2, 0x0a /* Public */,
      32,    1,  452,    2, 0x0a /* Public */,
      34,    5,  455,    2, 0x0a /* Public */,
      42,    2,  466,    2, 0x0a /* Public */,
      43,    1,  471,    2, 0x0a /* Public */,
      44,    1,  474,    2, 0x0a /* Public */,
      45,    1,  477,    2, 0x0a /* Public */,
      48,    0,  480,    2, 0x0a /* Public */,
      49,    0,  481,    2, 0x0a /* Public */,
      50,    1,  482,    2, 0x0a /* Public */,
      51,    1,  485,    2, 0x0a /* Public */,
      52,    3,  488,    2, 0x0a /* Public */,
      52,    2,  495,    2, 0x2a /* Public | MethodCloned */,
      52,    1,  500,    2, 0x2a /* Public | MethodCloned */,
      55,    3,  503,    2, 0x0a /* Public */,
      56,    2,  510,    2, 0x0a /* Public */,
      60,    1,  515,    2, 0x0a /* Public */,
      61,    1,  518,    2, 0x0a /* Public */,
      63,    0,  521,    2, 0x0a /* Public */,
      64,    0,  522,    2, 0x0a /* Public */,
      65,    1,  523,    2, 0x0a /* Public */,
      67,    1,  526,    2, 0x0a /* Public */,
      68,    0,  529,    2, 0x0a /* Public */,
      69,    0,  530,    2, 0x0a /* Public */,
      70,    1,  531,    2, 0x0a /* Public */,
      72,    1,  534,    2, 0x0a /* Public */,
      73,    1,  537,    2, 0x0a /* Public */,
      74,    1,  540,    2, 0x0a /* Public */,
      75,    0,  543,    2, 0x0a /* Public */,
      76,    0,  544,    2, 0x08 /* Private */,
      77,    0,  545,    2, 0x08 /* Private */,
      78,    1,  546,    2, 0x08 /* Private */,
      80,    1,  549,    2, 0x08 /* Private */,
      83,    1,  552,    2, 0x08 /* Private */,
      85,    1,  555,    2, 0x08 /* Private */,
      87,    0,  558,    2, 0x08 /* Private */,
      88,    0,  559,    2, 0x08 /* Private */,
      89,    1,  560,    2, 0x08 /* Private */,
      92,    1,  563,    2, 0x08 /* Private */,
      93,    1,  566,    2, 0x08 /* Private */,
      94,    1,  569,    2, 0x08 /* Private */,
      95,    1,  572,    2, 0x08 /* Private */,
      96,    2,  575,    2, 0x08 /* Private */,
      97,    1,  580,    2, 0x08 /* Private */,
      97,    0,  583,    2, 0x28 /* Private | MethodCloned */,
      99,    0,  584,    2, 0x08 /* Private */,
      99,    1,  585,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, QMetaType::QByteArray,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 21,   18,   20,   22,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 21,   18,   24,   20,   22,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 21,   18,   22,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 21,   18,   22,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 21,   18,   24,   22,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   18,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 21,   18,   24,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 37, 0x80000000 | 37, 0x80000000 | 40,   35,   36,   38,   39,   41,
    QMetaType::Bool, 0x80000000 | 37, 0x80000000 | 37,   38,   39,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Bool, 0x80000000 | 33,    2,
    QMetaType::QString, 0x80000000 | 46,   47,
    0x80000000 | 46,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Bool, 0x80000000 | 33,    2,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,   53,    8,   54,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray,   53,    8,
    QMetaType::Void, QMetaType::QObjectStar,   53,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QByteArray, QMetaType::QStringList,   53,    8,   54,
    QMetaType::Bool, 0x80000000 | 33, 0x80000000 | 58,   57,   59,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Void, 0x80000000 | 62,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   71,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   79,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void, QMetaType::QString,   86,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,   98,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // properties: name, type, flags
     100, QMetaType::QString, 0x00095103,
     101, QMetaType::Int, 0x00095001,
     102, QMetaType::Int, 0x00095001,

       0        // eod
};

void TDriverCodeTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TDriverCodeTextEdit *_t = static_cast<TDriverCodeTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modesChanged(); break;
        case 1: _t->addedBreakpoint((*reinterpret_cast< MEC::Breakpoint(*)>(_a[1]))); break;
        case 2: _t->removedBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->requestInteractiveCompletion((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->requestInteractiveEvaluation((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->setUsingTabulatorsMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setRubyMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setWrapMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->madeCurrent(); break;
        case 9: _t->enableWatcher(); break;
        case 10: _t->disableWatcher(); break;
        case 11: { bool _r = _t->doFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextCursor(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->doReplaceFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextCursor(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->doFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->doFind((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->doIncrementalFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->doIncrementalFind((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->doReplaceFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->doReplaceFind((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->doReplaceAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3]))); break;
        case 20: _t->doReplaceAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->commentCode(); break;
        case 22: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->focusInEvent((*reinterpret_cast< QFocusEvent*(*)>(_a[1]))); break;
        case 24: _t->doAutoIndent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 25: { bool _r = _t->getTranslationParameter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[3])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->setTranslationDatabase((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->startTranslationCompletion((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 28: { bool _r = _t->doTranslationCompletion((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { QString _r = _t->splitToComplCursors((*reinterpret_cast< QTextCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QTextCursor _r = _t->joinComplCursors();
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->autoInteractiveCompletion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->tryInteractiveCompletion((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 33: { bool _r = _t->doInteractiveCompletion((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: _t->popupInteractiveCompletion((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 35: _t->popupInteractiveCompletion((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 36: _t->popupInteractiveCompletion((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 37: _t->errorInteractiveCompletion((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 38: { bool _r = _t->doGenericCompletion((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 40: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 41: _t->cursorPositionChange(); break;
        case 42: _t->dataSyncRequest(); break;
        case 43: _t->gotoLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->setRunningLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->clearBreakpoints(); break;
        case 46: _t->rdebugBreakpointReset(); break;
        case 47: _t->rdebugBreakpoint((*reinterpret_cast< MEC::Breakpoint(*)>(_a[1]))); break;
        case 48: _t->removeBreakpointLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->rdebugDelBreakpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->uiToggleBreakpointLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->updateHighlights(); break;
        case 52: _t->updateSideAreaWidth(); break;
        case 53: _t->doInteractiveEval(); break;
        case 54: _t->popupCompleterInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->popupBasicCompleter((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 56: _t->documentBlockCountChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->doSyntaxHighlight(); break;
        case 59: { bool _r = _t->testBlockDelimiterHighlight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: _t->highlightBlockDelimiters((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*)>(_a[1]))); break;
        case 61: _t->highlightCursorLine((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*)>(_a[1]))); break;
        case 62: _t->highlightCompletionCursors((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*)>(_a[1]))); break;
        case 63: _t->highlightRunningLine((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*)>(_a[1]))); break;
        case 64: _t->highlightBreakpointLines((*reinterpret_cast< QList<QTextEdit::ExtraSelection>(*)>(_a[1]))); break;
        case 65: _t->updateSideArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 66: _t->cancelCompletion((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->cancelCompletion(); break;
        case 68: { bool _r = _t->completerActivated();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: _t->completerActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TDriverCodeTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverCodeTextEdit::modesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TDriverCodeTextEdit::*_t)(MEC::Breakpoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverCodeTextEdit::addedBreakpoint)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TDriverCodeTextEdit::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverCodeTextEdit::removedBreakpoint)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TDriverCodeTextEdit::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverCodeTextEdit::requestInteractiveCompletion)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TDriverCodeTextEdit::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TDriverCodeTextEdit::requestInteractiveEvaluation)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TDriverCodeTextEdit *_t = static_cast<TDriverCodeTextEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getNoNameId(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getNoNameIdCounter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TDriverCodeTextEdit *_t = static_cast<TDriverCodeTextEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TDriverCodeTextEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TDriverCodeTextEdit.data,
      qt_meta_data_TDriverCodeTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TDriverCodeTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TDriverCodeTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TDriverCodeTextEdit.stringdata0))
        return static_cast<void*>(const_cast< TDriverCodeTextEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TDriverCodeTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 70;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TDriverCodeTextEdit::modesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TDriverCodeTextEdit::addedBreakpoint(MEC::Breakpoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TDriverCodeTextEdit::removedBreakpoint(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TDriverCodeTextEdit::requestInteractiveCompletion(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TDriverCodeTextEdit::requestInteractiveEvaluation(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
