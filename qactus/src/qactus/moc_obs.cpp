/****************************************************************************
** Meta object code from reading C++ file 'obs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "obs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBS_t {
    QByteArrayData data[11];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBS_t qt_meta_stringdata_OBS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "OBS"
QT_MOC_LITERAL(1, 4, 15), // "isAuthenticated"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "selfSignedCertificate"
QT_MOC_LITERAL(4, 43, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 58, 12), // "networkError"
QT_MOC_LITERAL(6, 71, 22), // "finishedParsingPackage"
QT_MOC_LITERAL(7, 94, 11), // "OBSPackage*"
QT_MOC_LITERAL(8, 106, 23), // "finishedParsingRequests"
QT_MOC_LITERAL(9, 130, 18), // "QList<OBSRequest*>"
QT_MOC_LITERAL(10, 149, 19) // "finishedParsingList"

    },
    "OBS\0isAuthenticated\0\0selfSignedCertificate\0"
    "QNetworkReply*\0networkError\0"
    "finishedParsingPackage\0OBSPackage*\0"
    "finishedParsingRequests\0QList<OBSRequest*>\0"
    "finishedParsingList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    2,   53,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      10,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

       0        // eod
};

void OBS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBS *_t = static_cast<OBS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isAuthenticated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selfSignedCertificate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishedParsingPackage((*reinterpret_cast< OBSPackage*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: _t->finishedParsingRequests((*reinterpret_cast< QList<OBSRequest*>(*)>(_a[1]))); break;
        case 5: _t->finishedParsingList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBS::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::isAuthenticated)) {
                *result = 0;
            }
        }
        {
            typedef void (OBS::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::selfSignedCertificate)) {
                *result = 1;
            }
        }
        {
            typedef void (OBS::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::networkError)) {
                *result = 2;
            }
        }
        {
            typedef void (OBS::*_t)(OBSPackage * , const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::finishedParsingPackage)) {
                *result = 3;
            }
        }
        {
            typedef void (OBS::*_t)(QList<OBSRequest*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::finishedParsingRequests)) {
                *result = 4;
            }
        }
        {
            typedef void (OBS::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBS::finishedParsingList)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject OBS::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OBS.data,
      qt_meta_data_OBS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBS.stringdata0))
        return static_cast<void*>(const_cast< OBS*>(this));
    return QObject::qt_metacast(_clname);
}

int OBS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OBS::isAuthenticated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBS::selfSignedCertificate(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OBS::networkError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OBS::finishedParsingPackage(OBSPackage * _t1, const int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OBS::finishedParsingRequests(QList<OBSRequest*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OBS::finishedParsingList(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
