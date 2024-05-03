/****************************************************************************
** Meta object code from reading C++ file 'mtsDaVinciEndoscopeFocusQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawIntuitiveResearchKit/mtsDaVinciEndoscopeFocusQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsDaVinciEndoscopeFocusQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget_t {
    QByteArrayData data[14];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget_t qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mtsDaVinciEndoscopeFocusQtWidget"
QT_MOC_LITERAL(1, 33, 12), // "SignalLocked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 6), // "locked"
QT_MOC_LITERAL(4, 54, 16), // "SignalFocusingIn"
QT_MOC_LITERAL(5, 71, 8), // "focusing"
QT_MOC_LITERAL(6, 80, 17), // "SignalFocusingOut"
QT_MOC_LITERAL(7, 98, 8), // "SlotLock"
QT_MOC_LITERAL(8, 107, 11), // "SlotFocusIn"
QT_MOC_LITERAL(9, 119, 5), // "focus"
QT_MOC_LITERAL(10, 125, 12), // "SlotFocusOut"
QT_MOC_LITERAL(11, 138, 22), // "SlotLockedEventHandler"
QT_MOC_LITERAL(12, 161, 26), // "SlotFocusingInEventHandler"
QT_MOC_LITERAL(13, 188, 27) // "SlotFocusingOutEventHandler"

    },
    "mtsDaVinciEndoscopeFocusQtWidget\0"
    "SignalLocked\0\0locked\0SignalFocusingIn\0"
    "focusing\0SignalFocusingOut\0SlotLock\0"
    "SlotFocusIn\0focus\0SlotFocusOut\0"
    "SlotLockedEventHandler\0"
    "SlotFocusingInEventHandler\0"
    "SlotFocusingOutEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsDaVinciEndoscopeFocusQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   68,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void mtsDaVinciEndoscopeFocusQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsDaVinciEndoscopeFocusQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SignalFocusingIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SignalFocusingOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SlotLock(); break;
        case 4: _t->SlotFocusIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SlotFocusOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SlotLockedEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SlotFocusingInEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SlotFocusingOutEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsDaVinciEndoscopeFocusQtWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsDaVinciEndoscopeFocusQtWidget::SignalLocked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mtsDaVinciEndoscopeFocusQtWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsDaVinciEndoscopeFocusQtWidget::SignalFocusingIn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mtsDaVinciEndoscopeFocusQtWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsDaVinciEndoscopeFocusQtWidget::SignalFocusingOut)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsDaVinciEndoscopeFocusQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget.data,
    qt_meta_data_mtsDaVinciEndoscopeFocusQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsDaVinciEndoscopeFocusQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsDaVinciEndoscopeFocusQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsDaVinciEndoscopeFocusQtWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsDaVinciEndoscopeFocusQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mtsDaVinciEndoscopeFocusQtWidget::SignalLocked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsDaVinciEndoscopeFocusQtWidget::SignalFocusingIn(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsDaVinciEndoscopeFocusQtWidget::SignalFocusingOut(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
