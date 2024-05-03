/****************************************************************************
** Meta object code from reading C++ file 'vctQtWidgetDynamicVector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstVector/vctQtWidgetDynamicVector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vctQtWidgetDynamicVector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase_t qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase = {
    {
QT_MOC_LITERAL(0, 0, 32) // "vctQtWidgetDynamicVectorReadBase"

    },
    "vctQtWidgetDynamicVectorReadBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorReadBase[] = {

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

void vctQtWidgetDynamicVectorReadBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject vctQtWidgetDynamicVectorReadBase::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase.data,
    qt_meta_data_vctQtWidgetDynamicVectorReadBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vctQtWidgetDynamicVectorReadBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorReadBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorReadBase.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorReadBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase_t qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase = {
    {
QT_MOC_LITERAL(0, 0, 33), // "vctQtWidgetDynamicVectorWrite..."
QT_MOC_LITERAL(1, 34, 12), // "valueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "SliderValueChangedSlot"
QT_MOC_LITERAL(4, 71, 5), // "value"
QT_MOC_LITERAL(5, 77, 32), // "DoubleSpinBoxEditingFinishedSlot"
QT_MOC_LITERAL(6, 110, 26), // "SpinBoxEditingFinishedSlot"
QT_MOC_LITERAL(7, 137, 15), // "ItemChangedSlot"
QT_MOC_LITERAL(8, 153, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 171, 4) // "item"

    },
    "vctQtWidgetDynamicVectorWriteBase\0"
    "valueChanged\0\0SliderValueChangedSlot\0"
    "value\0DoubleSpinBoxEditingFinishedSlot\0"
    "SpinBoxEditingFinishedSlot\0ItemChangedSlot\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorWriteBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    0,   43,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void vctQtWidgetDynamicVectorWriteBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vctQtWidgetDynamicVectorWriteBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->SliderValueChangedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->DoubleSpinBoxEditingFinishedSlot(); break;
        case 3: _t->SpinBoxEditingFinishedSlot(); break;
        case 4: _t->ItemChangedSlot((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (vctQtWidgetDynamicVectorWriteBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vctQtWidgetDynamicVectorWriteBase::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vctQtWidgetDynamicVectorWriteBase::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase.data,
    qt_meta_data_vctQtWidgetDynamicVectorWriteBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vctQtWidgetDynamicVectorWriteBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorWriteBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorWriteBase.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorWriteBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void vctQtWidgetDynamicVectorWriteBase::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite_t qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite = {
    {
QT_MOC_LITERAL(0, 0, 33), // "vctQtWidgetDynamicVectorBoolW..."
QT_MOC_LITERAL(1, 34, 12), // "valueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "ValueChangedSlot"
QT_MOC_LITERAL(4, 65, 5) // "value"

    },
    "vctQtWidgetDynamicVectorBoolWrite\0"
    "valueChanged\0\0ValueChangedSlot\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctQtWidgetDynamicVectorBoolWrite[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void vctQtWidgetDynamicVectorBoolWrite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vctQtWidgetDynamicVectorBoolWrite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->valueChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->ValueChangedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (vctQtWidgetDynamicVectorBoolWrite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vctQtWidgetDynamicVectorBoolWrite::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vctQtWidgetDynamicVectorBoolWrite::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite.data,
    qt_meta_data_vctQtWidgetDynamicVectorBoolWrite,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vctQtWidgetDynamicVectorBoolWrite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctQtWidgetDynamicVectorBoolWrite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vctQtWidgetDynamicVectorBoolWrite.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int vctQtWidgetDynamicVectorBoolWrite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
bool vctQtWidgetDynamicVectorBoolWrite::valueChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
