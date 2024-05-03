/****************************************************************************
** Meta object code from reading C++ file 'mtsQtCommandSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsQtCommandSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsQtCommandSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsQtCommandSelector_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtCommandSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtCommandSelector_t qt_meta_stringdata_mtsQtCommandSelector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "mtsQtCommandSelector"
QT_MOC_LITERAL(1, 21, 15), // "CommandSelected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "command"
QT_MOC_LITERAL(4, 46, 18), // "CurrentItemChanged"
QT_MOC_LITERAL(5, 65, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 82, 7), // "current"
QT_MOC_LITERAL(7, 90, 8), // "previous"
QT_MOC_LITERAL(8, 99, 13), // "ItemActivated"
QT_MOC_LITERAL(9, 113, 4), // "item"
QT_MOC_LITERAL(10, 118, 6), // "column"
QT_MOC_LITERAL(11, 125, 7) // "Refresh"

    },
    "mtsQtCommandSelector\0CommandSelected\0"
    "\0command\0CurrentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "ItemActivated\0item\0column\0Refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtCommandSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x08 /* Private */,
       8,    2,   42,    2, 0x08 /* Private */,
      11,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    9,   10,
    QMetaType::Void,

       0        // eod
};

void mtsQtCommandSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtCommandSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CommandSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->CurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->ItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->Refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsQtCommandSelector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsQtCommandSelector::CommandSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsQtCommandSelector::staticMetaObject = { {
    &QTreeWidget::staticMetaObject,
    qt_meta_stringdata_mtsQtCommandSelector.data,
    qt_meta_data_mtsQtCommandSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtCommandSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtCommandSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtCommandSelector.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int mtsQtCommandSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mtsQtCommandSelector::CommandSelected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
