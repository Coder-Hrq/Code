/****************************************************************************
** Meta object code from reading C++ file 'test_audio_setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/TestAudioSetting/test_audio_setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_audio_setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestAudioSetting_t {
    QByteArrayData data[14];
    char stringdata0[508];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestAudioSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestAudioSetting_t qt_meta_stringdata_TestAudioSetting = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestAudioSetting"
QT_MOC_LITERAL(1, 17, 42), // "on_comboBoxRemoteUsers_curren..."
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 5), // "value"
QT_MOC_LITERAL(4, 67, 48), // "on_horizontalSliderRemoteUser..."
QT_MOC_LITERAL(5, 116, 50), // "on_horizontalSliderAudioPlayo..."
QT_MOC_LITERAL(6, 167, 49), // "on_horizontalSliderApplicatio..."
QT_MOC_LITERAL(7, 217, 39), // "on_checkBoxApplicationMute_st..."
QT_MOC_LITERAL(8, 257, 5), // "state"
QT_MOC_LITERAL(9, 263, 51), // "on_horizontalSliderCurrentDev..."
QT_MOC_LITERAL(10, 315, 41), // "on_checkBoxCurrentDeviceMute_..."
QT_MOC_LITERAL(11, 357, 50), // "on_horizontalSliderAudioCaptu..."
QT_MOC_LITERAL(12, 408, 57), // "on_horizontalSliderSystemAudi..."
QT_MOC_LITERAL(13, 466, 41) // "on_checkBoxSytemAudioLoopbak_..."

    },
    "TestAudioSetting\0"
    "on_comboBoxRemoteUsers_currentIndexChanged\0"
    "\0value\0on_horizontalSliderRemoteUserVolume_valueChanged\0"
    "on_horizontalSliderAudioPlayoutVolume_valueChanged\0"
    "on_horizontalSliderApplicationVolume_valueChanged\0"
    "on_checkBoxApplicationMute_stateChanged\0"
    "state\0on_horizontalSliderCurrentDeviceVolume_valueChanged\0"
    "on_checkBoxCurrentDeviceMute_stateChanged\0"
    "on_horizontalSliderAudioCaptureVolume_valueChanged\0"
    "on_horizontalSliderSystemAudioLoopbackVolume_valueChanged\0"
    "on_checkBoxSytemAudioLoopbak_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestAudioSetting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    1,   88,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void TestAudioSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestAudioSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBoxRemoteUsers_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_horizontalSliderRemoteUserVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_horizontalSliderAudioPlayoutVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSliderApplicationVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBoxApplicationMute_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSliderCurrentDeviceVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxCurrentDeviceMute_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSliderAudioCaptureVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSliderSystemAudioLoopbackVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxSytemAudioLoopbak_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestAudioSetting::staticMetaObject = { {
    &BaseDialog::staticMetaObject,
    qt_meta_stringdata_TestAudioSetting.data,
    qt_meta_data_TestAudioSetting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestAudioSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestAudioSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestAudioSetting.stringdata0))
        return static_cast<void*>(this);
    return BaseDialog::qt_metacast(_clname);
}

int TestAudioSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
