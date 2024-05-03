/****************************************************************************
** Meta object code from reading C++ file 'mtsQtWidgetGenericObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstMultiTask/mtsQtWidgetGenericObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsQtWidgetGenericObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsQtWidgetGenericObjectRead_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetGenericObjectRead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetGenericObjectRead_t qt_meta_stringdata_mtsQtWidgetGenericObjectRead = {
    {
QT_MOC_LITERAL(0, 0, 28) // "mtsQtWidgetGenericObjectRead"

    },
    "mtsQtWidgetGenericObjectRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetGenericObjectRead[] = {

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

void mtsQtWidgetGenericObjectRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetGenericObjectRead::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetGenericObjectRead.data,
    qt_meta_data_mtsQtWidgetGenericObjectRead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetGenericObjectRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetGenericObjectRead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetGenericObjectRead.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cmnGenericObject"))
        return static_cast< cmnGenericObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int mtsQtWidgetGenericObjectRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_mtsQtWidgetGenericObjectWrite_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsQtWidgetGenericObjectWrite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsQtWidgetGenericObjectWrite_t qt_meta_stringdata_mtsQtWidgetGenericObjectWrite = {
    {
QT_MOC_LITERAL(0, 0, 29) // "mtsQtWidgetGenericObjectWrite"

    },
    "mtsQtWidgetGenericObjectWrite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsQtWidgetGenericObjectWrite[] = {

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

void mtsQtWidgetGenericObjectWrite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsQtWidgetGenericObjectWrite::staticMetaObject = { {
    &mtsQtWidgetGenericObjectRead::staticMetaObject,
    qt_meta_stringdata_mtsQtWidgetGenericObjectWrite.data,
    qt_meta_data_mtsQtWidgetGenericObjectWrite,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsQtWidgetGenericObjectWrite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsQtWidgetGenericObjectWrite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsQtWidgetGenericObjectWrite.stringdata0))
        return static_cast<void*>(this);
    return mtsQtWidgetGenericObjectRead::qt_metacast(_clname);
}

int mtsQtWidgetGenericObjectWrite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsQtWidgetGenericObjectRead::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
