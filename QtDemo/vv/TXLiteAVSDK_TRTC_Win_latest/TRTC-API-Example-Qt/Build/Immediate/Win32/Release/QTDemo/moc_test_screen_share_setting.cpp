/****************************************************************************
** Meta object code from reading C++ file 'test_screen_share_setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestScreenShare/test_screen_share_setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_screen_share_setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestScreenShareSetting_t {
    QByteArrayData data[7];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestScreenShareSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestScreenShareSetting_t qt_meta_stringdata_TestScreenShareSetting = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TestScreenShareSetting"
QT_MOC_LITERAL(1, 23, 32), // "on_btUpdateScreenSharing_clicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 29), // "on_btSharingAllScreen_clicked"
QT_MOC_LITERAL(4, 87, 34), // "on_btSharingSelectedWindow_cl..."
QT_MOC_LITERAL(5, 122, 44), // "on_sliderScreenCaptureMixVolu..."
QT_MOC_LITERAL(6, 167, 5) // "value"

    },
    "TestScreenShareSetting\0"
    "on_btUpdateScreenSharing_clicked\0\0"
    "on_btSharingAllScreen_clicked\0"
    "on_btSharingSelectedWindow_clicked\0"
    "on_sliderScreenCaptureMixVolume_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestScreenShareSetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void TestScreenShareSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestScreenShareSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btUpdateScreenSharing_clicked(); break;
        case 1: _t->on_btSharingAllScreen_clicked(); break;
        case 2: _t->on_btSharingSelectedWindow_clicked(); break;
        case 3: _t->on_sliderScreenCaptureMixVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestScreenShareSetting::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestScreenShareSetting.data,
    qt_meta_data_TestScreenShareSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestScreenShareSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestScreenShareSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestScreenShareSetting.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestScreenShareSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
