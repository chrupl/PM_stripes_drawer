/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Test_Image_Creator_RC/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[531];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 36), // "on_pushButtonOpenImageFolder_..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 41), // "on_listWidgetImageFiles_curre..."
QT_MOC_LITERAL(4, 91, 10), // "currentRow"
QT_MOC_LITERAL(5, 102, 36), // "on_pushButtonProcessAllFiles_..."
QT_MOC_LITERAL(6, 139, 28), // "on_checkBoxShowInput_toggled"
QT_MOC_LITERAL(7, 168, 7), // "checked"
QT_MOC_LITERAL(8, 176, 39), // "on_doubleSpinBoxImageScale_va..."
QT_MOC_LITERAL(9, 216, 4), // "arg1"
QT_MOC_LITERAL(10, 221, 32), // "on_pushButtonCreateImage_clicked"
QT_MOC_LITERAL(11, 254, 34), // "on_pushButtonTestImageLine_cl..."
QT_MOC_LITERAL(12, 289, 36), // "on_spinBoxTestImageLine_value..."
QT_MOC_LITERAL(13, 326, 32), // "on_spinBox_screen_x_valueChanged"
QT_MOC_LITERAL(14, 359, 32), // "on_spinBox_screen_y_valueChanged"
QT_MOC_LITERAL(15, 392, 38), // "on_spinBoxTestImageLine_2_val..."
QT_MOC_LITERAL(16, 431, 29), // "on_spinBox_width_valueChanged"
QT_MOC_LITERAL(17, 461, 29), // "on_spinBox_angle_valueChanged"
QT_MOC_LITERAL(18, 491, 39) // "on_spinBox_draw_every_line_va..."

    },
    "MainWindow\0on_pushButtonOpenImageFolder_clicked\0"
    "\0on_listWidgetImageFiles_currentRowChanged\0"
    "currentRow\0on_pushButtonProcessAllFiles_clicked\0"
    "on_checkBoxShowInput_toggled\0checked\0"
    "on_doubleSpinBoxImageScale_valueChanged\0"
    "arg1\0on_pushButtonCreateImage_clicked\0"
    "on_pushButtonTestImageLine_clicked\0"
    "on_spinBoxTestImageLine_valueChanged\0"
    "on_spinBox_screen_x_valueChanged\0"
    "on_spinBox_screen_y_valueChanged\0"
    "on_spinBoxTestImageLine_2_valueChanged\0"
    "on_spinBox_width_valueChanged\0"
    "on_spinBox_angle_valueChanged\0"
    "on_spinBox_draw_every_line_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonOpenImageFolder_clicked(); break;
        case 1: _t->on_listWidgetImageFiles_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonProcessAllFiles_clicked(); break;
        case 3: _t->on_checkBoxShowInput_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_doubleSpinBoxImageScale_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonCreateImage_clicked(); break;
        case 6: _t->on_pushButtonTestImageLine_clicked(); break;
        case 7: _t->on_spinBoxTestImageLine_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinBox_screen_x_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_spinBox_screen_y_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_spinBoxTestImageLine_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_spinBox_width_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_spinBox_angle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_spinBox_draw_every_line_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
