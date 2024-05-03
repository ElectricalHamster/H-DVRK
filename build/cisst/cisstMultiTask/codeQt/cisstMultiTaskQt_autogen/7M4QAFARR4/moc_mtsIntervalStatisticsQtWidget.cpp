/****************************************************************************
** Meta object code from reading C++ file 'mtsIntervalStatisticsQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsIntervalStatisticsQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntervalStatisticsQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsIntervalStatisticsQtWidget_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntervalStatisticsQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntervalStatisticsQtWidget_t qt_meta_stringdata_mtsIntervalStatisticsQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 29) // "mtsIntervalStatisticsQtWidget"

    },
    "mtsIntervalStatisticsQtWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntervalStatisticsQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mtsIntervalStatisticsQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsIntervalStatisticsQtWidget::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_mtsIntervalStatisticsQtWidget.data,
    qt_meta_data_mtsIntervalStatisticsQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsIntervalStatisticsQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntervalStatisticsQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntervalStatisticsQtWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int mtsIntervalStatisticsQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent_t qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent = {
    {
QT_MOC_LITERAL(0, 0, 38), // "mtsIntervalStatisticsQtWidget..."
QT_MOC_LITERAL(1, 39, 10), // "timerEvent"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "QTimerEvent*"
QT_MOC_LITERAL(4, 64, 5) // "event"

    },
    "mtsIntervalStatisticsQtWidgetComponent\0"
    "timerEvent\0\0QTimerEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntervalStatisticsQtWidgetComponent[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void mtsIntervalStatisticsQtWidgetComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsIntervalStatisticsQtWidgetComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsIntervalStatisticsQtWidgetComponent::staticMetaObject = { {
    &mtsIntervalStatisticsQtWidget::staticMetaObject,
    qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent.data,
    qt_meta_data_mtsIntervalStatisticsQtWidgetComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsIntervalStatisticsQtWidgetComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntervalStatisticsQtWidgetComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntervalStatisticsQtWidgetComponent.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return mtsIntervalStatisticsQtWidget::qt_metacast(_clname);
}

int mtsIntervalStatisticsQtWidgetComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsIntervalStatisticsQtWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
