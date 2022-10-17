/****************************************************************************
** Meta object code from reading C++ file 'master-controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../source/controllers/master-controller.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'master-controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_metools__controllers__MasterController_t {
    uint offsetsAndSizes[6];
    char stringdata0[39];
    char stringdata1[21];
    char stringdata2[41];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_metools__controllers__MasterController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_metools__controllers__MasterController_t qt_meta_stringdata_metools__controllers__MasterController = {
    {
        QT_MOC_LITERAL(0, 38),  // "metools::controllers::MasterC..."
        QT_MOC_LITERAL(39, 20),  // "ui_commandController"
        QT_MOC_LITERAL(60, 40)   // "metools::controllers::Command..."
    },
    "metools::controllers::MasterController",
    "ui_commandController",
    "metools::controllers::CommandController*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_metools__controllers__MasterController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject metools::controllers::MasterController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_metools__controllers__MasterController.offsetsAndSizes,
    qt_meta_data_metools__controllers__MasterController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_metools__controllers__MasterController_t,
        // property 'ui_commandController'
        QtPrivate::TypeAndForceComplete<metools::controllers::CommandController*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MasterController, std::true_type>
    >,
    nullptr
} };

void metools::controllers::MasterController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< metools::controllers::CommandController* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MasterController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< metools::controllers::CommandController**>(_v) = _t->commandController(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *metools::controllers::MasterController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *metools::controllers::MasterController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_metools__controllers__MasterController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int metools::controllers::MasterController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
