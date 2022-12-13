/****************************************************************************
** Meta object code from reading C++ file 'test_video_detect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestVideoDetect/test_video_detect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_video_detect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestVideoDetect_t {
    QByteArrayData data[6];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestVideoDetect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestVideoDetect_t qt_meta_stringdata_TestVideoDetect = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TestVideoDetect"
QT_MOC_LITERAL(1, 16, 36), // "on_pushButtonStartCameraTest_..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "checked"
QT_MOC_LITERAL(4, 62, 44), // "on_comboBoxCameraDevices_curr..."
QT_MOC_LITERAL(5, 107, 5) // "index"

    },
    "TestVideoDetect\0on_pushButtonStartCameraTest_clicked\0"
    "\0checked\0on_comboBoxCameraDevices_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestVideoDetect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void TestVideoDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestVideoDetect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonStartCameraTest_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_comboBoxCameraDevices_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestVideoDetect::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestVideoDetect.data,
    qt_meta_data_TestVideoDetect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestVideoDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestVideoDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestVideoDetect.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestVideoDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
