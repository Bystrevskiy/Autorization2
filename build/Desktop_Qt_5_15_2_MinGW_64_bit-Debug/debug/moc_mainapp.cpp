/****************************************************************************
** Meta object code from reading C++ file 'mainapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainApp_t {
    QByteArrayData data[21];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainApp_t qt_meta_stringdata_MainApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainApp"
QT_MOC_LITERAL(1, 8, 6), // "signal"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 1), // "a"
QT_MOC_LITERAL(4, 18, 10), // "signalname"
QT_MOC_LITERAL(5, 29, 4), // "name"
QT_MOC_LITERAL(6, 34, 11), // "mobilephone"
QT_MOC_LITERAL(7, 46, 4), // "mail"
QT_MOC_LITERAL(8, 51, 10), // "department"
QT_MOC_LITERAL(9, 62, 3), // "car"
QT_MOC_LITERAL(10, 66, 8), // "QString&"
QT_MOC_LITERAL(11, 75, 10), // "tablenomer"
QT_MOC_LITERAL(12, 86, 8), // "doljnost"
QT_MOC_LITERAL(13, 95, 8), // "lasttime"
QT_MOC_LITERAL(14, 104, 8), // "lastdate"
QT_MOC_LITERAL(15, 113, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(16, 146, 3), // "row"
QT_MOC_LITERAL(17, 150, 6), // "column"
QT_MOC_LITERAL(18, 157, 27), // "on_actionProducts_triggered"
QT_MOC_LITERAL(19, 185, 27), // "on_actionMessages_triggered"
QT_MOC_LITERAL(20, 213, 28) // "on_actionPersonnel_triggered"

    },
    "MainApp\0signal\0\0a\0signalname\0name\0"
    "mobilephone\0mail\0department\0car\0"
    "QString&\0tablenomer\0doljnost\0lasttime\0"
    "lastdate\0on_tableWidget_cellDoubleClicked\0"
    "row\0column\0on_actionProducts_triggered\0"
    "on_actionMessages_triggered\0"
    "on_actionPersonnel_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    9,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   66,    2, 0x08 /* Private */,
      18,    0,   71,    2, 0x08 /* Private */,
      19,    0,   72,    2, 0x08 /* Private */,
      20,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,    5,    6,    7,    8,    9,   11,   12,   13,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->signalname((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 2: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_actionProducts_triggered(); break;
        case 4: _t->on_actionMessages_triggered(); break;
        case 5: _t->on_actionPersonnel_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainApp::*)(QPixmap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainApp::signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainApp::*)(QString , QString , QString , QString , QString , QString & , QString & , QString & , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainApp::signalname)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainApp.data,
    qt_meta_data_MainApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainApp::signal(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainApp::signalname(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString & _t6, QString & _t7, QString & _t8, QString & _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
