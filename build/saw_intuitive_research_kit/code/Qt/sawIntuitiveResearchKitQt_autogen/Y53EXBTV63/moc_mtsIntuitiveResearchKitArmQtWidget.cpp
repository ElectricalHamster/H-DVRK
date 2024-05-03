/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitArmQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawIntuitiveResearchKit/mtsIntuitiveResearchKitArmQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitArmQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t {
    QByteArrayData data[15];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mtsIntuitiveResearchKitArmQtW..."
QT_MOC_LITERAL(1, 35, 18), // "SignalDesiredState"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "state"
QT_MOC_LITERAL(4, 61, 26), // "SignalTrajectoryJointRatio"
QT_MOC_LITERAL(5, 88, 5), // "ratio"
QT_MOC_LITERAL(6, 94, 10), // "timerEvent"
QT_MOC_LITERAL(7, 105, 12), // "QTimerEvent*"
QT_MOC_LITERAL(8, 118, 5), // "event"
QT_MOC_LITERAL(9, 124, 28), // "SlotDesiredStateEventHandler"
QT_MOC_LITERAL(10, 153, 24), // "SlotTrajectoryJointRatio"
QT_MOC_LITERAL(11, 178, 36), // "SlotTrajectoryJointRatioEvent..."
QT_MOC_LITERAL(12, 215, 14), // "SlotLogEnabled"
QT_MOC_LITERAL(13, 230, 23), // "SlotEnableDirectControl"
QT_MOC_LITERAL(14, 254, 6) // "toggle"

    },
    "mtsIntuitiveResearchKitArmQtWidget\0"
    "SignalDesiredState\0\0state\0"
    "SignalTrajectoryJointRatio\0ratio\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "SlotDesiredStateEventHandler\0"
    "SlotTrajectoryJointRatio\0"
    "SlotTrajectoryJointRatioEventHandler\0"
    "SlotLogEnabled\0SlotEnableDirectControl\0"
    "toggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitArmQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void mtsIntuitiveResearchKitArmQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsIntuitiveResearchKitArmQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalTrajectoryJointRatio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 3: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SlotTrajectoryJointRatio((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->SlotTrajectoryJointRatioEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->SlotLogEnabled(); break;
        case 7: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsIntuitiveResearchKitArmQtWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalDesiredState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mtsIntuitiveResearchKitArmQtWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalTrajectoryJointRatio)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsIntuitiveResearchKitArmQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.data,
    qt_meta_data_mtsIntuitiveResearchKitArmQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsIntuitiveResearchKitArmQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitArmQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitArmQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mtsIntuitiveResearchKitArmQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsIntuitiveResearchKitArmQtWidget::SignalTrajectoryJointRatio(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
