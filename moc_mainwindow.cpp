/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu May 23 17:51:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      51,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     142,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     260,   11,   11,   11, 0x08,
     294,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     350,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     409,   11,   11,   11, 0x08,
     419,   11,   11,   11, 0x08,
     434,   11,   11,   11, 0x08,
     452,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonAjouterCommande_clicked()\0"
    "on_pushButtonCommandeAjouterProduit_clicked()\0"
    "on_comboBoxCommandeNumero_activated(QString)\0"
    "on_pushButtonSupprimerTva_clicked()\0"
    "on_pushButtonSupprimerCatalogue_clicked()\0"
    "on_pushButtonAjouterCatalogue_clicked()\0"
    "on_pushButtonAjouterTva_clicked()\0"
    "on_actionTVA_triggered()\0"
    "on_actionCatalogue_triggered()\0"
    "on_actionCommande_triggered()\0"
    "on_actionQuitter_triggered()\0monSlot()\0"
    "switchWindow()\0afficherProduit()\0"
    "afficherCommandeClient()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonAjouterCommande_clicked(); break;
        case 1: on_pushButtonCommandeAjouterProduit_clicked(); break;
        case 2: on_comboBoxCommandeNumero_activated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: on_pushButtonSupprimerTva_clicked(); break;
        case 4: on_pushButtonSupprimerCatalogue_clicked(); break;
        case 5: on_pushButtonAjouterCatalogue_clicked(); break;
        case 6: on_pushButtonAjouterTva_clicked(); break;
        case 7: on_actionTVA_triggered(); break;
        case 8: on_actionCatalogue_triggered(); break;
        case 9: on_actionCommande_triggered(); break;
        case 10: on_actionQuitter_triggered(); break;
        case 11: monSlot(); break;
        case 12: switchWindow(); break;
        case 13: afficherProduit(); break;
        case 14: afficherCommandeClient(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
