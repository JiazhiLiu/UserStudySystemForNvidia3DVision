/****************************************************************************
** Meta object code from reading C++ file 'ColorTestWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ColorTestWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorTestWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorTestWidget_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorTestWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorTestWidget_t qt_meta_stringdata_ColorTestWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ColorTestWidget"
QT_MOC_LITERAL(1, 16, 22), // "reportColorTestResults"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "result"
QT_MOC_LITERAL(4, 47, 14), // "on_rbtnNothing"
QT_MOC_LITERAL(5, 62, 13), // "on_rbtnNumber"
QT_MOC_LITERAL(6, 76, 11), // "on_pbtnLast"
QT_MOC_LITERAL(7, 88, 11), // "on_pbtnNext"
QT_MOC_LITERAL(8, 100, 17) // "on_lineEditNumber"

    },
    "ColorTestWidget\0reportColorTestResults\0"
    "\0result\0on_rbtnNothing\0on_rbtnNumber\0"
    "on_pbtnLast\0on_pbtnNext\0on_lineEditNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorTestWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorTestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorTestWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reportColorTestResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_rbtnNothing(); break;
        case 2: _t->on_rbtnNumber(); break;
        case 3: _t->on_pbtnLast(); break;
        case 4: _t->on_pbtnNext(); break;
        case 5: _t->on_lineEditNumber(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorTestWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorTestWidget::reportColorTestResults)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorTestWidget::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ColorTestWidget.data,
    qt_meta_data_ColorTestWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorTestWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ColorTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ColorTestWidget::reportColorTestResults(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
