/****************************************************************************
** Meta object code from reading C++ file 'prmEventButtonQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstParameterTypes/prmEventButtonQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prmEventButtonQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData_t {
    QByteArrayData data[3];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData_t qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData = {
    {
QT_MOC_LITERAL(0, 0, 42), // "prmEventButtonQtWidgetCompone..."
QT_MOC_LITERAL(1, 43, 14), // "SetValueSignal"
QT_MOC_LITERAL(2, 58, 0) // ""

    },
    "prmEventButtonQtWidgetComponent_ButtonData\0"
    "SetValueSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmEventButtonQtWidgetComponent_ButtonData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void prmEventButtonQtWidgetComponent_ButtonData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<prmEventButtonQtWidgetComponent_ButtonData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetValueSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (prmEventButtonQtWidgetComponent_ButtonData::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&prmEventButtonQtWidgetComponent_ButtonData::SetValueSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject prmEventButtonQtWidgetComponent_ButtonData::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData.data,
    qt_meta_data_prmEventButtonQtWidgetComponent_ButtonData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *prmEventButtonQtWidgetComponent_ButtonData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmEventButtonQtWidgetComponent_ButtonData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_prmEventButtonQtWidgetComponent_ButtonData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int prmEventButtonQtWidgetComponent_ButtonData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void prmEventButtonQtWidgetComponent_ButtonData::SetValueSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_prmEventButtonQtWidgetComponent_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_prmEventButtonQtWidgetComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_prmEventButtonQtWidgetComponent_t qt_meta_stringdata_prmEventButtonQtWidgetComponent = {
    {
QT_MOC_LITERAL(0, 0, 31) // "prmEventButtonQtWidgetComponent"

    },
    "prmEventButtonQtWidgetComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_prmEventButtonQtWidgetComponent[] = {

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

void prmEventButtonQtWidgetComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject prmEventButtonQtWidgetComponent::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_prmEventButtonQtWidgetComponent.data,
    qt_meta_data_prmEventButtonQtWidgetComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *prmEventButtonQtWidgetComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *prmEventButtonQtWidgetComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_prmEventButtonQtWidgetComponent.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QWidget::qt_metacast(_clname);
}

int prmEventButtonQtWidgetComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
