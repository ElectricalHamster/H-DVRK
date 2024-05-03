/****************************************************************************
** Meta object code from reading C++ file 'mtsTeleOperationECMQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawIntuitiveResearchKit/mtsTeleOperationECMQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsTeleOperationECMQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsTeleOperationECMQtWidget_t {
    QByteArrayData data[18];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsTeleOperationECMQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsTeleOperationECMQtWidget_t qt_meta_stringdata_mtsTeleOperationECMQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mtsTeleOperationECMQtWidget"
QT_MOC_LITERAL(1, 28, 18), // "SignalDesiredState"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "state"
QT_MOC_LITERAL(4, 54, 18), // "SignalCurrentState"
QT_MOC_LITERAL(5, 73, 15), // "SignalFollowing"
QT_MOC_LITERAL(6, 89, 9), // "following"
QT_MOC_LITERAL(7, 99, 11), // "SignalScale"
QT_MOC_LITERAL(8, 111, 5), // "scale"
QT_MOC_LITERAL(9, 117, 10), // "timerEvent"
QT_MOC_LITERAL(10, 128, 12), // "QTimerEvent*"
QT_MOC_LITERAL(11, 141, 5), // "event"
QT_MOC_LITERAL(12, 147, 14), // "SlotLogEnabled"
QT_MOC_LITERAL(13, 162, 28), // "SlotDesiredStateEventHandler"
QT_MOC_LITERAL(14, 191, 28), // "SlotCurrentStateEventHandler"
QT_MOC_LITERAL(15, 220, 12), // "SlotSetScale"
QT_MOC_LITERAL(16, 233, 25), // "SlotFollowingEventHandler"
QT_MOC_LITERAL(17, 259, 21) // "SlotScaleEventHandler"

    },
    "mtsTeleOperationECMQtWidget\0"
    "SignalDesiredState\0\0state\0SignalCurrentState\0"
    "SignalFollowing\0following\0SignalScale\0"
    "scale\0timerEvent\0QTimerEvent*\0event\0"
    "SlotLogEnabled\0SlotDesiredStateEventHandler\0"
    "SlotCurrentStateEventHandler\0SlotSetScale\0"
    "SlotFollowingEventHandler\0"
    "SlotScaleEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsTeleOperationECMQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,
      16,    1,   94,    2, 0x08 /* Private */,
      17,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void mtsTeleOperationECMQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsTeleOperationECMQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalCurrentState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SignalFollowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 5: _t->SlotLogEnabled(); break;
        case 6: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SlotCurrentStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SlotFollowingEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsTeleOperationECMQtWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalDesiredState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mtsTeleOperationECMQtWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalCurrentState)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mtsTeleOperationECMQtWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalFollowing)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mtsTeleOperationECMQtWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalScale)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsTeleOperationECMQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsTeleOperationECMQtWidget.data,
    qt_meta_data_mtsTeleOperationECMQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsTeleOperationECMQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsTeleOperationECMQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsTeleOperationECMQtWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsTeleOperationECMQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void mtsTeleOperationECMQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsTeleOperationECMQtWidget::SignalCurrentState(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsTeleOperationECMQtWidget::SignalFollowing(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsTeleOperationECMQtWidget::SignalScale(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
