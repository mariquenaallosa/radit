/****************************************************************************
** Meta object code from reading C++ file 'qvumeter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lib/vumeter/include/qvumeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvumeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QVUMeter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      32,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,    9,    9,    9, 0x0a,
      73,    9,    9,    9, 0x0a,
      95,    9,    9,    9, 0x0a,
     116,    9,    9,    9, 0x0a,
     136,    9,    9,    9, 0x0a,
     153,    9,    9,    9, 0x0a,
     174,    9,    9,    9, 0x0a,
     196,    9,    9,    9, 0x0a,
     216,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     243,  236, 0x43095103,
     251,  236, 0x43095103,
     262,  236, 0x43095103,
     271,  236, 0x43095103,
     288,  281, 0x06095103,
     298,  281, 0x06095103,
     309,  281, 0x06095103,
     318,  281, 0x06095103,
     331,  327, 0x02095003,

       0        // eod
};

static const char qt_meta_stringdata_QVUMeter[] = {
    "QVUMeter\0\0valueLChanged(double)\0"
    "valueRChanged(double)\0setColorBg(QColor)\0"
    "setColorValue(QColor)\0setColorHigh(QColor)\0"
    "setColorLow(QColor)\0setValueDim(int)\0"
    "setLeftValue(double)\0setRightValue(double)\0"
    "setMinValue(double)\0setMaxValue(double)\0"
    "QColor\0colorBg\0colorValue\0colorLow\0"
    "colorHigh\0double\0leftValue\0rightValue\0"
    "minValue\0maxValue\0int\0dimValue\0"
};

void QVUMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QVUMeter *_t = static_cast<QVUMeter *>(_o);
        switch (_id) {
        case 0: _t->valueLChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueRChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setColorBg((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setColorValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setColorHigh((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setColorLow((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->setValueDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLeftValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setRightValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QVUMeter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QVUMeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QVUMeter,
      qt_meta_data_QVUMeter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVUMeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVUMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVUMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVUMeter))
        return static_cast<void*>(const_cast< QVUMeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int QVUMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = colorBg(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = colorValue(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = colorLow(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = colorHigh(); break;
        case 4: *reinterpret_cast< double*>(_v) = leftValue(); break;
        case 5: *reinterpret_cast< double*>(_v) = rightValue(); break;
        case 6: *reinterpret_cast< double*>(_v) = minValue(); break;
        case 7: *reinterpret_cast< double*>(_v) = maxValue(); break;
        case 8: *reinterpret_cast< int*>(_v) = valueDim(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColorBg(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setColorValue(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setColorLow(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setColorHigh(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setLeftValue(*reinterpret_cast< double*>(_v)); break;
        case 5: setRightValue(*reinterpret_cast< double*>(_v)); break;
        case 6: setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 7: setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 8: setValueDim(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QVUMeter::valueLChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVUMeter::valueRChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
