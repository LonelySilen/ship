/****************************************************************************
** Meta object code from reading C++ file 'scale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scale_t {
    QByteArrayData data[18];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Scale_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Scale_t qt_meta_stringdata_Scale = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 11),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 14),
QT_MOC_LITERAL(4, 34, 8),
QT_MOC_LITERAL(5, 43, 11),
QT_MOC_LITERAL(6, 55, 11),
QT_MOC_LITERAL(7, 67, 12),
QT_MOC_LITERAL(8, 80, 12),
QT_MOC_LITERAL(9, 93, 8),
QT_MOC_LITERAL(10, 102, 13),
QT_MOC_LITERAL(11, 116, 13),
QT_MOC_LITERAL(12, 130, 13),
QT_MOC_LITERAL(13, 144, 11),
QT_MOC_LITERAL(14, 156, 13),
QT_MOC_LITERAL(15, 170, 13),
QT_MOC_LITERAL(16, 184, 13),
QT_MOC_LITERAL(17, 198, 26)
    },
    "Scale\0errorSignal\0\0thresholdAlarm\0"
    "setValue\0setMinValue\0setMaxValue\0"
    "setThreshold\0setPrecision\0setUnits\0"
    "setScaleMajor\0setScaleMinor\0setStartAngle\0"
    "setEndAngle\0setCrownColor\0setForeground\0"
    "setBackground\0setNumericIndicatorEnabled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06,
       3,    1,   97,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,  100,    2, 0x0a,
       5,    1,  103,    2, 0x0a,
       6,    1,  106,    2, 0x0a,
       7,    1,  109,    2, 0x0a,
       8,    1,  112,    2, 0x0a,
       9,    1,  115,    2, 0x0a,
      10,    1,  118,    2, 0x0a,
      11,    1,  121,    2, 0x0a,
      12,    1,  124,    2, 0x0a,
      13,    1,  127,    2, 0x0a,
      14,    1,  130,    2, 0x0a,
      15,    1,  133,    2, 0x0a,
      16,    1,  136,    2, 0x0a,
      17,    1,  139,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Scale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scale *_t = static_cast<Scale *>(_o);
        switch (_id) {
        case 0: _t->errorSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->thresholdAlarm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMinValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMaxValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setThreshold((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setUnits((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setScaleMajor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setScaleMinor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setStartAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setEndAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setCrownColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 13: _t->setForeground((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 14: _t->setBackground((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->setNumericIndicatorEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scale::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scale::errorSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (Scale::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scale::thresholdAlarm)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Scale::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Scale.data,
      qt_meta_data_Scale,  qt_static_metacall, 0, 0}
};


const QMetaObject *Scale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Scale.stringdata))
        return static_cast<void*>(const_cast< Scale*>(this));
    return QWidget::qt_metacast(_clname);
}

int Scale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Scale::errorSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scale::thresholdAlarm(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
