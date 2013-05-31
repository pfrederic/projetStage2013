#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <secondwindow.h>
#include "ui_secondwindow.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QComboBox>
#include <QAbstractItemView>
#include <QSqlTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRecord>
#include <QObject>
#include <QCalendarWidget>
#include <QSqlError>
#include <QList>
#include <QIcon>
#include <QSpinBox>
#include <QString>
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Fenetre principal");
    setWindowIcon(QIcon("../icon.png"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("bd_gestionCommercial");
    db.setUserName("etudiant");
    db.setPassword("ini01");
    bool ok = db.open();
    if(!ok)
    {
        QMessageBox::critical(this,"Echec de connexion","La connexion à la base de données a échoué. Contactez votre administrateur réseau ...",QMessageBox::Ok,QMessageBox::Ok);
        close();
    }
    else
    {
        statusBar()->showMessage("Connexion à la base réussi");
        on_actionCommande_triggered();
        on_actionCatalogue_triggered();
        on_actionTVA_triggered();
        //les connexions des signaux aux slots
        connect(ui->lineEditCommandeIdentifiant, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
        connect(ui->lineEditCommandeNom, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
        connect(ui->lineEditCommandePrenom, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
        connect(ui->lineEditCommandeVille, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
        connect(ui->lineEditCommandeCP, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
        connect(ui->comboBoxCommandeNumero, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBoxCommandeNumero_activated(QString )));
        connect(ui->pushButtonCommandeNewClient, SIGNAL(clicked()), this, SLOT(switchWindow()));
        connect(ui->tableViewClientSearch, SIGNAL(clicked(QModelIndex)), this, SLOT(afficherCommandeClient()));
        connect(ui->comboBoxCommandeNumero, SIGNAL(currentIndexChanged(int)), this, SLOT(afficherProduit()));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    if(QMessageBox::question(this,this->windowTitle(),tr("Etes-vous sur de vouloir quitter l'application ?")
        ,QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Ok)
        {
            close();
        }
}

void MainWindow::on_actionCommande_triggered()
{
    modeleProduit= new QSqlTableModel(this);
    ui->comboBoxCommandeAjoutProduit->setModel(modeleProduit);
    modeleProduit->setTable("Produit");
    modeleProduit->select();

    modeleClient=new QSqlTableModel(this);
    ui->tableViewClientSearch->setModel(modeleClient);
    modeleClient->setTable("Client");
    modeleClient->setEditStrategy(QSqlTableModel::OnRowChange);
    modeleClient->select();
    ui->tableViewClientSearch->show();

    modeleClient->setHeaderData(0,Qt::Horizontal,"no");
    modeleClient->setHeaderData(1,Qt::Horizontal,"nom");
    modeleClient->setHeaderData(2,Qt::Horizontal,"prénom");
    modeleClient->setHeaderData(3,Qt::Horizontal,"ville");
    modeleClient->setHeaderData(4,Qt::Horizontal,"cp");
    modeleClient->setHeaderData(5,Qt::Horizontal,"adresse");
    modeleClient->setHeaderData(6,Qt::Horizontal,"téléphone");
    modeleClient->setHeaderData(7,Qt::Horizontal,"mail");

    QDate date=QDate::currentDate();
    ui->dateEditCommande->setDate(date);
    ui->comboBoxCommandeNumero->addItem("");

    modelClient=new QSqlQueryModel;
    /*
    modelClient->setQuery("SELECT * FROM Client;");
    ui->tableViewClientSearch->setModel(modelClient);
    */

    ui->tableViewClientSearch->resizeColumnsToContents();

    QSqlQuery maRequeteNoCommande("SELECT no FROM Commande");
    while(maRequeteNoCommande.next())
    {
        ui->comboBoxCommandeNumero->addItem(maRequeteNoCommande.value(0).toString());
    }

    QSqlQuery maRequeteNoCommandeMax("SELECT ifnull(max(no)+1,1) FROM Commande");
    maRequeteNoCommandeMax.first();
    ui->labelCommandeNoMax->setText(maRequeteNoCommandeMax.value(0).toString());

    ui->comboBoxCommandeAjoutProduit->setModelColumn(1);

    //afficher le bon onglet
    ui->tabWidgetAction->setCurrentIndex(1);
}

void MainWindow::on_actionCatalogue_triggered()
{
    modelCatalogue=new QSqlRelationalTableModel(this,db);
    modelCatalogue->setTable("Produit");
    modelCatalogue->setEditStrategy(QSqlTableModel::OnRowChange);

    modelCatalogue->setRelation(5, QSqlRelation("TTVA","no","taux"));
    ui->tableViewCatalogue->setItemDelegate(new QSqlRelationalDelegate(ui->tableViewTva));

    modelCatalogue->select();
    modelCatalogue->setHeaderData(0,Qt::Horizontal,("no"));
    modelCatalogue->setHeaderData(1,Qt::Horizontal,("Désignation"));
    modelCatalogue->setHeaderData(2,Qt::Horizontal,("prix unitaire HT"));
    modelCatalogue->setHeaderData(3,Qt::Horizontal,("quantité"));
    modelCatalogue->setHeaderData(4,Qt::Horizontal,("image"));
    modelCatalogue->setHeaderData(5,Qt::Horizontal,("TVA"));
    //on associe le modèle à sa vue
    ui->tableViewCatalogue->setModel(modelCatalogue);
    //vue...montre-toi...
    ui->tableViewCatalogue->show();
    //affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(0);
    //adapter la largueur des colonnes
    ui->tableViewCatalogue->resizeColumnsToContents();

}

void MainWindow::on_actionTVA_triggered()
{
    modelTva=new QSqlTableModel(this,db);
    modelTva->setTable("TTVA");
    modelTva->setEditStrategy(QSqlTableModel::OnRowChange);
    modelTva->select();
    modelTva->setHeaderData(0,Qt::Horizontal,("no"));
    modelTva->setHeaderData(1,Qt::Horizontal,("Taux"));
    //on associe le modèle à sa vue
    ui->tableViewTva->setModel(modelTva);
    //vue montre-toi
    ui->tableViewTva->show();
    //afiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(2);
    //adapter la largeur des colonnes
    ui->tableViewTva->resizeColumnsToContents();
}

void MainWindow::on_pushButtonAjouterTva_clicked()
{
    QSqlRecord nouvelleTva;
    modelTva->insertRecord(-1,nouvelleTva);
}

void MainWindow::on_pushButtonAjouterCatalogue_clicked()
{
    QSqlRecord nouveauProduit;
    modelCatalogue->insertRecord(-1,nouveauProduit);
}

void MainWindow::on_pushButtonSupprimerCatalogue_clicked()
{
    int numeroLigneSelectionnee=ui->tableViewCatalogue->selectionModel()->currentIndex().row();
    modelCatalogue->removeRow(numeroLigneSelectionnee);
}

void MainWindow::on_pushButtonSupprimerTva_clicked()
{
    int numeroLigneSelectionnee=ui->tableViewTva->selectionModel()->currentIndex().row();
    modelTva->removeRow(numeroLigneSelectionnee);
}

void MainWindow::monSlot()
{
   QString where="";
   QStringList listeRestrictions;
   if(ui->lineEditCommandeIdentifiant->text()!="")
   {
        listeRestrictions.append(" Client.no = "+ui->lineEditCommandeIdentifiant->text());
   }
   if(ui->lineEditCommandeNom->text()!="")
   {
       listeRestrictions.append(" Client.nom like '%"+ui->lineEditCommandeNom->text()+"%'");
   }
   if(ui->lineEditCommandePrenom->text()!="")
   {
       listeRestrictions.append(" Client.prenom like '%"+ui->lineEditCommandePrenom->text()+"%'");
   }
   if(ui->lineEditCommandeVille->text()!="")
   {
       listeRestrictions.append(" Client.ville like '%"+ui->lineEditCommandeVille->text()+"%'");
   }
   if(ui->lineEditCommandeCP->text()!="")
   {
       listeRestrictions.append(" Client.cp like '%"+ui->lineEditCommandeCP->text()+"%'");
   }
   if(listeRestrictions.count()>0)
   {
       where=" where"+listeRestrictions.join(" and ");
   }

   QString textRequeteClient="SELECT * FROM Client"+where+";";
   qDebug()<<textRequeteClient;
   modelClient->setQuery(textRequeteClient);
   ui->tableViewClientSearch->setModel(modelClient);
   ui->tableViewClientSearch->show();

}

void MainWindow::switchWindow()
{
    SecondWindow * nouvelleFenetre = new SecondWindow(this);
    QSqlQuery clientId("SELECT MAX(no) FROM Client;");
    clientId.next();
    nouvelleFenetre->ui->spinBoxAddClientId->setMinimum(clientId.value(0).toInt()+1);
    if(nouvelleFenetre->exec()==QDialog::Accepted)
    {
        QSqlRecord recordClient = modeleClient->record();
        recordClient.setValue("no",nouvelleFenetre->ui->spinBoxAddClientId->text());
        recordClient.setValue("nom",nouvelleFenetre->ui->lineEditAddClientNom->text());
        recordClient.setValue("prenom",nouvelleFenetre->ui->lineEditAddClientPrenom->text());
        recordClient.setValue("ville",nouvelleFenetre->ui->lineEditAddClientVille->text());
        recordClient.setValue("cp",nouvelleFenetre->ui->lineEditAddClientCp->text());
        recordClient.setValue("adresse",nouvelleFenetre->ui->lineEditAddClientAdresse->text());
        recordClient.setValue("tel",nouvelleFenetre->ui->lineEditAddClientTelephone->text());
        recordClient.setValue("mail",nouvelleFenetre->ui->lineEditAddClientMail->text());
        if(modeleClient->insertRecord(-1,recordClient))
        {
            ui->statusBar->showMessage("Client ajouté avec succés",3000);
        }
        else
        {
            QString erreurSql=db.lastError().databaseText();
            ui->statusBar->showMessage(erreurSql,3000);
        }
    }
}

void MainWindow::afficherProduit()
{
    modelProduit=new QSqlQueryModel;

    //Récupérer le valeurs des différents QObject qui sont relié a ce slot
    QString whereProduit="";
    QStringList listeRestrictionProduit;
    //Rédaction de la requête
    if(ui->comboBoxCommandeNumero->currentText()!="")
    {
        listeRestrictionProduit.append(" noCom = "+ui->comboBoxCommandeNumero->currentText());
    }
    if(listeRestrictionProduit.count()>0)
    {
        whereProduit=" WHERE"+listeRestrictionProduit.join(" and ");
    }
    //Affichage dans le tableau des produits
    QString textRequete="SELECT Produit.no, Produit.designation, Produit.puHt, LDC.qte FROM Client INNER JOIN Commande ON Client.no = noClient INNER JOIN LDC ON Commande.no = noCom INNER JOIN Produit ON Produit.no = noProd"+whereProduit+";";
    qDebug()<<textRequete;
    modelProduit->setQuery(textRequete);
    ui->tableViewCommandeProduit->setModel(modelProduit);
    ui->tableViewCommandeProduit->show();
}

void MainWindow::on_comboBoxCommandeNumero_activated(QString )
{
    QString noCommande = ui->comboBoxCommandeNumero->currentText();
    if(noCommande!="")
    {
        QString requeteSelectionClientCommande=" SELECT Client.* FROM Commande INNER JOIN Client ON noClient=Client.no WHERE Commande.no = "+noCommande+";";
        modelClient->setQuery(requeteSelectionClientCommande);
        QSqlQuery requetePourDateCommande(" SELECT Commande.dateCommande FROM Commande INNER JOIN Client ON noClient=Client.no WHERE Commande.no = "+noCommande+";");
        requetePourDateCommande.next();
        qDebug()<<requetePourDateCommande.value(0).toString();
        QDate date = QDate::fromString(requetePourDateCommande.value(0).toString(),"yyyy-MM-dd");
        qDebug()<<date;
        ui->dateEditCommande->setDate(date);
    }
    else
    {
        modelClient->setQuery("SELECT * FROM Client;");
    }
    ui->tableViewClientSearch->setModel(modelClient);
    ui->tableViewClientSearch->show();
}

void MainWindow::afficherCommandeClient()
{
    ui->comboBoxCommandeNumero->clear();
    ui->comboBoxCommandeNumero->addItem("");
    QItemSelectionModel *select = ui->tableViewClientSearch->selectionModel();

    if(select->hasSelection())
    {
        QModelIndexList rows=select->selectedRows(0);
        QModelIndex row=rows.at(0);
        qDebug()<<row.data(0).toInt();
        numeroDuClient = row.data(0).toString();
        qDebug()<<numeroDuClient;
        QSqlQuery maRequeteNoCommande(" SELECT Commande.no FROM Commande INNER JOIN Client ON Client.no = noClient WHERE noClient = "+numeroDuClient+";");
        while(maRequeteNoCommande.next())
        {
            ui->comboBoxCommandeNumero->addItem(maRequeteNoCommande.value(0).toString());
        }
    }
}

void MainWindow::on_pushButtonCommandeAjouterProduit_clicked()
{
    ui->tableWidgetCommandePanier->setRowCount(ui->tableWidgetCommandePanier->rowCount()+1);

    ui->comboBoxCommandeAjoutProduit->setModelColumn(0);
    QString numeroProduit=ui->comboBoxCommandeAjoutProduit->currentText();
    ui->comboBoxCommandeAjoutProduit->setModelColumn(1);
    QString quantiteCommandee=QString::number(ui->spinBoxCommandeProduitQte->value());
    QString designationProduit=ui->comboBoxCommandeAjoutProduit->currentText();
    //calcule du prix total
    ui->comboBoxCommandeAjoutProduit->setModelColumn(2);
    QString prixProduitStr=ui->comboBoxCommandeAjoutProduit->currentText();
    float prixProduit=prixProduitStr.toFloat();
    int qte=ui->spinBoxCommandeProduitQte->value();
    float prixTotal = prixProduit*qte;
    QString prixTotalStr=QString::number(prixTotal);

    ui->comboBoxCommandeAjoutProduit->setModelColumn(1);

    QTableWidgetItem * itemNoProduit=new QTableWidgetItem(numeroProduit);
    ui->tableWidgetCommandePanier->setItem(ui->tableWidgetCommandePanier->rowCount()-1,0,itemNoProduit);

    QTableWidgetItem * itemDesignationProduit=new QTableWidgetItem(designationProduit);
    ui->tableWidgetCommandePanier->setItem(ui->tableWidgetCommandePanier->rowCount()-1,1,itemDesignationProduit);

    QTableWidgetItem * itemQuantiteProduit = new QTableWidgetItem(quantiteCommandee);
    ui->tableWidgetCommandePanier->setItem(ui->tableWidgetCommandePanier->rowCount()-1,2,itemQuantiteProduit);

    QTableWidgetItem * itemPrixProduit = new QTableWidgetItem(prixTotalStr);
    ui->tableWidgetCommandePanier->setItem(ui->tableWidgetCommandePanier->rowCount()-1,3,itemPrixProduit);
}


void MainWindow::on_pushButtonAjouterCommande_clicked()
{
    QSqlQuery maRequeteCommande;
    QSqlQuery maRequeteLDC;
    QTableWidgetItem *itemPrix = new QTableWidgetItem;

         bool ok2;
         maRequeteCommande.prepare("INSERT INTO Commande VALUES (:no, :dateCommande, :statut, :noClient)");
         maRequeteCommande.bindValue(":no", ui->labelCommandeNoMax->text());
         maRequeteCommande.bindValue(":dateCommande", ui->dateEditCommande->text());
         maRequeteCommande.bindValue(":statut", "1");
         maRequeteCommande.bindValue(":noClient", numeroDuClient);

         for(int i=0; i<ui->tableWidgetCommandePanier->rowCount();i++)
         {
             qDebug()<<"----------------------------------------------------";
             qDebug()<<i;
             qDebug()<<ui->tableWidgetCommandePanier->rowCount();
             itemPrix = ui->tableWidgetCommandePanier->item(i, 3);
             maRequeteLDC.prepare("INSERT INTO LDC VALUES (:noCom, :noProd, :qte, :prixHt)");
             maRequeteLDC.bindValue(":noCom", ui->labelCommandeNoMax->text());
             maRequeteLDC.bindValue(":noProd", ui->comboBoxCommandeAjoutProduit->currentText());
             maRequeteLDC.bindValue(":qte", QString::number(ui->spinBoxCommandeProduitQte->value()));
             maRequeteLDC.bindValue(":prixHt", itemPrix->text());
             ok2 = maRequeteLDC.exec();
         }
         bool ok1 = maRequeteCommande.exec();
         if(ok1 && ok2)
         {
               statusBar()->showMessage("Commande ajouté");
         }
}
