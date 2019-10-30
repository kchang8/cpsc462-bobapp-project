/****************************************************************************
** Meta object code from reading C++ file 'editmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bobapp/editmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_editMenu_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editMenu_t qt_meta_stringdata_editMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "editMenu"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_menuData_cellClicked"
QT_MOC_LITERAL(4, 56, 3), // "row"
QT_MOC_LITERAL(5, 60, 6), // "column"
QT_MOC_LITERAL(6, 67, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(7, 91, 10), // "closeEvent"
QT_MOC_LITERAL(8, 102, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 115, 5), // "event"
QT_MOC_LITERAL(10, 121, 8), // "readFile"
QT_MOC_LITERAL(11, 130, 8), // "filename"
QT_MOC_LITERAL(12, 139, 9), // "writeFile"
QT_MOC_LITERAL(13, 149, 19) // "on_saveMenu_clicked"

    },
    "editMenu\0on_pushButton_clicked\0\0"
    "on_menuData_cellClicked\0row\0column\0"
    "on_deleteButton_clicked\0closeEvent\0"
    "QCloseEvent*\0event\0readFile\0filename\0"
    "writeFile\0on_saveMenu_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,
      12,    1,   62,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void editMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<editMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_menuData_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->readFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->writeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_saveMenu_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject editMenu::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_editMenu.data,
    qt_meta_data_editMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *editMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_editMenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int editMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
