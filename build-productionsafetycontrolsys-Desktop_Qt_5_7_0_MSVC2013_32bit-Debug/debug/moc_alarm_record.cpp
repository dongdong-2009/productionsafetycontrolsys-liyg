/****************************************************************************
** Meta object code from reading C++ file 'alarm_record.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../productionsafetycontrolsys-liyg/Alarm_record/alarm_record.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarm_record.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Alarm_record_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alarm_record_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alarm_record_t qt_meta_stringdata_Alarm_record = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Alarm_record"
QT_MOC_LITERAL(1, 13, 19), // "on_CloseBtn_clicked"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "Alarm_record\0on_CloseBtn_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alarm_record[] = {

 // content:
       7,       // revision
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

void Alarm_record::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Alarm_record *_t = static_cast<Alarm_record *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_CloseBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Alarm_record::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Alarm_record.data,
      qt_meta_data_Alarm_record,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Alarm_record::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alarm_record::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Alarm_record.stringdata0))
        return static_cast<void*>(const_cast< Alarm_record*>(this));
    return QWidget::qt_metacast(_clname);
}

int Alarm_record::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
