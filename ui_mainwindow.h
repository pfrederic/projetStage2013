/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 24 10:47:39 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionClient_2;
    QAction *actionCommande;
    QAction *actionA_propos;
    QAction *actionCatalogue;
    QAction *actionTVA;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidgetAction;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QTableView *tableViewCatalogue;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonAjouterCatalogue;
    QPushButton *pushButtonSupprimerCatalogue;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QComboBox *comboBoxCommandeNumero;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_13;
    QDateEdit *dateEditCommande;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QLineEdit *lineEditCommandeIdentifiant;
    QLabel *label_18;
    QLineEdit *lineEditCommandeVille;
    QLabel *label_16;
    QLineEdit *lineEditCommandeNom;
    QLabel *label_19;
    QLineEdit *lineEditCommandeCP;
    QLabel *label_17;
    QLineEdit *lineEditCommandePrenom;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCommandeNewClient;
    QLabel *label_2;
    QTableView *tableViewClientSearch;
    QLabel *label_3;
    QTableView *tableViewCommandeProduit;
    QGroupBox *groupBoxCommandeAjoutProduit;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxCommandeAjoutProduit;
    QSpinBox *spinBoxCommandeProduitQte;
    QPushButton *pushButtonCommandeAjouterProduit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelCommandeNoMax;
    QGroupBox *groupBoxCommandePanier;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidgetCommandePanier;
    QPushButton *pushButtonAjouterCommande;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_11;
    QTableView *tableViewTva;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButtonAjouterTva;
    QPushButton *pushButtonSupprimerTva;
    QSpacerItem *horizontalSpacer_13;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuGestion;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 955);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionClient_2 = new QAction(MainWindow);
        actionClient_2->setObjectName(QString::fromUtf8("actionClient_2"));
        actionCommande = new QAction(MainWindow);
        actionCommande->setObjectName(QString::fromUtf8("actionCommande"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        actionCatalogue = new QAction(MainWindow);
        actionCatalogue->setObjectName(QString::fromUtf8("actionCatalogue"));
        actionTVA = new QAction(MainWindow);
        actionTVA->setObjectName(QString::fromUtf8("actionTVA"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidgetAction = new QTabWidget(centralWidget);
        tabWidgetAction->setObjectName(QString::fromUtf8("tabWidgetAction"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout = new QVBoxLayout(tab_5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_6);

        tableViewCatalogue = new QTableView(tab_5);
        tableViewCatalogue->setObjectName(QString::fromUtf8("tableViewCatalogue"));
        tableViewCatalogue->setAlternatingRowColors(true);
        tableViewCatalogue->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewCatalogue->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableViewCatalogue);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        pushButtonAjouterCatalogue = new QPushButton(tab_5);
        pushButtonAjouterCatalogue->setObjectName(QString::fromUtf8("pushButtonAjouterCatalogue"));

        horizontalLayout_5->addWidget(pushButtonAjouterCatalogue);

        pushButtonSupprimerCatalogue = new QPushButton(tab_5);
        pushButtonSupprimerCatalogue->setObjectName(QString::fromUtf8("pushButtonSupprimerCatalogue"));

        horizontalLayout_5->addWidget(pushButtonSupprimerCatalogue);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidgetAction->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic L"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_14);

        comboBoxCommandeNumero = new QComboBox(tab_2);
        comboBoxCommandeNumero->setObjectName(QString::fromUtf8("comboBoxCommandeNumero"));

        horizontalLayout->addWidget(comboBoxCommandeNumero);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("URW Gothic L"));
        font1.setPointSize(14);
        font1.setUnderline(false);
        label_13->setFont(font1);

        horizontalLayout->addWidget(label_13);

        dateEditCommande = new QDateEdit(tab_2);
        dateEditCommande->setObjectName(QString::fromUtf8("dateEditCommande"));

        horizontalLayout->addWidget(dateEditCommande);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("URW Gothic L"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        lineEditCommandeIdentifiant = new QLineEdit(tab_2);
        lineEditCommandeIdentifiant->setObjectName(QString::fromUtf8("lineEditCommandeIdentifiant"));

        gridLayout->addWidget(lineEditCommandeIdentifiant, 0, 1, 1, 1);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 0, 2, 1, 1);

        lineEditCommandeVille = new QLineEdit(tab_2);
        lineEditCommandeVille->setObjectName(QString::fromUtf8("lineEditCommandeVille"));

        gridLayout->addWidget(lineEditCommandeVille, 0, 3, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        lineEditCommandeNom = new QLineEdit(tab_2);
        lineEditCommandeNom->setObjectName(QString::fromUtf8("lineEditCommandeNom"));

        gridLayout->addWidget(lineEditCommandeNom, 1, 1, 1, 1);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 1, 2, 1, 1);

        lineEditCommandeCP = new QLineEdit(tab_2);
        lineEditCommandeCP->setObjectName(QString::fromUtf8("lineEditCommandeCP"));

        gridLayout->addWidget(lineEditCommandeCP, 1, 3, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        lineEditCommandePrenom = new QLineEdit(tab_2);
        lineEditCommandePrenom->setObjectName(QString::fromUtf8("lineEditCommandePrenom"));

        gridLayout->addWidget(lineEditCommandePrenom, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        pushButtonCommandeNewClient = new QPushButton(tab_2);
        pushButtonCommandeNewClient->setObjectName(QString::fromUtf8("pushButtonCommandeNewClient"));

        gridLayout->addWidget(pushButtonCommandeNewClient, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("URW Gothic L"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_2->setFont(font3);

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        tableViewClientSearch = new QTableView(tab_2);
        tableViewClientSearch->setObjectName(QString::fromUtf8("tableViewClientSearch"));
        tableViewClientSearch->setAlternatingRowColors(true);
        tableViewClientSearch->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewClientSearch->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tableViewClientSearch, 4, 0, 1, 2);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        tableViewCommandeProduit = new QTableView(tab_2);
        tableViewCommandeProduit->setObjectName(QString::fromUtf8("tableViewCommandeProduit"));

        gridLayout_2->addWidget(tableViewCommandeProduit, 6, 0, 1, 2);

        groupBoxCommandeAjoutProduit = new QGroupBox(tab_2);
        groupBoxCommandeAjoutProduit->setObjectName(QString::fromUtf8("groupBoxCommandeAjoutProduit"));
        horizontalLayout_3 = new QHBoxLayout(groupBoxCommandeAjoutProduit);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBoxCommandeAjoutProduit = new QComboBox(groupBoxCommandeAjoutProduit);
        comboBoxCommandeAjoutProduit->setObjectName(QString::fromUtf8("comboBoxCommandeAjoutProduit"));

        horizontalLayout_3->addWidget(comboBoxCommandeAjoutProduit);

        spinBoxCommandeProduitQte = new QSpinBox(groupBoxCommandeAjoutProduit);
        spinBoxCommandeProduitQte->setObjectName(QString::fromUtf8("spinBoxCommandeProduitQte"));

        horizontalLayout_3->addWidget(spinBoxCommandeProduitQte);

        pushButtonCommandeAjouterProduit = new QPushButton(groupBoxCommandeAjoutProduit);
        pushButtonCommandeAjouterProduit->setObjectName(QString::fromUtf8("pushButtonCommandeAjouterProduit"));

        horizontalLayout_3->addWidget(pushButtonCommandeAjouterProduit);


        gridLayout_2->addWidget(groupBoxCommandeAjoutProduit, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelCommandeNoMax = new QLabel(tab_2);
        labelCommandeNoMax->setObjectName(QString::fromUtf8("labelCommandeNoMax"));

        horizontalLayout_2->addWidget(labelCommandeNoMax);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 1, 1, 1);

        groupBoxCommandePanier = new QGroupBox(tab_2);
        groupBoxCommandePanier->setObjectName(QString::fromUtf8("groupBoxCommandePanier"));
        verticalLayout_3 = new QVBoxLayout(groupBoxCommandePanier);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidgetCommandePanier = new QTableWidget(groupBoxCommandePanier);
        if (tableWidgetCommandePanier->columnCount() < 4)
            tableWidgetCommandePanier->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCommandePanier->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCommandePanier->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetCommandePanier->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCommandePanier->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetCommandePanier->setObjectName(QString::fromUtf8("tableWidgetCommandePanier"));

        verticalLayout_3->addWidget(tableWidgetCommandePanier);


        gridLayout_2->addWidget(groupBoxCommandePanier, 8, 0, 1, 2);

        pushButtonAjouterCommande = new QPushButton(tab_2);
        pushButtonAjouterCommande->setObjectName(QString::fromUtf8("pushButtonAjouterCommande"));

        gridLayout_2->addWidget(pushButtonAjouterCommande, 9, 0, 1, 1);

        tabWidgetAction->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        verticalLayout_5->addLayout(horizontalLayout_8);

        tableViewTva = new QTableView(tab_3);
        tableViewTva->setObjectName(QString::fromUtf8("tableViewTva"));
        tableViewTva->setAlternatingRowColors(true);
        tableViewTva->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewTva->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_5->addWidget(tableViewTva);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        pushButtonAjouterTva = new QPushButton(tab_3);
        pushButtonAjouterTva->setObjectName(QString::fromUtf8("pushButtonAjouterTva"));

        horizontalLayout_7->addWidget(pushButtonAjouterTva);

        pushButtonSupprimerTva = new QPushButton(tab_3);
        pushButtonSupprimerTva->setObjectName(QString::fromUtf8("pushButtonSupprimerTva"));

        horizontalLayout_7->addWidget(pushButtonSupprimerTva);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_5->addLayout(horizontalLayout_7);

        tabWidgetAction->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidgetAction);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuGestion = new QMenu(menuBar);
        menuGestion->setObjectName(QString::fromUtf8("menuGestion"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuGestion->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuGestion->addAction(actionCommande);
        menuGestion->addAction(actionCatalogue);
        menuGestion->addAction(actionTVA);
        menuAide->addAction(actionA_propos);

        retranslateUi(MainWindow);

        tabWidgetAction->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionClient_2->setText(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        actionCommande->setText(QApplication::translate("MainWindow", "Commande", 0, QApplication::UnicodeUTF8));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
        actionCatalogue->setText(QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        actionTVA->setText(QApplication::translate("MainWindow", "TVA", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterCatalogue->setText(QApplication::translate("MainWindow", "Nouveau", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerCatalogue->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_5), QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; text-decoration: underline;\">Num\303\251ro :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'URW Gothic L'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Date :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dateEditCommande->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Rechercher un client", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Nom :", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Code Postal :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Prenom :", 0, QApplication::UnicodeUTF8));
        pushButtonCommandeNewClient->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "R\303\251sultat de la recherche", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Produit de la commande", 0, QApplication::UnicodeUTF8));
        groupBoxCommandeAjoutProduit->setTitle(QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        pushButtonCommandeAjouterProduit->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Commande n\302\260", 0, QApplication::UnicodeUTF8));
        labelCommandeNoMax->setText(QString());
        groupBoxCommandePanier->setTitle(QApplication::translate("MainWindow", "Panier", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCommandePanier->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCommandePanier->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "D\303\251signation", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetCommandePanier->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCommandePanier->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "PrixHt", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterCommande->setText(QApplication::translate("MainWindow", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_2), QApplication::translate("MainWindow", "Commande", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "TVA", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterTva->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerTva->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_3), QApplication::translate("MainWindow", "TVA", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuGestion->setTitle(QApplication::translate("MainWindow", "Gestion", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
