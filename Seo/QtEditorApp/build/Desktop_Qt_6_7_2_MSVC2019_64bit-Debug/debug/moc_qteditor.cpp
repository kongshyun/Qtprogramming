/****************************************************************************
** Meta object code from reading C++ file 'qteditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qteditor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtEditorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQtEditorENDCLASS = QtMocHelpers::stringData(
    "QtEditor",
    "newFile",
    "QTextEdit*",
    "",
    "openFile",
    "saveFile",
    "saveasFile",
    "printFile",
    "undo",
    "redo",
    "copy",
    "cut",
    "paste",
    "zoomIn",
    "zoomOut",
    "setFontWidget",
    "setTextFont",
    "font",
    "setTextSize",
    "size"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtEditorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    3, 0x08,    1 /* Private */,
       4,    0,  105,    3, 0x08,    2 /* Private */,
       5,    0,  106,    3, 0x08,    3 /* Private */,
       6,    0,  107,    3, 0x08,    4 /* Private */,
       7,    0,  108,    3, 0x08,    5 /* Private */,
       8,    0,  109,    3, 0x08,    6 /* Private */,
       9,    0,  110,    3, 0x08,    7 /* Private */,
      10,    0,  111,    3, 0x08,    8 /* Private */,
      11,    0,  112,    3, 0x08,    9 /* Private */,
      12,    0,  113,    3, 0x08,   10 /* Private */,
      13,    0,  114,    3, 0x08,   11 /* Private */,
      14,    0,  115,    3, 0x08,   12 /* Private */,
      15,    0,  116,    3, 0x08,   13 /* Private */,
      16,    1,  117,    3, 0x08,   14 /* Private */,
      18,    1,  120,    3, 0x08,   16 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,   17,
    QMetaType::Void, QMetaType::QReal,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtEditorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtEditorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtEditorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtEditor, std::true_type>,
        // method 'newFile'
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveasFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFontWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTextFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'setTextSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void QtEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QTextEdit* _r = _t->newFile();
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->openFile(); break;
        case 2: _t->saveFile(); break;
        case 3: _t->saveasFile(); break;
        case 4: _t->printFile(); break;
        case 5: _t->undo(); break;
        case 6: _t->redo(); break;
        case 7: _t->copy(); break;
        case 8: _t->cut(); break;
        case 9: _t->paste(); break;
        case 10: _t->zoomIn(); break;
        case 11: _t->zoomOut(); break;
        case 12: _t->setFontWidget(); break;
        case 13: _t->setTextFont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 14: _t->setTextSize((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtEditorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
