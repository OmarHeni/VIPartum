/****************************************************************************
** Meta object code from reading C++ file 'facture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../facture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_facture_t {
    QByteArrayData data[12];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_facture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_facture_t qt_meta_stringdata_facture = {
    {
QT_MOC_LITERAL(0, 0, 7), // "facture"
QT_MOC_LITERAL(1, 8, 23), // "on_pb_ajouter_9_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 27), // "on_recherche1_4_textChanged"
QT_MOC_LITERAL(4, 61, 4), // "arg1"
QT_MOC_LITERAL(5, 66, 19), // "on_mat_supp_clicked"
QT_MOC_LITERAL(6, 86, 18), // "on_mat_mod_clicked"
QT_MOC_LITERAL(7, 105, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(8, 127, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 151, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 173, 27), // "on_recherche1_3_textChanged"
QT_MOC_LITERAL(11, 201, 18) // "on_suppr_m_clicked"

    },
    "facture\0on_pb_ajouter_9_clicked\0\0"
    "on_recherche1_4_textChanged\0arg1\0"
    "on_mat_supp_clicked\0on_mat_mod_clicked\0"
    "on_pb_ajouter_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_clicked\0on_recherche1_3_textChanged\0"
    "on_suppr_m_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_facture[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void facture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<facture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_ajouter_9_clicked(); break;
        case 1: _t->on_recherche1_4_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_mat_supp_clicked(); break;
        case 3: _t->on_mat_mod_clicked(); break;
        case 4: _t->on_pb_ajouter_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_recherche1_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_suppr_m_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject facture::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_facture.data,
    qt_meta_data_facture,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *facture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *facture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_facture.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int facture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
