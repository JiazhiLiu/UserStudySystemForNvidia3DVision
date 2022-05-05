/****************************************************************************
** Meta object code from reading C++ file 'ExperimentBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExperimentBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExperimentBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExperimentBase_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExperimentBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExperimentBase_t qt_meta_stringdata_ExperimentBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ExperimentBase"
QT_MOC_LITERAL(1, 15, 16), // "toResetStatusBar"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "on_session1"
QT_MOC_LITERAL(4, 45, 11), // "on_session2"
QT_MOC_LITERAL(5, 57, 11), // "on_session3"
QT_MOC_LITERAL(6, 69, 27), // "on_receiveColorBlindResults"
QT_MOC_LITERAL(7, 97, 6), // "result"
QT_MOC_LITERAL(8, 104, 25), // "on_receive3DDeviceResults"
QT_MOC_LITERAL(9, 130, 28) // "on_receiveStereoBlindResults"

    },
    "ExperimentBase\0toResetStatusBar\0\0"
    "on_session1\0on_session2\0on_session3\0"
    "on_receiveColorBlindResults\0result\0"
    "on_receive3DDeviceResults\0"
    "on_receiveStereoBlindResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExperimentBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    1,   53,    2, 0x09 /* Protected */,
       8,    1,   56,    2, 0x09 /* Protected */,
       9,    1,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ExperimentBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExperimentBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toResetStatusBar(); break;
        case 1: _t->on_session1(); break;
        case 2: _t->on_session2(); break;
        case 3: _t->on_session3(); break;
        case 4: _t->on_receiveColorBlindResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_receive3DDeviceResults((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_receiveStereoBlindResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExperimentBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExperimentBase::toResetStatusBar)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExperimentBase::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ExperimentBase.data,
    qt_meta_data_ExperimentBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExperimentBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExperimentBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExperimentBase.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExperimentBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ExperimentBase::toResetStatusBar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
