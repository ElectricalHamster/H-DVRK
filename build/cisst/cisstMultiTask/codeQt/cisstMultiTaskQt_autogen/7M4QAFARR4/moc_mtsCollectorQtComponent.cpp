/****************************************************************************
** Meta object code from reading C++ file 'mtsCollectorQtComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsCollectorQtComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsCollectorQtComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsCollectorQtComponent_t {
    QByteArrayData data[12];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsCollectorQtComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsCollectorQtComponent_t qt_meta_stringdata_mtsCollectorQtComponent = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mtsCollectorQtComponent"
QT_MOC_LITERAL(1, 24, 21), // "CollectorAddedQSignal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 24), // "CollectionStartedQSignal"
QT_MOC_LITERAL(4, 72, 24), // "CollectionStoppedQSignal"
QT_MOC_LITERAL(5, 97, 15), // "ProgressQSignal"
QT_MOC_LITERAL(6, 113, 20), // "StartCollectionQSlot"
QT_MOC_LITERAL(7, 134, 19), // "StopCollectionQSlot"
QT_MOC_LITERAL(8, 154, 22), // "StartCollectionInQSlot"
QT_MOC_LITERAL(9, 177, 21), // "StopCollectionInQSlot"
QT_MOC_LITERAL(10, 199, 24), // "SetWorkingDirectoryQSlot"
QT_MOC_LITERAL(11, 224, 23) // "SetOutputToDefaultQSlot"

    },
    "mtsCollectorQtComponent\0CollectorAddedQSignal\0"
    "\0CollectionStartedQSignal\0"
    "CollectionStoppedQSignal\0ProgressQSignal\0"
    "StartCollectionQSlot\0StopCollectionQSlot\0"
    "StartCollectionInQSlot\0StopCollectionInQSlot\0"
    "SetWorkingDirectoryQSlot\0"
    "SetOutputToDefaultQSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsCollectorQtComponent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   72,    2, 0x0a /* Public */,
       7,    0,   73,    2, 0x0a /* Public */,
       8,    1,   74,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      10,    1,   80,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void mtsCollectorQtComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsCollectorQtComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollectorAddedQSignal(); break;
        case 1: _t->CollectionStartedQSignal(); break;
        case 2: _t->CollectionStoppedQSignal((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->ProgressQSignal((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->StartCollectionQSlot(); break;
        case 5: _t->StopCollectionQSlot(); break;
        case 6: _t->StartCollectionInQSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->StopCollectionInQSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->SetWorkingDirectoryQSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->SetOutputToDefaultQSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsCollectorQtComponent::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtComponent::CollectorAddedQSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtComponent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtComponent::CollectionStartedQSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtComponent::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtComponent::CollectionStoppedQSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtComponent::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtComponent::ProgressQSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsCollectorQtComponent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_mtsCollectorQtComponent.data,
    qt_meta_data_mtsCollectorQtComponent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsCollectorQtComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsCollectorQtComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsCollectorQtComponent.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(this);
    return QObject::qt_metacast(_clname);
}

int mtsCollectorQtComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void mtsCollectorQtComponent::CollectorAddedQSignal()const
{
    QMetaObject::activate(const_cast< mtsCollectorQtComponent *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mtsCollectorQtComponent::CollectionStartedQSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mtsCollectorQtComponent::CollectionStoppedQSignal(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsCollectorQtComponent::ProgressQSignal(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
