/****************************************************************************
** Meta object code from reading C++ file 'vctPlot2DOpenGLQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cisstVector/vctPlot2DOpenGLQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vctPlot2DOpenGLQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vctPlot2DOpenGLQtWidget_t {
    QByteArrayData data[11];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vctPlot2DOpenGLQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vctPlot2DOpenGLQtWidget_t qt_meta_stringdata_vctPlot2DOpenGLQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "vctPlot2DOpenGLQtWidget"
QT_MOC_LITERAL(1, 24, 15), // "ShowContextMenu"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "pos"
QT_MOC_LITERAL(4, 45, 10), // "FreezeSlot"
QT_MOC_LITERAL(5, 56, 8), // "FitXSlot"
QT_MOC_LITERAL(6, 65, 8), // "FitYSlot"
QT_MOC_LITERAL(7, 74, 21), // "SetContinuousFitXSlot"
QT_MOC_LITERAL(8, 96, 21), // "SetContinuousFitYSlot"
QT_MOC_LITERAL(9, 118, 24), // "SetContinuousExpandYSlot"
QT_MOC_LITERAL(10, 143, 29) // "SetContinuousExpandYResetSlot"

    },
    "vctPlot2DOpenGLQtWidget\0ShowContextMenu\0"
    "\0pos\0FreezeSlot\0FitXSlot\0FitYSlot\0"
    "SetContinuousFitXSlot\0SetContinuousFitYSlot\0"
    "SetContinuousExpandYSlot\0"
    "SetContinuousExpandYResetSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vctPlot2DOpenGLQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void vctPlot2DOpenGLQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vctPlot2DOpenGLQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->FreezeSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->FitXSlot(); break;
        case 3: _t->FitYSlot(); break;
        case 4: _t->SetContinuousFitXSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SetContinuousFitYSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetContinuousExpandYSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SetContinuousExpandYResetSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vctPlot2DOpenGLQtWidget::staticMetaObject = { {
    &vctQtOpenGLBaseWidget::staticMetaObject,
    qt_meta_stringdata_vctPlot2DOpenGLQtWidget.data,
    qt_meta_data_vctPlot2DOpenGLQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vctPlot2DOpenGLQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vctPlot2DOpenGLQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vctPlot2DOpenGLQtWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "vctPlot2DOpenGL"))
        return static_cast< vctPlot2DOpenGL*>(this);
    return vctQtOpenGLBaseWidget::qt_metacast(_clname);
}

int vctPlot2DOpenGLQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = vctQtOpenGLBaseWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
