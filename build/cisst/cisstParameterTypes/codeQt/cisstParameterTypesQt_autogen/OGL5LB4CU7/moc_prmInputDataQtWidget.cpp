/****************************************************************************
** Meta object code from reading C++ file 'prmInputDataQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstParameterTypes/prmInputDataQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prmInputDataQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_prmInputDataQtWidget_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_prmInputDataQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_prmInputDataQtWidget_t qt_meta_stringdata_prmInputDataQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "prmInputDataQtWidget"
QT_MOC_LITERAL(1, 21, 13), // "SlotPlotIndex"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7) // "newAxis"

    },
    "prmInputDataQtWidget\0SlotPlotIndex\0\0"
    "newAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmInputDataQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void prmInputDataQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<prmInputDataQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotPlotIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject prmInputDataQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_prmInputDataQtWidget.data,
    qt_meta_data_prmInputDataQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *prmInputDataQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmInputDataQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_prmInputDataQtWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int prmInputDataQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_prmInputDataQtWidgetComponent_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_prmInputDataQtWidgetComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_prmInputDataQtWidgetComponent_t qt_meta_stringdata_prmInputDataQtWidgetComponent = {
    {
QT_MOC_LITERAL(0, 0, 29), // "prmInputDataQtWidgetComponent"
QT_MOC_LITERAL(1, 30, 20), // "SignalInputDataEvent"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "prmInputData"
QT_MOC_LITERAL(4, 65, 10), // "timerEvent"
QT_MOC_LITERAL(5, 76, 12), // "QTimerEvent*"
QT_MOC_LITERAL(6, 89, 5), // "event"
QT_MOC_LITERAL(7, 95, 18) // "SlotInputDataEvent"

    },
    "prmInputDataQtWidgetComponent\0"
    "SignalInputDataEvent\0\0prmInputData\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "SlotInputDataEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmInputDataQtWidgetComponent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void prmInputDataQtWidgetComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<prmInputDataQtWidgetComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalInputDataEvent((*reinterpret_cast< prmInputData(*)>(_a[1]))); break;
        case 1: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 2: _t->SlotInputDataEvent((*reinterpret_cast< prmInputData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< prmInputData >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< prmInputData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (prmInputDataQtWidgetComponent::*)(prmInputData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&prmInputDataQtWidgetComponent::SignalInputDataEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject prmInputDataQtWidgetComponent::staticMetaObject = { {
    &prmInputDataQtWidget::staticMetaObject,
    qt_meta_stringdata_prmInputDataQtWidgetComponent.data,
    qt_meta_data_prmInputDataQtWidgetComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *prmInputDataQtWidgetComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmInputDataQtWidgetComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_prmInputDataQtWidgetComponent.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return prmInputDataQtWidget::qt_metacast(_clname);
}

int prmInputDataQtWidgetComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = prmInputDataQtWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void prmInputDataQtWidgetComponent::SignalInputDataEvent(prmInputData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
