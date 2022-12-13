/****************************************************************************
** Meta object code from reading C++ file 'test_cdn_publish.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestCDNPublish/test_cdn_publish.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_cdn_publish.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestCdnPublish_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestCdnPublish_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestCdnPublish_t qt_meta_stringdata_TestCdnPublish = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestCdnPublish"
QT_MOC_LITERAL(1, 15, 30), // "on_switchPublishStatus_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 29), // "on_streamIdLineEt_textChanged"
QT_MOC_LITERAL(4, 77, 8) // "streamId"

    },
    "TestCdnPublish\0on_switchPublishStatus_clicked\0"
    "\0on_streamIdLineEt_textChanged\0streamId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestCdnPublish[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void TestCdnPublish::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestCdnPublish *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_switchPublishStatus_clicked(); break;
        case 1: _t->on_streamIdLineEt_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestCdnPublish::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestCdnPublish.data,
    qt_meta_data_TestCdnPublish,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestCdnPublish::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestCdnPublish::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestCdnPublish.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestCdnPublish::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
