/****************************************************************************
** Meta object code from reading C++ file 'glass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLASS_t {
    QByteArrayData data[15];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLASS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLASS_t qt_meta_stringdata_GLASS = {
    {
QT_MOC_LITERAL(0, 0, 5), // "GLASS"
QT_MOC_LITERAL(1, 6, 15), // "signalGlassInit"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "drawPattern"
QT_MOC_LITERAL(4, 35, 7), // "Figure*"
QT_MOC_LITERAL(5, 43, 4), // "next"
QT_MOC_LITERAL(6, 48, 8), // "setScore"
QT_MOC_LITERAL(7, 57, 7), // "endGame"
QT_MOC_LITERAL(8, 65, 7), // "setRows"
QT_MOC_LITERAL(9, 73, 4), // "rows"
QT_MOC_LITERAL(10, 78, 10), // "setColumns"
QT_MOC_LITERAL(11, 89, 7), // "columns"
QT_MOC_LITERAL(12, 97, 13), // "slotGlassInit"
QT_MOC_LITERAL(13, 111, 10), // "clearGlass"
QT_MOC_LITERAL(14, 122, 11) // "slotNewGame"

    },
    "GLASS\0signalGlassInit\0\0drawPattern\0"
    "Figure*\0next\0setScore\0endGame\0setRows\0"
    "rows\0setColumns\0columns\0slotGlassInit\0"
    "clearGlass\0slotNewGame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLASS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      13,    0,   76,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::UInt, 0x00095103,
      11, QMetaType::UInt, 0x00095103,

       0        // eod
};

void GLASS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLASS *_t = static_cast<GLASS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalGlassInit(); break;
        case 1: _t->drawPattern((*reinterpret_cast< Figure*(*)>(_a[1]))); break;
        case 2: _t->setScore((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->endGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setRows((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setColumns((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->slotGlassInit(); break;
        case 7: _t->clearGlass(); break;
        case 8: _t->slotNewGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GLASS::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLASS::signalGlassInit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GLASS::*_t)(Figure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLASS::drawPattern)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GLASS::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLASS::setScore)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GLASS::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLASS::endGame)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GLASS *_t = static_cast<GLASS *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->rows(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->columns(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GLASS *_t = static_cast<GLASS *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRows(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setColumns(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GLASS::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GLASS.data,
      qt_meta_data_GLASS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GLASS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLASS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GLASS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GLASS::signalGlassInit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GLASS::drawPattern(Figure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLASS::setScore(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLASS::endGame(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
