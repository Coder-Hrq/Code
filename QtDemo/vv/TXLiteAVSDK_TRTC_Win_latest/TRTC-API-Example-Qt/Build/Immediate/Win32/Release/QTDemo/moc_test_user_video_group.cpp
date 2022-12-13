/****************************************************************************
** Meta object code from reading C++ file 'test_user_video_group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestBaseScene/test_user_video_group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_user_video_group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestUserVideoGroup_t {
    QByteArrayData data[12];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestUserVideoGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestUserVideoGroup_t qt_meta_stringdata_TestUserVideoGroup = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TestUserVideoGroup"
QT_MOC_LITERAL(1, 19, 30), // "onVolumeEvaluationStateChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "state"
QT_MOC_LITERAL(4, 57, 36), // "on_networkModeCb_currentIndex..."
QT_MOC_LITERAL(5, 94, 5), // "index"
QT_MOC_LITERAL(6, 100, 31), // "on_muteAllRemoteAudioCb_clicked"
QT_MOC_LITERAL(7, 132, 7), // "checked"
QT_MOC_LITERAL(8, 140, 31), // "on_muteAllRemoteVideoCb_clicked"
QT_MOC_LITERAL(9, 172, 26), // "on_openDashBoardCb_clicked"
QT_MOC_LITERAL(10, 199, 42), // "on_pushButtonShowRemoteScreen..."
QT_MOC_LITERAL(11, 242, 40) // "on_checkBoxVolumeEvaluation_s..."

    },
    "TestUserVideoGroup\0onVolumeEvaluationStateChanged\0"
    "\0state\0on_networkModeCb_currentIndexChanged\0"
    "index\0on_muteAllRemoteAudioCb_clicked\0"
    "checked\0on_muteAllRemoteVideoCb_clicked\0"
    "on_openDashBoardCb_clicked\0"
    "on_pushButtonShowRemoteScreenShare_clicked\0"
    "on_checkBoxVolumeEvaluation_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestUserVideoGroup[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void TestUserVideoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestUserVideoGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onVolumeEvaluationStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_networkModeCb_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_muteAllRemoteAudioCb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_muteAllRemoteVideoCb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_openDashBoardCb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonShowRemoteScreenShare_clicked(); break;
        case 6: _t->on_checkBoxVolumeEvaluation_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestUserVideoGroup::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestUserVideoGroup::onVolumeEvaluationStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestUserVideoGroup::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TestUserVideoGroup.data,
    qt_meta_data_TestUserVideoGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestUserVideoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestUserVideoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestUserVideoGroup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TrtcCloudCallbackDefaultImpl"))
        return static_cast< TrtcCloudCallbackDefaultImpl*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestUserVideoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TestUserVideoGroup::onVolumeEvaluationStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
