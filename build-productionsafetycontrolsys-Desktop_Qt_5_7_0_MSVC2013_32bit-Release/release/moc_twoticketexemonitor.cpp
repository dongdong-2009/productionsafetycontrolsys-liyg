/****************************************************************************
** Meta object code from reading C++ file 'twoticketexemonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../twoticketexemonitor/twoticketexemonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twoticketexemonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TwoTicketExeMonitor_t {
    QByteArrayData data[9];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TwoTicketExeMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TwoTicketExeMonitor_t qt_meta_stringdata_TwoTicketExeMonitor = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TwoTicketExeMonitor"
QT_MOC_LITERAL(1, 20, 24), // "Signal_ticketMtepMonitor"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "Signal_OperationWidget"
QT_MOC_LITERAL(4, 69, 26), // "on_pushButton_work_clicked"
QT_MOC_LITERAL(5, 96, 31), // "on_pushButton_operation_clicked"
QT_MOC_LITERAL(6, 128, 18), // "ClickedTableWidget"
QT_MOC_LITERAL(7, 147, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(8, 165, 22) // "ClickedOperationWidget"

    },
    "TwoTicketExeMonitor\0Signal_ticketMtepMonitor\0"
    "\0Signal_OperationWidget\0"
    "on_pushButton_work_clicked\0"
    "on_pushButton_operation_clicked\0"
    "ClickedTableWidget\0QTableWidgetItem*\0"
    "ClickedOperationWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TwoTicketExeMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   50,    2, 0x08 /* Private */,
       5,    0,   51,    2, 0x08 /* Private */,
       6,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void TwoTicketExeMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TwoTicketExeMonitor *_t = static_cast<TwoTicketExeMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signal_ticketMtepMonitor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Signal_OperationWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_work_clicked(); break;
        case 3: _t->on_pushButton_operation_clicked(); break;
        case 4: _t->ClickedTableWidget((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->ClickedOperationWidget((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TwoTicketExeMonitor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TwoTicketExeMonitor::Signal_ticketMtepMonitor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TwoTicketExeMonitor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TwoTicketExeMonitor::Signal_OperationWidget)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TwoTicketExeMonitor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TwoTicketExeMonitor.data,
      qt_meta_data_TwoTicketExeMonitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TwoTicketExeMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoTicketExeMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TwoTicketExeMonitor.stringdata0))
        return static_cast<void*>(const_cast< TwoTicketExeMonitor*>(this));
    return QWidget::qt_metacast(_clname);
}

int TwoTicketExeMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TwoTicketExeMonitor::Signal_ticketMtepMonitor(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TwoTicketExeMonitor::Signal_OperationWidget(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
