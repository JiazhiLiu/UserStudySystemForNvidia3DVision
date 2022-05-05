/****************************************************************************
** Meta object code from reading C++ file 'UserStudyMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UserStudyMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserStudyMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserStudyMainWindow_t {
    QByteArrayData data[17];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserStudyMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserStudyMainWindow_t qt_meta_stringdata_UserStudyMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UserStudyMainWindow"
QT_MOC_LITERAL(1, 20, 21), // "report3DDeviceResults"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 23), // "reportColorBlindResults"
QT_MOC_LITERAL(4, 67, 24), // "reportStereoBlindResults"
QT_MOC_LITERAL(5, 92, 7), // "on_Exp1"
QT_MOC_LITERAL(6, 100, 7), // "on_Exp2"
QT_MOC_LITERAL(7, 108, 12), // "on_colorTest"
QT_MOC_LITERAL(8, 121, 16), // "on_3DDeviceCheck"
QT_MOC_LITERAL(9, 138, 13), // "on_stereoTest"
QT_MOC_LITERAL(10, 152, 11), // "on_nvidia3D"
QT_MOC_LITERAL(11, 164, 18), // "on_normalShutter3D"
QT_MOC_LITERAL(12, 183, 22), // "on_receiveColorResults"
QT_MOC_LITERAL(13, 206, 6), // "result"
QT_MOC_LITERAL(14, 213, 25), // "on_receive3DDeviceResults"
QT_MOC_LITERAL(15, 239, 23), // "on_receiveStereoResults"
QT_MOC_LITERAL(16, 263, 17) // "on_resetStatusBar"

    },
    "UserStudyMainWindow\0report3DDeviceResults\0"
    "\0reportColorBlindResults\0"
    "reportStereoBlindResults\0on_Exp1\0"
    "on_Exp2\0on_colorTest\0on_3DDeviceCheck\0"
    "on_stereoTest\0on_nvidia3D\0on_normalShutter3D\0"
    "on_receiveColorResults\0result\0"
    "on_receive3DDeviceResults\0"
    "on_receiveStereoResults\0on_resetStatusBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserStudyMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void UserStudyMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserStudyMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->report3DDeviceResults((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->reportColorBlindResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->reportStereoBlindResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Exp1(); break;
        case 4: _t->on_Exp2(); break;
        case 5: _t->on_colorTest(); break;
        case 6: _t->on_3DDeviceCheck(); break;
        case 7: _t->on_stereoTest(); break;
        case 8: _t->on_nvidia3D(); break;
        case 9: _t->on_normalShutter3D(); break;
        case 10: _t->on_receiveColorResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_receive3DDeviceResults((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_receiveStereoResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_resetStatusBar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserStudyMainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStudyMainWindow::report3DDeviceResults)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserStudyMainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStudyMainWindow::reportColorBlindResults)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserStudyMainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserStudyMainWindow::reportStereoBlindResults)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserStudyMainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_UserStudyMainWindow.data,
    qt_meta_data_UserStudyMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserStudyMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserStudyMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserStudyMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserStudyMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void UserStudyMainWindow::report3DDeviceResults(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserStudyMainWindow::reportColorBlindResults(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserStudyMainWindow::reportStereoBlindResults(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
