/****************************************************************************
** Meta object code from reading C++ file 'test_bgm_setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestBgmSetting/test_bgm_setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_bgm_setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestBGMSetting_t {
    QByteArrayData data[24];
    char stringdata0[472];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestBGMSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestBGMSetting_t qt_meta_stringdata_TestBGMSetting = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestBGMSetting"
QT_MOC_LITERAL(1, 15, 5), // "start"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "complete"
QT_MOC_LITERAL(4, 31, 12), // "playProgress"
QT_MOC_LITERAL(5, 44, 22), // "on_btnStartBgm_clicked"
QT_MOC_LITERAL(6, 67, 22), // "on_btnPauseBgm_clicked"
QT_MOC_LITERAL(7, 90, 25), // "on_btnRestSetting_clicked"
QT_MOC_LITERAL(8, 116, 47), // "on_comboxSetVoiceReverbType_c..."
QT_MOC_LITERAL(9, 164, 5), // "index"
QT_MOC_LITERAL(10, 170, 42), // "on_sliderSetVoiceCaptureVolum..."
QT_MOC_LITERAL(11, 213, 5), // "value"
QT_MOC_LITERAL(12, 219, 36), // "on_sliderSetLocalVolume_value..."
QT_MOC_LITERAL(13, 256, 37), // "on_sliderSetRemoteVolume_valu..."
QT_MOC_LITERAL(14, 294, 34), // "on_sliderSetAllVolume_valueCh..."
QT_MOC_LITERAL(15, 329, 30), // "on_sliderSetPitch_valueChanged"
QT_MOC_LITERAL(16, 360, 34), // "on_sliderSetSpeedRate_valueCh..."
QT_MOC_LITERAL(17, 395, 11), // "handleStart"
QT_MOC_LITERAL(18, 407, 2), // "id"
QT_MOC_LITERAL(19, 410, 7), // "errCode"
QT_MOC_LITERAL(20, 418, 14), // "handleComplete"
QT_MOC_LITERAL(21, 433, 18), // "handlePlayProgress"
QT_MOC_LITERAL(22, 452, 8), // "curPtsMS"
QT_MOC_LITERAL(23, 461, 10) // "durationMS"

    },
    "TestBGMSetting\0start\0\0complete\0"
    "playProgress\0on_btnStartBgm_clicked\0"
    "on_btnPauseBgm_clicked\0on_btnRestSetting_clicked\0"
    "on_comboxSetVoiceReverbType_currentIndexChanged\0"
    "index\0on_sliderSetVoiceCaptureVolum_valueChanged\0"
    "value\0on_sliderSetLocalVolume_valueChanged\0"
    "on_sliderSetRemoteVolume_valueChanged\0"
    "on_sliderSetAllVolume_valueChanged\0"
    "on_sliderSetPitch_valueChanged\0"
    "on_sliderSetSpeedRate_valueChanged\0"
    "handleStart\0id\0errCode\0handleComplete\0"
    "handlePlayProgress\0curPtsMS\0durationMS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestBGMSetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       3,    2,   99,    2, 0x06 /* Public */,
       4,    3,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  111,    2, 0x08 /* Private */,
       6,    0,  112,    2, 0x08 /* Private */,
       7,    0,  113,    2, 0x08 /* Private */,
       8,    1,  114,    2, 0x08 /* Private */,
      10,    1,  117,    2, 0x08 /* Private */,
      12,    1,  120,    2, 0x08 /* Private */,
      13,    1,  123,    2, 0x08 /* Private */,
      14,    1,  126,    2, 0x08 /* Private */,
      15,    1,  129,    2, 0x08 /* Private */,
      16,    1,  132,    2, 0x08 /* Private */,
      17,    2,  135,    2, 0x08 /* Private */,
      20,    2,  140,    2, 0x08 /* Private */,
      21,    3,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Long,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Long,   18,   22,   23,

       0        // eod
};

void TestBGMSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestBGMSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->complete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->playProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 3: _t->on_btnStartBgm_clicked(); break;
        case 4: _t->on_btnPauseBgm_clicked(); break;
        case 5: _t->on_btnRestSetting_clicked(); break;
        case 6: _t->on_comboxSetVoiceReverbType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_sliderSetVoiceCaptureVolum_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_sliderSetLocalVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_sliderSetRemoteVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_sliderSetAllVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_sliderSetPitch_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_sliderSetSpeedRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->handleStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->handleComplete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->handlePlayProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestBGMSetting::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestBGMSetting::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TestBGMSetting::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestBGMSetting::complete)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TestBGMSetting::*)(int , long , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestBGMSetting::playProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestBGMSetting::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestBGMSetting.data,
    qt_meta_data_TestBGMSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestBGMSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestBGMSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestBGMSetting.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "liteav::ITXMusicPlayObserver"))
        return static_cast< liteav::ITXMusicPlayObserver*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestBGMSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TestBGMSetting::start(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestBGMSetting::complete(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TestBGMSetting::playProgress(int _t1, long _t2, long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
