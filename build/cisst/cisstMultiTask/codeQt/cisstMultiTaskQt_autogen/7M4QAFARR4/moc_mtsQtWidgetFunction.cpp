/****************************************************************************
** Meta object code from reading C++ file 'mtsQtWidgetFunction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsQtWidgetFunction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsQtWidgetFunction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsQtWidgetFunction_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunction_t qt_meta_stringdata_mtsQtWidgetFunction = {
    {
QT_MOC_LITERAL(0, 0, 19), // "mtsQtWidgetFunction"
QT_MOC_LITERAL(1, 20, 16), // "ExecuteIfEnabled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "StopPeriodicExecution"
QT_MOC_LITERAL(4, 60, 21), // "HandleIntervalChanged"
QT_MOC_LITERAL(5, 82, 11) // "newInterval"

    },
    "mtsQtWidgetFunction\0ExecuteIfEnabled\0"
    "\0StopPeriodicExecution\0HandleIntervalChanged\0"
    "newInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void mtsQtWidgetFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ExecuteIfEnabled(); break;
        case 1: _t->StopPeriodicExecution(); break;
        case 2: _t->HandleIntervalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunction::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunction.data,
    qt_meta_data_mtsQtWidgetFunction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunction.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cmnGenericObject"))
        return static_cast< cmnGenericObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsQtWidgetFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionVoid_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionVoid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionVoid_t qt_meta_stringdata_mtsQtWidgetFunctionVoid = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mtsQtWidgetFunctionVoid"
QT_MOC_LITERAL(1, 24, 7), // "Execute"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "mtsQtWidgetFunctionVoid\0Execute\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionVoid[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionVoid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionVoid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionVoid::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionVoid.data,
    qt_meta_data_mtsQtWidgetFunctionVoid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionVoid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionVoid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionVoid.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionVoid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn_t qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mtsQtWidgetFunctionVoidReturn"
QT_MOC_LITERAL(1, 30, 7), // "Execute"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "mtsQtWidgetFunctionVoidReturn\0Execute\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionVoidReturn[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionVoidReturn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionVoidReturn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionVoidReturn::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn.data,
    qt_meta_data_mtsQtWidgetFunctionVoidReturn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionVoidReturn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionVoidReturn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionVoidReturn.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionVoidReturn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionWrite_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionWrite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionWrite_t qt_meta_stringdata_mtsQtWidgetFunctionWrite = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mtsQtWidgetFunctionWrite"
QT_MOC_LITERAL(1, 25, 7), // "Execute"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "mtsQtWidgetFunctionWrite\0Execute\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionWrite[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionWrite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionWrite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionWrite::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionWrite.data,
    qt_meta_data_mtsQtWidgetFunctionWrite,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionWrite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionWrite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionWrite.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionWrite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn_t qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mtsQtWidgetFunctionWriteReturn"
QT_MOC_LITERAL(1, 31, 7), // "Execute"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "mtsQtWidgetFunctionWriteReturn\0Execute\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionWriteReturn[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionWriteReturn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionWriteReturn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionWriteReturn::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn.data,
    qt_meta_data_mtsQtWidgetFunctionWriteReturn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionWriteReturn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionWriteReturn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionWriteReturn.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionWriteReturn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionRead_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionRead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionRead_t qt_meta_stringdata_mtsQtWidgetFunctionRead = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mtsQtWidgetFunctionRead"
QT_MOC_LITERAL(1, 24, 7), // "Execute"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "mtsQtWidgetFunctionRead\0Execute\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionRead[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionRead *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionRead::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionRead.data,
    qt_meta_data_mtsQtWidgetFunctionRead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionRead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionRead.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead_t qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mtsQtWidgetFunctionQualifiedRead"
QT_MOC_LITERAL(1, 33, 7), // "Execute"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "mtsQtWidgetFunctionQualifiedRead\0"
    "Execute\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetFunctionQualifiedRead[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtWidgetFunctionQualifiedRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtWidgetFunctionQualifiedRead *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetFunctionQualifiedRead::staticMetaObject = { {
    &mtsQtWidgetFunction::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead.data,
    qt_meta_data_mtsQtWidgetFunctionQualifiedRead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetFunctionQualifiedRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetFunctionQualifiedRead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetFunctionQualifiedRead.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetFunction::qt_metacast(_clname);
}

int mtsQtWidgetFunctionQualifiedRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetFunction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtFunctionContainerWidget_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtFunctionContainerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtFunctionContainerWidget_t qt_meta_stringdata_mtsQtFunctionContainerWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mtsQtFunctionContainerWidget"
QT_MOC_LITERAL(1, 29, 15), // "ToggleCollapsed"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "mtsQtFunctionContainerWidget\0"
    "ToggleCollapsed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtFunctionContainerWidget[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsQtFunctionContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsQtFunctionContainerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ToggleCollapsed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtFunctionContainerWidget::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_mtsQtFunctionContainerWidget.data,
    qt_meta_data_mtsQtFunctionContainerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtFunctionContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtFunctionContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtFunctionContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int mtsQtFunctionContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_mtsQtFunctionListContainerWidget_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtFunctionListContainerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtFunctionListContainerWidget_t qt_meta_stringdata_mtsQtFunctionListContainerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32) // "mtsQtFunctionListContainerWidget"

    },
    "mtsQtFunctionListContainerWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtFunctionListContainerWidget[] = {

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

void mtsQtFunctionListContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtFunctionListContainerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsQtFunctionListContainerWidget.data,
    qt_meta_data_mtsQtFunctionListContainerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtFunctionListContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtFunctionListContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtFunctionListContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsQtFunctionListContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
