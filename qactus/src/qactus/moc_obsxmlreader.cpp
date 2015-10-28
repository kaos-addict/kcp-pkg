/****************************************************************************
** Meta object code from reading C++ file 'obsxmlreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "obsxmlreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obsxmlreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSXmlReader_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSXmlReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSXmlReader_t qt_meta_stringdata_OBSXmlReader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OBSXmlReader"
QT_MOC_LITERAL(1, 13, 22), // "finishedParsingPackage"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "OBSPackage*"
QT_MOC_LITERAL(4, 49, 23), // "finishedParsingRequests"
QT_MOC_LITERAL(5, 73, 18), // "QList<OBSRequest*>"
QT_MOC_LITERAL(6, 92, 19) // "finishedParsingList"

    },
    "OBSXmlReader\0finishedParsingPackage\0"
    "\0OBSPackage*\0finishedParsingRequests\0"
    "QList<OBSRequest*>\0finishedParsingList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSXmlReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       4,    1,   34,    2, 0x06 /* Public */,
       6,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

       0        // eod
};

void OBSXmlReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSXmlReader *_t = static_cast<OBSXmlReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishedParsingPackage((*reinterpret_cast< OBSPackage*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->finishedParsingRequests((*reinterpret_cast< QList<OBSRequest*>(*)>(_a[1]))); break;
        case 2: _t->finishedParsingList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSXmlReader::*_t)(OBSPackage * , const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSXmlReader::finishedParsingPackage)) {
                *result = 0;
            }
        }
        {
            typedef void (OBSXmlReader::*_t)(QList<OBSRequest*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSXmlReader::finishedParsingRequests)) {
                *result = 1;
            }
        }
        {
            typedef void (OBSXmlReader::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSXmlReader::finishedParsingList)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OBSXmlReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OBSXmlReader.data,
      qt_meta_data_OBSXmlReader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSXmlReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSXmlReader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSXmlReader.stringdata0))
        return static_cast<void*>(const_cast< OBSXmlReader*>(this));
    return QObject::qt_metacast(_clname);
}

int OBSXmlReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OBSXmlReader::finishedParsingPackage(OBSPackage * _t1, const int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBSXmlReader::finishedParsingRequests(QList<OBSRequest*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OBSXmlReader::finishedParsingList(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
