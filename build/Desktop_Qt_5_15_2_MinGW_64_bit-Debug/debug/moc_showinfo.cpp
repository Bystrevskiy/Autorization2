/****************************************************************************
** Meta object code from reading C++ file 'showinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../showinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShowInfo_t {
    QByteArrayData data[17];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShowInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShowInfo_t qt_meta_stringdata_ShowInfo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ShowInfo"
QT_MOC_LITERAL(1, 9, 16), // "applyColorScheme"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "stylesheet"
QT_MOC_LITERAL(4, 38, 4), // "slot"
QT_MOC_LITERAL(5, 43, 1), // "a"
QT_MOC_LITERAL(6, 45, 12), // "loadSettings"
QT_MOC_LITERAL(7, 58, 8), // "slotname"
QT_MOC_LITERAL(8, 67, 4), // "name"
QT_MOC_LITERAL(9, 72, 11), // "mobilephone"
QT_MOC_LITERAL(10, 84, 4), // "mail"
QT_MOC_LITERAL(11, 89, 10), // "department"
QT_MOC_LITERAL(12, 100, 3), // "car"
QT_MOC_LITERAL(13, 104, 10), // "tablenomer"
QT_MOC_LITERAL(14, 115, 8), // "doljnost"
QT_MOC_LITERAL(15, 124, 8), // "lasttime"
QT_MOC_LITERAL(16, 133, 8) // "lastdate"

    },
    "ShowInfo\0applyColorScheme\0\0stylesheet\0"
    "slot\0a\0loadSettings\0slotname\0name\0"
    "mobilephone\0mail\0department\0car\0"
    "tablenomer\0doljnost\0lasttime\0lastdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    9,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPixmap,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,   11,   12,   13,   14,   15,   16,

       0        // eod
};

void ShowInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slot((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->slotname((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShowInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ShowInfo.data,
    qt_meta_data_ShowInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShowInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowInfo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShowInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
