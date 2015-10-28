/****************************************************************************
** Meta object code from reading C++ file 'obsaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "obsaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obsaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSAccess_t {
    QByteArrayData data[22];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSAccess_t qt_meta_stringdata_OBSAccess = {
    {
QT_MOC_LITERAL(0, 0, 9), // "OBSAccess"
QT_MOC_LITERAL(1, 10, 15), // "isAuthenticated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "authenticated"
QT_MOC_LITERAL(4, 41, 21), // "selfSignedCertificate"
QT_MOC_LITERAL(5, 63, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 78, 5), // "reply"
QT_MOC_LITERAL(7, 84, 12), // "networkError"
QT_MOC_LITERAL(8, 97, 5), // "error"
QT_MOC_LITERAL(9, 103, 14), // "setCredentials"
QT_MOC_LITERAL(10, 118, 7), // "request"
QT_MOC_LITERAL(11, 126, 6), // "urlStr"
QT_MOC_LITERAL(12, 133, 3), // "row"
QT_MOC_LITERAL(13, 137, 11), // "postRequest"
QT_MOC_LITERAL(14, 149, 4), // "data"
QT_MOC_LITERAL(15, 154, 21), // "provideAuthentication"
QT_MOC_LITERAL(16, 176, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 192, 4), // "ator"
QT_MOC_LITERAL(18, 197, 13), // "replyFinished"
QT_MOC_LITERAL(19, 211, 11), // "onSslErrors"
QT_MOC_LITERAL(20, 223, 16), // "QList<QSslError>"
QT_MOC_LITERAL(21, 240, 4) // "list"

    },
    "OBSAccess\0isAuthenticated\0\0authenticated\0"
    "selfSignedCertificate\0QNetworkReply*\0"
    "reply\0networkError\0error\0setCredentials\0"
    "request\0urlStr\0row\0postRequest\0data\0"
    "provideAuthentication\0QAuthenticator*\0"
    "ator\0replyFinished\0onSslErrors\0"
    "QList<QSslError>\0list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSAccess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   73,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      10,    2,   81,    2, 0x0a /* Public */,
      13,    2,   86,    2, 0x0a /* Public */,
      15,    2,   91,    2, 0x08 /* Private */,
      18,    1,   96,    2, 0x08 /* Private */,
      19,    2,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   11,   14,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 16,    6,   17,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 20,    6,   21,

       0        // eod
};

void OBSAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSAccess *_t = static_cast<OBSAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isAuthenticated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selfSignedCertificate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setCredentials((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->request((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->request((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: _t->postRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->provideAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->onSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSAccess::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSAccess::isAuthenticated)) {
                *result = 0;
            }
        }
        {
            typedef void (OBSAccess::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSAccess::selfSignedCertificate)) {
                *result = 1;
            }
        }
        {
            typedef void (OBSAccess::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSAccess::networkError)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OBSAccess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OBSAccess.data,
      qt_meta_data_OBSAccess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSAccess.stringdata0))
        return static_cast<void*>(const_cast< OBSAccess*>(this));
    return QObject::qt_metacast(_clname);
}

int OBSAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OBSAccess::isAuthenticated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBSAccess::selfSignedCertificate(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OBSAccess::networkError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
