/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created: Wed May 8 22:16:44 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxAddClientId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditAddClientNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditAddClientPrenom;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditAddClientAdresse;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditAddClientCp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditAddClientVille;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditAddClientTelephone;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditAddClientMail;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonAddClient;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAddClientReset;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonAddClientQuit;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(685, 318);
        layoutWidget = new QWidget(SecondWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 11, 657, 276));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBoxAddClientId = new QSpinBox(layoutWidget);
        spinBoxAddClientId->setObjectName(QString::fromUtf8("spinBoxAddClientId"));

        horizontalLayout->addWidget(spinBoxAddClientId);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditAddClientNom = new QLineEdit(layoutWidget);
        lineEditAddClientNom->setObjectName(QString::fromUtf8("lineEditAddClientNom"));

        horizontalLayout_2->addWidget(lineEditAddClientNom);


        horizontalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditAddClientPrenom = new QLineEdit(layoutWidget);
        lineEditAddClientPrenom->setObjectName(QString::fromUtf8("lineEditAddClientPrenom"));

        horizontalLayout_3->addWidget(lineEditAddClientPrenom);


        horizontalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditAddClientAdresse = new QLineEdit(layoutWidget);
        lineEditAddClientAdresse->setObjectName(QString::fromUtf8("lineEditAddClientAdresse"));

        horizontalLayout_6->addWidget(lineEditAddClientAdresse);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditAddClientCp = new QLineEdit(layoutWidget);
        lineEditAddClientCp->setObjectName(QString::fromUtf8("lineEditAddClientCp"));

        horizontalLayout_5->addWidget(lineEditAddClientCp);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditAddClientVille = new QLineEdit(layoutWidget);
        lineEditAddClientVille->setObjectName(QString::fromUtf8("lineEditAddClientVille"));

        horizontalLayout_4->addWidget(lineEditAddClientVille);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_11->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEditAddClientTelephone = new QLineEdit(layoutWidget);
        lineEditAddClientTelephone->setObjectName(QString::fromUtf8("lineEditAddClientTelephone"));

        horizontalLayout_7->addWidget(lineEditAddClientTelephone);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditAddClientMail = new QLineEdit(layoutWidget);
        lineEditAddClientMail->setObjectName(QString::fromUtf8("lineEditAddClientMail"));

        horizontalLayout_8->addWidget(lineEditAddClientMail);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButtonAddClient = new QPushButton(layoutWidget);
        pushButtonAddClient->setObjectName(QString::fromUtf8("pushButtonAddClient"));

        horizontalLayout_10->addWidget(pushButtonAddClient);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushButtonAddClientReset = new QPushButton(layoutWidget);
        pushButtonAddClientReset->setObjectName(QString::fromUtf8("pushButtonAddClientReset"));

        horizontalLayout_10->addWidget(pushButtonAddClientReset);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButtonAddClientQuit = new QPushButton(layoutWidget);
        pushButtonAddClientQuit->setObjectName(QString::fromUtf8("pushButtonAddClientQuit"));

        verticalLayout_3->addWidget(pushButtonAddClientQuit);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_11->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_11);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SecondWindow", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SecondWindow", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SecondWindow", "Prenom :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SecondWindow", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SecondWindow", "Code postal :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SecondWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SecondWindow", "T\303\251l\303\251phone :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SecondWindow", "Mail :", 0, QApplication::UnicodeUTF8));
        pushButtonAddClient->setText(QApplication::translate("SecondWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonAddClientReset->setText(QApplication::translate("SecondWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        pushButtonAddClientQuit->setText(QApplication::translate("SecondWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
