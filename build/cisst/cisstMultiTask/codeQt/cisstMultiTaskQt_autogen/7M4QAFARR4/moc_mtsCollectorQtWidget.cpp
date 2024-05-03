/****************************************************************************
** Meta object code from reading C++ file 'mtsCollectorQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsCollectorQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsCollectorQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsCollectorQtWidget_t {
    QByteArrayData data[19];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsCollectorQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsCollectorQtWidget_t qt_meta_stringdata_mtsCollectorQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "mtsCollectorQtWidget"
QT_MOC_LITERAL(1, 21, 15), // "StartCollection"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "StopCollection"
QT_MOC_LITERAL(4, 53, 17), // "StartCollectionIn"
QT_MOC_LITERAL(5, 71, 5), // "delay"
QT_MOC_LITERAL(6, 77, 16), // "StopCollectionIn"
QT_MOC_LITERAL(7, 94, 19), // "SetWorkingDirectory"
QT_MOC_LITERAL(8, 114, 18), // "SetOutputToDefault"
QT_MOC_LITERAL(9, 133, 19), // "ManualStartStopSlot"
QT_MOC_LITERAL(10, 153, 7), // "checked"
QT_MOC_LITERAL(11, 161, 18), // "ScheduledStartSlot"
QT_MOC_LITERAL(12, 180, 14), // "FileDialogSlot"
QT_MOC_LITERAL(13, 195, 11), // "FileNewSlot"
QT_MOC_LITERAL(14, 207, 14), // "CollectorAdded"
QT_MOC_LITERAL(15, 222, 17), // "CollectionStarted"
QT_MOC_LITERAL(16, 240, 17), // "CollectionStopped"
QT_MOC_LITERAL(17, 258, 5), // "count"
QT_MOC_LITERAL(18, 264, 8) // "Progress"

    },
    "mtsCollectorQtWidget\0StartCollection\0"
    "\0StopCollection\0StartCollectionIn\0"
    "delay\0StopCollectionIn\0SetWorkingDirectory\0"
    "SetOutputToDefault\0ManualStartStopSlot\0"
    "checked\0ScheduledStartSlot\0FileDialogSlot\0"
    "FileNewSlot\0CollectorAdded\0CollectionStarted\0"
    "CollectionStopped\0count\0Progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsCollectorQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       7,    1,   92,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   96,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   17,
    QMetaType::Void, QMetaType::UInt,   17,

       0        // eod
};

void mtsCollectorQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsCollectorQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartCollection(); break;
        case 1: _t->StopCollection(); break;
        case 2: _t->StartCollectionIn((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->StopCollectionIn((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetWorkingDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetOutputToDefault(); break;
        case 6: _t->ManualStartStopSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ScheduledStartSlot(); break;
        case 8: _t->FileDialogSlot(); break;
        case 9: _t->FileNewSlot(); break;
        case 10: _t->CollectorAdded(); break;
        case 11: _t->CollectionStarted(); break;
        case 12: _t->CollectionStopped((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->Progress((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mtsCollectorQtWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::StartCollection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::StopCollection)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::StartCollectionIn)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::StopCollectionIn)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::SetWorkingDirectory)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (mtsCollectorQtWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mtsCollectorQtWidget::SetOutputToDefault)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsCollectorQtWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsCollectorQtWidget.data,
    qt_meta_data_mtsCollectorQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsCollectorQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsCollectorQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsCollectorQtWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsCollectorQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mtsCollectorQtWidget::StartCollection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mtsCollectorQtWidget::StopCollection()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mtsCollectorQtWidget::StartCollectionIn(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsCollectorQtWidget::StopCollectionIn(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mtsCollectorQtWidget::SetWorkingDirectory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mtsCollectorQtWidget::SetOutputToDefault()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
