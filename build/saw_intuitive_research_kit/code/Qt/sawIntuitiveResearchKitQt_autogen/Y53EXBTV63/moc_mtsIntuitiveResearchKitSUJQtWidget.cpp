/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitSUJQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sawIntuitiveResearchKit/mtsIntuitiveResearchKitSUJQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitSUJQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget_t {
    QByteArrayData data[11];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mtsIntuitiveResearchKitSUJQtW..."
QT_MOC_LITERAL(1, 35, 12), // "SlotShowMore"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 23), // "SlotManualRecalibration"
QT_MOC_LITERAL(4, 73, 17), // "SlotClutchPressed"
QT_MOC_LITERAL(5, 91, 18), // "SlotClutchReleased"
QT_MOC_LITERAL(6, 110, 23), // "SlotVelocityDownPressed"
QT_MOC_LITERAL(7, 134, 21), // "SlotVelocityUpPressed"
QT_MOC_LITERAL(8, 156, 20), // "SlotVelocityReleased"
QT_MOC_LITERAL(9, 177, 29), // "SlotRecalibrationStartChanged"
QT_MOC_LITERAL(10, 207, 30) // "SlotRecalibrationFinishChanged"

    },
    "mtsIntuitiveResearchKitSUJQtWidget\0"
    "SlotShowMore\0\0SlotManualRecalibration\0"
    "SlotClutchPressed\0SlotClutchReleased\0"
    "SlotVelocityDownPressed\0SlotVelocityUpPressed\0"
    "SlotVelocityReleased\0SlotRecalibrationStartChanged\0"
    "SlotRecalibrationFinishChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitSUJQtWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mtsIntuitiveResearchKitSUJQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mtsIntuitiveResearchKitSUJQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotShowMore(); break;
        case 1: _t->SlotManualRecalibration(); break;
        case 2: _t->SlotClutchPressed(); break;
        case 3: _t->SlotClutchReleased(); break;
        case 4: _t->SlotVelocityDownPressed(); break;
        case 5: _t->SlotVelocityUpPressed(); break;
        case 6: _t->SlotVelocityReleased(); break;
        case 7: _t->SlotRecalibrationStartChanged(); break;
        case 8: _t->SlotRecalibrationFinishChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mtsIntuitiveResearchKitSUJQtWidget::staticMetaObject = { {
    &mtsIntuitiveResearchKitArmQtWidget::staticMetaObject,
    qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget.data,
    qt_meta_data_mtsIntuitiveResearchKitSUJQtWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mtsIntuitiveResearchKitSUJQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitSUJQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitSUJQtWidget.stringdata0))
        return static_cast<void*>(this);
    return mtsIntuitiveResearchKitArmQtWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitSUJQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsIntuitiveResearchKitArmQtWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
