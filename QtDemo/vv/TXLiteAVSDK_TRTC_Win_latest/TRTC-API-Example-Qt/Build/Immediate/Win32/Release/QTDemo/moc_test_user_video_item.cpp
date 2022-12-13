/****************************************************************************
** Meta object code from reading C++ file 'test_user_video_item.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestBaseScene/test_user_video_item.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_user_video_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestUserVideoItem_t {
    QByteArrayData data[8];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestUserVideoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestUserVideoItem_t qt_meta_stringdata_TestUserVideoItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TestUserVideoItem"
QT_MOC_LITERAL(1, 18, 22), // "on_audioMuteBt_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "on_videoMuteBt_clicked"
QT_MOC_LITERAL(4, 65, 22), // "on_fitScreenBt_clicked"
QT_MOC_LITERAL(5, 88, 26), // "on_preSmallVideoBt_clicked"
QT_MOC_LITERAL(6, 115, 19), // "on_mirrorBt_clicked"
QT_MOC_LITERAL(7, 135, 18) // "on_roateBt_clicked"

    },
    "TestUserVideoItem\0on_audioMuteBt_clicked\0"
    "\0on_videoMuteBt_clicked\0on_fitScreenBt_clicked\0"
    "on_preSmallVideoBt_clicked\0"
    "on_mirrorBt_clicked\0on_roateBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestUserVideoItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestUserVideoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestUserVideoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_audioMuteBt_clicked(); break;
        case 1: _t->on_videoMuteBt_clicked(); break;
        case 2: _t->on_fitScreenBt_clicked(); break;
        case 3: _t->on_preSmallVideoBt_clicked(); break;
        case 4: _t->on_mirrorBt_clicked(); break;
        case 5: _t->on_roateBt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestUserVideoItem::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TestUserVideoItem.data,
    qt_meta_data_TestUserVideoItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestUserVideoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestUserVideoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestUserVideoItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestUserVideoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
