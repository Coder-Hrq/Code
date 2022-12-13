/****************************************************************************
** Meta object code from reading C++ file 'test_screen_share_select_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestScreenShare/test_screen_share_select_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_screen_share_select_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestScreenShareSelectWindow_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestScreenShareSelectWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestScreenShareSelectWindow_t qt_meta_stringdata_TestScreenShareSelectWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "TestScreenShareSelectWindow"
QT_MOC_LITERAL(1, 28, 31), // "on_btPauseScreenCapture_clicked"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 32), // "on_btnStartScreenCapture_clicked"
QT_MOC_LITERAL(4, 94, 32), // "onScreenSharingItemStatusChanged"
QT_MOC_LITERAL(5, 127, 25), // "ScreenShareSelectionItem*"
QT_MOC_LITERAL(6, 153, 4), // "item"
QT_MOC_LITERAL(7, 158, 6) // "status"

    },
    "TestScreenShareSelectWindow\0"
    "on_btPauseScreenCapture_clicked\0\0"
    "on_btnStartScreenCapture_clicked\0"
    "onScreenSharingItemStatusChanged\0"
    "ScreenShareSelectionItem*\0item\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestScreenShareSelectWindow[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,

       0        // eod
};

void TestScreenShareSelectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestScreenShareSelectWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btPauseScreenCapture_clicked(); break;
        case 1: _t->on_btnStartScreenCapture_clicked(); break;
        case 2: _t->onScreenSharingItemStatusChanged((*reinterpret_cast< ScreenShareSelectionItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScreenShareSelectionItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestScreenShareSelectWindow::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestScreenShareSelectWindow.data,
    qt_meta_data_TestScreenShareSelectWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestScreenShareSelectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestScreenShareSelectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestScreenShareSelectWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestScreenShareSelectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
