#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMainWindow>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QString numeroDuClient;
    QSqlDatabase db;
    //QSqlQueryModel
    QSqlQueryModel * modelClient;
    QSqlQueryModel * modelProduit;

    //QSqlTableModel
    QSqlTableModel * modelTva;
    QSqlTableModel * modeleClient;
    QSqlTableModel * modeleProduit;

    //le modele associé au catalogue
    QSqlRelationalTableModel * modelCatalogue;

private slots:
    //void on_pushButtonCommandeNewClient_clicked();
    void on_pushButtonAjouterCommande_clicked();
    void on_pushButtonCommandeAjouterProduit_clicked();
    void on_comboBoxCommandeNumero_activated(QString );
    //void on_tableViewCommandeClient_activated(QModelIndex index);
    //void on_pushButtonCommandeAjouterClient_clicked();
    void on_pushButtonSupprimerTva_clicked();
    void on_pushButtonSupprimerCatalogue_clicked();
    void on_pushButtonAjouterCatalogue_clicked();
    void on_pushButtonAjouterTva_clicked();
    void on_actionTVA_triggered();
    void on_actionCatalogue_triggered();
    void on_actionCommande_triggered();
    void on_actionQuitter_triggered();
    void monSlot();
    void switchWindow();
    void afficherProduit();
    void afficherCommandeClient();
};

#endif // MAINWINDOW_H
