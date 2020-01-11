/****************************************************************************
** Meta object code from reading C++ file 'tdriver_main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/tdriver_main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tdriver_main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[127];
    char stringdata0[2115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "defaultFontSet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "font"
QT_MOC_LITERAL(4, 32, 18), // "insertToCodeEditor"
QT_MOC_LITERAL(5, 51, 4), // "text"
QT_MOC_LITERAL(6, 56, 13), // "prependParent"
QT_MOC_LITERAL(7, 70, 10), // "prependDot"
QT_MOC_LITERAL(8, 81, 15), // "disconnectionOk"
QT_MOC_LITERAL(9, 97, 12), // "disconnected"
QT_MOC_LITERAL(10, 110, 27), // "refreshScreenshotObjectList"
QT_MOC_LITERAL(11, 138, 9), // "statusbar"
QT_MOC_LITERAL(12, 148, 20), // "currentProgressValue"
QT_MOC_LITERAL(13, 169, 16), // "maxProgressValue"
QT_MOC_LITERAL(14, 186, 7), // "timeout"
QT_MOC_LITERAL(15, 194, 14), // "handleRbiError"
QT_MOC_LITERAL(16, 209, 5), // "title"
QT_MOC_LITERAL(17, 215, 7), // "details"
QT_MOC_LITERAL(18, 223, 20), // "restoreDefaultLayout"
QT_MOC_LITERAL(19, 244, 19), // "settingsSaveLayouts"
QT_MOC_LITERAL(20, 264, 19), // "settingsLoadLayouts"
QT_MOC_LITERAL(21, 284, 11), // "saveALayout"
QT_MOC_LITERAL(22, 296, 8), // "QAction*"
QT_MOC_LITERAL(23, 305, 16), // "layoutSaveAction"
QT_MOC_LITERAL(24, 322, 14), // "restoreALayout"
QT_MOC_LITERAL(25, 337, 15), // "layoutSetAction"
QT_MOC_LITERAL(26, 353, 22), // "tdriverMsgSetTitleText"
QT_MOC_LITERAL(27, 376, 19), // "tdriverMsgOkClicked"
QT_MOC_LITERAL(28, 396, 18), // "tdriverMsgFinished"
QT_MOC_LITERAL(29, 415, 16), // "tdriverMsgAppend"
QT_MOC_LITERAL(30, 432, 7), // "message"
QT_MOC_LITERAL(31, 440, 22), // "collapseTreeWidgetItem"
QT_MOC_LITERAL(32, 463, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(33, 480, 4), // "item"
QT_MOC_LITERAL(34, 485, 20), // "expandTreeWidgetItem"
QT_MOC_LITERAL(35, 506, 16), // "tabWidgetChanged"
QT_MOC_LITERAL(36, 523, 18), // "currentTableWidget"
QT_MOC_LITERAL(37, 542, 17), // "methodItemPressed"
QT_MOC_LITERAL(38, 560, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(39, 578, 21), // "propertiesItemPressed"
QT_MOC_LITERAL(40, 600, 14), // "apiItemPressed"
QT_MOC_LITERAL(41, 615, 27), // "showMainVisualizerAssistant"
QT_MOC_LITERAL(42, 643, 30), // "showContextVisualizerAssistant"
QT_MOC_LITERAL(43, 674, 4), // "page"
QT_MOC_LITERAL(44, 679, 18), // "showVisualizerHelp"
QT_MOC_LITERAL(45, 698, 27), // "showVisualizerQtWindowsHelp"
QT_MOC_LITERAL(46, 726, 25), // "showVisualizerQtLinuxHelp"
QT_MOC_LITERAL(47, 752, 27), // "showVisualizerQtSymbianHelp"
QT_MOC_LITERAL(48, 780, 19), // "showAboutVisualizer"
QT_MOC_LITERAL(49, 800, 13), // "createAppsBar"
QT_MOC_LITERAL(50, 814, 18), // "createShortcutsBar"
QT_MOC_LITERAL(51, 833, 18), // "createClipboardBar"
QT_MOC_LITERAL(52, 852, 19), // "updateClipboardText"
QT_MOC_LITERAL(53, 872, 10), // "appendText"
QT_MOC_LITERAL(54, 883, 26), // "changePropertiesTableValue"
QT_MOC_LITERAL(55, 910, 18), // "delayedRefreshData"
QT_MOC_LITERAL(56, 929, 16), // "forceRefreshData"
QT_MOC_LITERAL(57, 946, 16), // "forceRefreshApps"
QT_MOC_LITERAL(58, 963, 18), // "sendAppListRequest"
QT_MOC_LITERAL(59, 982, 12), // "refreshAfter"
QT_MOC_LITERAL(60, 995, 19), // "constructRefreshCmd"
QT_MOC_LITERAL(61, 1015, 7), // "command"
QT_MOC_LITERAL(62, 1023, 16), // "sendImageRequest"
QT_MOC_LITERAL(63, 1040, 17), // "sendUiDumpRequest"
QT_MOC_LITERAL(64, 1058, 20), // "startRefreshSequence"
QT_MOC_LITERAL(65, 1079, 17), // "refreshAppearance"
QT_MOC_LITERAL(66, 1097, 21), // "objectViewItemClicked"
QT_MOC_LITERAL(67, 1119, 6), // "column"
QT_MOC_LITERAL(68, 1126, 20), // "objectViewItemAction"
QT_MOC_LITERAL(69, 1147, 20), // "ContextMenuSelection"
QT_MOC_LITERAL(70, 1168, 6), // "action"
QT_MOC_LITERAL(71, 1175, 6), // "method"
QT_MOC_LITERAL(72, 1182, 28), // "objectViewCurrentItemChanged"
QT_MOC_LITERAL(73, 1211, 11), // "itemCurrent"
QT_MOC_LITERAL(74, 1223, 12), // "itemPrevious"
QT_MOC_LITERAL(75, 1236, 15), // "getParameterXML"
QT_MOC_LITERAL(76, 1252, 17), // "loadStateByDialog"
QT_MOC_LITERAL(77, 1270, 23), // "loadStateFromHistoryDir"
QT_MOC_LITERAL(78, 1294, 7), // "dirPath"
QT_MOC_LITERAL(79, 1302, 16), // "loadStateFromDir"
QT_MOC_LITERAL(80, 1319, 23), // "historySaveCurrentState"
QT_MOC_LITERAL(81, 1343, 18), // "saveStateAsArchive"
QT_MOC_LITERAL(82, 1362, 12), // "clickedImage"
QT_MOC_LITERAL(83, 1375, 14), // "openFontDialog"
QT_MOC_LITERAL(84, 1390, 13), // "disconnectSUT"
QT_MOC_LITERAL(85, 1404, 22), // "disconnectExclusiveSUT"
QT_MOC_LITERAL(86, 1427, 19), // "objectTreeExpandAll"
QT_MOC_LITERAL(87, 1447, 21), // "objectTreeCollapseAll"
QT_MOC_LITERAL(88, 1469, 13), // "showXMLDialog"
QT_MOC_LITERAL(89, 1483, 20), // "imageInspectFindItem"
QT_MOC_LITERAL(90, 1504, 19), // "imageInsertFindItem"
QT_MOC_LITERAL(91, 1524, 17), // "imageInsertCoords"
QT_MOC_LITERAL(92, 1542, 23), // "imageInsertObjectFromId"
QT_MOC_LITERAL(93, 1566, 13), // "TestObjectKey"
QT_MOC_LITERAL(94, 1580, 2), // "id"
QT_MOC_LITERAL(95, 1583, 18), // "imageInspectFromId"
QT_MOC_LITERAL(96, 1602, 14), // "imageTapFromId"
QT_MOC_LITERAL(97, 1617, 17), // "changeImageResize"
QT_MOC_LITERAL(98, 1635, 6), // "resize"
QT_MOC_LITERAL(99, 1642, 20), // "changeImageLeftClick"
QT_MOC_LITERAL(100, 1663, 5), // "index"
QT_MOC_LITERAL(101, 1669, 11), // "appSelected"
QT_MOC_LITERAL(102, 1681, 14), // "deviceSelected"
QT_MOC_LITERAL(103, 1696, 16), // "openRecordWindow"
QT_MOC_LITERAL(104, 1713, 17), // "findStringFromXml"
QT_MOC_LITERAL(105, 1731, 14), // "closeXmlDialog"
QT_MOC_LITERAL(106, 1746, 22), // "showXmlEditTextChanged"
QT_MOC_LITERAL(107, 1769, 14), // "showFindDialog"
QT_MOC_LITERAL(108, 1784, 18), // "findNextTreeObject"
QT_MOC_LITERAL(109, 1803, 21), // "findDialogTextChanged"
QT_MOC_LITERAL(110, 1825, 33), // "findDialogHandleTreeCurrentCh..."
QT_MOC_LITERAL(111, 1859, 7), // "current"
QT_MOC_LITERAL(112, 1867, 24), // "findDialogSubtreeChanged"
QT_MOC_LITERAL(113, 1892, 5), // "value"
QT_MOC_LITERAL(114, 1898, 15), // "closeFindDialog"
QT_MOC_LITERAL(115, 1914, 18), // "showStartAppDialog"
QT_MOC_LITERAL(116, 1933, 19), // "closeStartAppDialog"
QT_MOC_LITERAL(117, 1953, 8), // "startApp"
QT_MOC_LITERAL(118, 1962, 31), // "startAppDialogEnableStartButton"
QT_MOC_LITERAL(119, 1994, 25), // "startAppDialogReturnPress"
QT_MOC_LITERAL(120, 2020, 21), // "receiveTDriverMessage"
QT_MOC_LITERAL(121, 2042, 6), // "seqNum"
QT_MOC_LITERAL(122, 2049, 4), // "name"
QT_MOC_LITERAL(123, 2054, 9), // "BAListMap"
QT_MOC_LITERAL(124, 2064, 5), // "reply"
QT_MOC_LITERAL(125, 2070, 18), // "messageTimeoutSlot"
QT_MOC_LITERAL(126, 2089, 25) // "resetMessageSequenceFlags"

    },
    "MainWindow\0defaultFontSet\0\0font\0"
    "insertToCodeEditor\0text\0prependParent\0"
    "prependDot\0disconnectionOk\0disconnected\0"
    "refreshScreenshotObjectList\0statusbar\0"
    "currentProgressValue\0maxProgressValue\0"
    "timeout\0handleRbiError\0title\0details\0"
    "restoreDefaultLayout\0settingsSaveLayouts\0"
    "settingsLoadLayouts\0saveALayout\0"
    "QAction*\0layoutSaveAction\0restoreALayout\0"
    "layoutSetAction\0tdriverMsgSetTitleText\0"
    "tdriverMsgOkClicked\0tdriverMsgFinished\0"
    "tdriverMsgAppend\0message\0"
    "collapseTreeWidgetItem\0QTreeWidgetItem*\0"
    "item\0expandTreeWidgetItem\0tabWidgetChanged\0"
    "currentTableWidget\0methodItemPressed\0"
    "QTableWidgetItem*\0propertiesItemPressed\0"
    "apiItemPressed\0showMainVisualizerAssistant\0"
    "showContextVisualizerAssistant\0page\0"
    "showVisualizerHelp\0showVisualizerQtWindowsHelp\0"
    "showVisualizerQtLinuxHelp\0"
    "showVisualizerQtSymbianHelp\0"
    "showAboutVisualizer\0createAppsBar\0"
    "createShortcutsBar\0createClipboardBar\0"
    "updateClipboardText\0appendText\0"
    "changePropertiesTableValue\0"
    "delayedRefreshData\0forceRefreshData\0"
    "forceRefreshApps\0sendAppListRequest\0"
    "refreshAfter\0constructRefreshCmd\0"
    "command\0sendImageRequest\0sendUiDumpRequest\0"
    "startRefreshSequence\0refreshAppearance\0"
    "objectViewItemClicked\0column\0"
    "objectViewItemAction\0ContextMenuSelection\0"
    "action\0method\0objectViewCurrentItemChanged\0"
    "itemCurrent\0itemPrevious\0getParameterXML\0"
    "loadStateByDialog\0loadStateFromHistoryDir\0"
    "dirPath\0loadStateFromDir\0"
    "historySaveCurrentState\0saveStateAsArchive\0"
    "clickedImage\0openFontDialog\0disconnectSUT\0"
    "disconnectExclusiveSUT\0objectTreeExpandAll\0"
    "objectTreeCollapseAll\0showXMLDialog\0"
    "imageInspectFindItem\0imageInsertFindItem\0"
    "imageInsertCoords\0imageInsertObjectFromId\0"
    "TestObjectKey\0id\0imageInspectFromId\0"
    "imageTapFromId\0changeImageResize\0"
    "resize\0changeImageLeftClick\0index\0"
    "appSelected\0deviceSelected\0openRecordWindow\0"
    "findStringFromXml\0closeXmlDialog\0"
    "showXmlEditTextChanged\0showFindDialog\0"
    "findNextTreeObject\0findDialogTextChanged\0"
    "findDialogHandleTreeCurrentChange\0"
    "current\0findDialogSubtreeChanged\0value\0"
    "closeFindDialog\0showStartAppDialog\0"
    "closeStartAppDialog\0startApp\0"
    "startAppDialogEnableStartButton\0"
    "startAppDialogReturnPress\0"
    "receiveTDriverMessage\0seqNum\0name\0"
    "BAListMap\0reply\0messageTimeoutSlot\0"
    "resetMessageSequenceFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      93,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  479,    2, 0x06 /* Public */,
       4,    3,  482,    2, 0x06 /* Public */,
       8,    1,  489,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  492,    2, 0x0a /* Public */,
      11,    4,  493,    2, 0x0a /* Public */,
      11,    3,  502,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  509,    2, 0x0a /* Public */,
      11,    1,  514,    2, 0x2a /* Public | MethodCloned */,
      15,    3,  517,    2, 0x0a /* Public */,
      18,    0,  524,    2, 0x08 /* Private */,
      19,    0,  525,    2, 0x08 /* Private */,
      20,    0,  526,    2, 0x08 /* Private */,
      21,    1,  527,    2, 0x08 /* Private */,
      21,    0,  530,    2, 0x28 /* Private | MethodCloned */,
      24,    1,  531,    2, 0x08 /* Private */,
      24,    0,  534,    2, 0x28 /* Private | MethodCloned */,
      26,    0,  535,    2, 0x08 /* Private */,
      27,    0,  536,    2, 0x08 /* Private */,
      28,    0,  537,    2, 0x08 /* Private */,
      29,    1,  538,    2, 0x08 /* Private */,
      31,    1,  541,    2, 0x08 /* Private */,
      34,    1,  544,    2, 0x08 /* Private */,
      35,    1,  547,    2, 0x08 /* Private */,
      37,    1,  550,    2, 0x08 /* Private */,
      39,    1,  553,    2, 0x08 /* Private */,
      40,    1,  556,    2, 0x08 /* Private */,
      41,    0,  559,    2, 0x08 /* Private */,
      42,    1,  560,    2, 0x08 /* Private */,
      44,    0,  563,    2, 0x08 /* Private */,
      45,    0,  564,    2, 0x08 /* Private */,
      46,    0,  565,    2, 0x08 /* Private */,
      47,    0,  566,    2, 0x08 /* Private */,
      48,    0,  567,    2, 0x08 /* Private */,
      49,    0,  568,    2, 0x08 /* Private */,
      50,    0,  569,    2, 0x08 /* Private */,
      51,    0,  570,    2, 0x08 /* Private */,
      52,    2,  571,    2, 0x08 /* Private */,
      54,    1,  576,    2, 0x08 /* Private */,
      55,    0,  579,    2, 0x08 /* Private */,
      56,    0,  580,    2, 0x08 /* Private */,
      57,    0,  581,    2, 0x08 /* Private */,
      58,    1,  582,    2, 0x08 /* Private */,
      60,    1,  585,    2, 0x08 /* Private */,
      62,    0,  588,    2, 0x08 /* Private */,
      63,    0,  589,    2, 0x08 /* Private */,
      64,    0,  590,    2, 0x08 /* Private */,
      65,    0,  591,    2, 0x08 /* Private */,
      66,    2,  592,    2, 0x08 /* Private */,
      68,    4,  597,    2, 0x08 /* Private */,
      68,    3,  606,    2, 0x28 /* Private | MethodCloned */,
      72,    2,  613,    2, 0x08 /* Private */,
      75,    0,  618,    2, 0x08 /* Private */,
      76,    0,  619,    2, 0x08 /* Private */,
      77,    1,  620,    2, 0x08 /* Private */,
      79,    1,  623,    2, 0x08 /* Private */,
      80,    0,  626,    2, 0x08 /* Private */,
      81,    0,  627,    2, 0x08 /* Private */,
      82,    0,  628,    2, 0x08 /* Private */,
      83,    0,  629,    2, 0x08 /* Private */,
      84,    0,  630,    2, 0x08 /* Private */,
      85,    0,  631,    2, 0x08 /* Private */,
      86,    0,  632,    2, 0x08 /* Private */,
      87,    0,  633,    2, 0x08 /* Private */,
      88,    0,  634,    2, 0x08 /* Private */,
      89,    0,  635,    2, 0x08 /* Private */,
      90,    0,  636,    2, 0x08 /* Private */,
      91,    0,  637,    2, 0x08 /* Private */,
      92,    1,  638,    2, 0x08 /* Private */,
      95,    1,  641,    2, 0x08 /* Private */,
      96,    1,  644,    2, 0x08 /* Private */,
      97,    1,  647,    2, 0x08 /* Private */,
      99,    1,  650,    2, 0x08 /* Private */,
     101,    0,  653,    2, 0x08 /* Private */,
     102,    0,  654,    2, 0x08 /* Private */,
     103,    0,  655,    2, 0x08 /* Private */,
     104,    0,  656,    2, 0x08 /* Private */,
     105,    0,  657,    2, 0x08 /* Private */,
     106,    1,  658,    2, 0x08 /* Private */,
     107,    0,  661,    2, 0x08 /* Private */,
     108,    0,  662,    2, 0x08 /* Private */,
     109,    1,  663,    2, 0x08 /* Private */,
     110,    1,  666,    2, 0x08 /* Private */,
     112,    1,  669,    2, 0x08 /* Private */,
     114,    0,  672,    2, 0x08 /* Private */,
     115,    0,  673,    2, 0x08 /* Private */,
     116,    0,  674,    2, 0x08 /* Private */,
     117,    0,  675,    2, 0x08 /* Private */,
     118,    1,  676,    2, 0x08 /* Private */,
     119,    0,  679,    2, 0x08 /* Private */,
     120,    3,  680,    2, 0x08 /* Private */,
     120,    2,  687,    2, 0x28 /* Private | MethodCloned */,
     125,    0,  692,    2, 0x08 /* Private */,
     126,    0,  693,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,   14,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,    5,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, 0x80000000 | 38,   33,
    QMetaType::Void, 0x80000000 | 38,   33,
    QMetaType::Void, 0x80000000 | 38,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,   53,
    QMetaType::Void, 0x80000000 | 38,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::QStringList, QMetaType::QString,   61,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32, QMetaType::Int,   33,   67,
    QMetaType::Void, 0x80000000 | 32, QMetaType::Int, 0x80000000 | 69, QMetaType::QString,   33,   67,   70,   71,
    QMetaType::Void, 0x80000000 | 32, QMetaType::Int, 0x80000000 | 69,   33,   67,   70,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 32,   73,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, QMetaType::Bool,   98,
    QMetaType::Void, QMetaType::Int,  100,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 32,  111,
    QMetaType::Void, QMetaType::Int,  113,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray, 0x80000000 | 123,  121,  122,  124,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray,  121,  122,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultFontSet((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: _t->insertToCodeEditor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->disconnectionOk((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->refreshScreenshotObjectList(); break;
        case 4: _t->statusbar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->statusbar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->statusbar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->statusbar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->handleRbiError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->restoreDefaultLayout(); break;
        case 10: _t->settingsSaveLayouts(); break;
        case 11: _t->settingsLoadLayouts(); break;
        case 12: _t->saveALayout((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->saveALayout(); break;
        case 14: _t->restoreALayout((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->restoreALayout(); break;
        case 16: _t->tdriverMsgSetTitleText(); break;
        case 17: _t->tdriverMsgOkClicked(); break;
        case 18: _t->tdriverMsgFinished(); break;
        case 19: _t->tdriverMsgAppend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->collapseTreeWidgetItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->expandTreeWidgetItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 22: _t->tabWidgetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->methodItemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 24: _t->propertiesItemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 25: _t->apiItemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 26: _t->showMainVisualizerAssistant(); break;
        case 27: _t->showContextVisualizerAssistant((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->showVisualizerHelp(); break;
        case 29: _t->showVisualizerQtWindowsHelp(); break;
        case 30: _t->showVisualizerQtLinuxHelp(); break;
        case 31: _t->showVisualizerQtSymbianHelp(); break;
        case 32: _t->showAboutVisualizer(); break;
        case 33: _t->createAppsBar(); break;
        case 34: _t->createShortcutsBar(); break;
        case 35: _t->createClipboardBar(); break;
        case 36: _t->updateClipboardText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->changePropertiesTableValue((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 38: _t->delayedRefreshData(); break;
        case 39: _t->forceRefreshData(); break;
        case 40: _t->forceRefreshApps(); break;
        case 41: _t->sendAppListRequest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: { QStringList _r = _t->constructRefreshCmd((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->sendImageRequest();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->sendUiDumpRequest();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->startRefreshSequence(); break;
        case 46: _t->refreshAppearance(); break;
        case 47: _t->objectViewItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->objectViewItemAction((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< ContextMenuSelection(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 49: _t->objectViewItemAction((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< ContextMenuSelection(*)>(_a[3]))); break;
        case 50: _t->objectViewCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 51: _t->getParameterXML(); break;
        case 52: _t->loadStateByDialog(); break;
        case 53: _t->loadStateFromHistoryDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->loadStateFromDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->historySaveCurrentState(); break;
        case 56: _t->saveStateAsArchive(); break;
        case 57: _t->clickedImage(); break;
        case 58: _t->openFontDialog(); break;
        case 59: { bool _r = _t->disconnectSUT();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->disconnectExclusiveSUT();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: _t->objectTreeExpandAll(); break;
        case 62: _t->objectTreeCollapseAll(); break;
        case 63: _t->showXMLDialog(); break;
        case 64: _t->imageInspectFindItem(); break;
        case 65: _t->imageInsertFindItem(); break;
        case 66: _t->imageInsertCoords(); break;
        case 67: _t->imageInsertObjectFromId((*reinterpret_cast< TestObjectKey(*)>(_a[1]))); break;
        case 68: _t->imageInspectFromId((*reinterpret_cast< TestObjectKey(*)>(_a[1]))); break;
        case 69: _t->imageTapFromId((*reinterpret_cast< TestObjectKey(*)>(_a[1]))); break;
        case 70: _t->changeImageResize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->changeImageLeftClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->appSelected(); break;
        case 73: _t->deviceSelected(); break;
        case 74: _t->openRecordWindow(); break;
        case 75: _t->findStringFromXml(); break;
        case 76: _t->closeXmlDialog(); break;
        case 77: _t->showXmlEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 78: _t->showFindDialog(); break;
        case 79: _t->findNextTreeObject(); break;
        case 80: _t->findDialogTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 81: _t->findDialogHandleTreeCurrentChange((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 82: _t->findDialogSubtreeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->closeFindDialog(); break;
        case 84: _t->showStartAppDialog(); break;
        case 85: _t->closeStartAppDialog(); break;
        case 86: _t->startApp(); break;
        case 87: _t->startAppDialogEnableStartButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 88: _t->startAppDialogReturnPress(); break;
        case 89: _t->receiveTDriverMessage((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< const BAListMap(*)>(_a[3]))); break;
        case 90: _t->receiveTDriverMessage((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 91: _t->messageTimeoutSlot(); break;
        case 92: _t->resetMessageSequenceFlags(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QFont );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::defaultFontSet)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::insertToCodeEditor)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::disconnectionOk)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 93)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 93;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 93)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 93;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::defaultFontSet(QFont _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::insertToCodeEditor(QString _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::disconnectionOk(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
