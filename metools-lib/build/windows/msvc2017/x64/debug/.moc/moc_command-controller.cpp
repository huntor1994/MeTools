/****************************************************************************
** Meta object code from reading C++ file 'command-controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../source/controllers/command-controller.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'command-controller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_metools__controllers__CommandController_t {
    uint offsetsAndSizes[12];
    char stringdata0[40];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[24];
    char stringdata5[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_metools__controllers__CommandController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_metools__controllers__CommandController_t qt_meta_stringdata_metools__controllers__CommandController = {
    {
        QT_MOC_LITERAL(0, 39),  // "metools::controllers::Command..."
        QT_MOC_LITERAL(40, 29),  // "onClipboardTextFormatExecuted"
        QT_MOC_LITERAL(70, 0),  // ""
        QT_MOC_LITERAL(71, 10),  // "isExecuted"
        QT_MOC_LITERAL(82, 23),  // "ui_workAreaViewCommands"
        QT_MOC_LITERAL(106, 45)   // "QQmlListProperty<metools::fra..."
    },
    "metools::controllers::CommandController",
    "onClipboardTextFormatExecuted",
    "",
    "isExecuted",
    "ui_workAreaViewCommands",
    "QQmlListProperty<metools::framework::Command>"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_metools__controllers__CommandController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject metools::controllers::CommandController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_metools__controllers__CommandController.offsetsAndSizes,
    qt_meta_data_metools__controllers__CommandController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_metools__controllers__CommandController_t,
        // property 'ui_workAreaViewCommands'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<metools::framework::Command>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CommandController, std::true_type>,
        // method 'onClipboardTextFormatExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void metools::controllers::CommandController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onClipboardTextFormatExecuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CommandController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<metools::framework::Command>*>(_v) = _t->ui_workAreaViewCommands(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *metools::controllers::CommandController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *metools::controllers::CommandController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_metools__controllers__CommandController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int metools::controllers::CommandController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
