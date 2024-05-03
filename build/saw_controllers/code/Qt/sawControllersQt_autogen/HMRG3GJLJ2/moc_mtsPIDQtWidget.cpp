/****************************************************************************
** Meta object code from reading C++ file 'mtsPIDQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawControllers/mtsPIDQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsPIDQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsPIDQtWidget_t {
    QByteArrayData data[21];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsPIDQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsPIDQtWidget_t qt_meta_stringdata_mtsPIDQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "mtsPIDQtWidget"
QT_MOC_LITERAL(1, 15, 12), // "SignalEnable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "enable"
QT_MOC_LITERAL(4, 36, 10), // "SlotEnable"
QT_MOC_LITERAL(5, 47, 6), // "toggle"
QT_MOC_LITERAL(6, 54, 24), // "SlotEnabledJointsChanged"
QT_MOC_LITERAL(7, 79, 23), // "SlotEnableTrackingError"
QT_MOC_LITERAL(8, 103, 19), // "SlotPositionChanged"
QT_MOC_LITERAL(9, 123, 16), // "SlotPGainChanged"
QT_MOC_LITERAL(10, 140, 16), // "SlotDGainChanged"
QT_MOC_LITERAL(11, 157, 16), // "SlotIGainChanged"
QT_MOC_LITERAL(12, 174, 20), // "SlotMaintainPosition"
QT_MOC_LITERAL(13, 195, 16), // "SlotResetPIDGain"
QT_MOC_LITERAL(14, 212, 13), // "SlotPlotIndex"
QT_MOC_LITERAL(15, 226, 7), // "newAxis"
QT_MOC_LITERAL(16, 234, 22), // "SlotEnableEventHandler"
QT_MOC_LITERAL(17, 257, 23), // "SlotEnableDirectControl"
QT_MOC_LITERAL(18, 281, 10), // "timerEvent"
QT_MOC_LITERAL(19, 292, 12), // "QTimerEvent*"
QT_MOC_LITERAL(20, 305, 5) // "event"

    },
    "mtsPIDQtWidget\0SignalEnable\0\0enable\0"
    "SlotEnable\0toggle\0SlotEnabledJointsChanged\0"
    "SlotEnableTrackingError\0SlotPositionChanged\0"
    "SlotPGainChanged\0SlotDGainChanged\0"
    "SlotIGainChanged\0SlotMaintainPosition\0"
    "SlotResetPIDGain\0SlotPlotIndex\0newAxis\0"
    "SlotEnableEventHandler\0SlotEnableDirectControl\0"
    "timerEvent\0QTimerEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsPIDQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   87,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      16,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void mtsPIDQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsPIDQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SlotEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SlotEnabledJointsChanged(); break;
        case 3: _t->SlotEnableTrackingError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SlotPositionChanged(); break;
        case 5: _t->SlotPGainChanged(); break;
        case 6: _t->SlotDGainChanged(); break;
        case 7: _t->SlotIGainChanged(); break;
        case 8: _t->SlotMaintainPosition(); break;
        case 9: _t->SlotResetPIDGain(); break;
        case 10: _t->SlotPlotIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SlotEnableEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsPIDQtWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsPIDQtWidget::SignalEnable)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsPIDQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsPIDQtWidget.data,
    qt_meta_data_mtsPIDQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsPIDQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsPIDQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsPIDQtWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsPIDQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mtsPIDQtWidget::SignalEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
