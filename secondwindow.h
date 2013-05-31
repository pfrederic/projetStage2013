#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
    class SecondWindow;
}

class SecondWindow : public QDialog {
    Q_OBJECT
public:
    SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

protected:
    void changeEvent(QEvent *e);

public:
    Ui::SecondWindow *ui;

private slots:
    void on_pushButtonAddClientQuit_clicked();
    void on_pushButtonAddClientReset_clicked();
    void on_pushButtonAddClient_clicked();
};

#endif // SECONDWINDOW_H
