/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitECMQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawIntuitiveResearchKit/mtsIntuitiveResearchKitECMQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitECMQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget_t {
    QByteArrayData data[6];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mtsIntuitiveResearchKitECMQtW..."
QT_MOC_LITERAL(1, 35, 19), // "SignalEndoscopeType"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 8), // "toolType"
QT_MOC_LITERAL(4, 65, 29), // "SlotEndoscopeTypeEventHandler"
QT_MOC_LITERAL(5, 95, 25) // "SlotEndoscopeTypeSelected"

    },
    "mtsIntuitiveResearchKitECMQtWidget\0"
    "SignalEndoscopeType\0\0toolType\0"
    "SlotEndoscopeTypeEventHandler\0"
    "SlotEndoscopeTypeSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitECMQtWidget[] = {

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
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void mtsIntuitiveResearchKitECMQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsIntuitiveResearchKitECMQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalEndoscopeType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SlotEndoscopeTypeEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SlotEndoscopeTypeSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsIntuitiveResearchKitECMQtWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsIntuitiveResearchKitECMQtWidget::SignalEndoscopeType)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsIntuitiveResearchKitECMQtWidget::staticMetaObject = { {
    &mtsIntuitiveResearchKitArmQtWidget::staticMetaObject,
    qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget.data,
    qt_meta_data_mtsIntuitiveResearchKitECMQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsIntuitiveResearchKitECMQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitECMQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitECMQtWidget.stringdata0))
        return static_cast<void*>(this);
    return mtsIntuitiveResearchKitArmQtWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitECMQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsIntuitiveResearchKitArmQtWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void mtsIntuitiveResearchKitECMQtWidget::SignalEndoscopeType(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
