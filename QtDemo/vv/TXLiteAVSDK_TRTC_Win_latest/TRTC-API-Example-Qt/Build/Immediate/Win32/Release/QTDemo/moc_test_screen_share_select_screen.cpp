/****************************************************************************
** Meta object code from reading C++ file 'test_screen_share_select_screen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestScreenShare/test_screen_share_select_screen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_screen_share_select_screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestScreenShareSelectScreen_t {
    QByteArrayData data[8];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestScreenShareSelectScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestScreenShareSelectScreen_t qt_meta_stringdata_TestScreenShareSelectScreen = {
    {
QT_MOC_LITERAL(0, 0, 27), // "TestScreenShareSelectScreen"
QT_MOC_LITERAL(1, 28, 32), // "onScreenSharingItemStatusChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 25), // "ScreenShareSelectionItem*"
QT_MOC_LITERAL(4, 88, 4), // "item"
QT_MOC_LITERAL(5, 93, 6), // "status"
QT_MOC_LITERAL(6, 100, 32), // "on_btnStartScreenCapture_clicked"
QT_MOC_LITERAL(7, 133, 32) // "on_btnPauseScreenCapture_clicked"

    },
    "TestScreenShareSelectScreen\0"
    "onScreenSharingItemStatusChanged\0\0"
    "ScreenShareSelectionItem*\0item\0status\0"
    "on_btnStartScreenCapture_clicked\0"
    "on_btnPauseScreenCapture_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestScreenShareSelectScreen[] = {

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
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestScreenShareSelectScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestScreenShareSelectScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onScreenSharingItemStatusChanged((*reinterpret_cast< ScreenShareSelectionItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->on_btnStartScreenCapture_clicked(); break;
        case 2: _t->on_btnPauseScreenCapture_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScreenShareSelectionItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestScreenShareSelectScreen::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestScreenShareSelectScreen.data,
    qt_meta_data_TestScreenShareSelectScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestScreenShareSelectScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestScreenShareSelectScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestScreenShareSelectScreen.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestScreenShareSelectScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
