#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "materiel.h"
#include "medicament.h"
#include "visite_med.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_ajouter_3_clicked();

    void on_pb_supprimer_3_clicked();

    void on_pb_ajouter_9_clicked();

    void on_pb_supprimer_9_clicked();

    void on_pb_quitter_clicked();

    void on_pb_quitter_2_clicked();

    void on_pb_quitter_3_clicked();


    void on_recherche1_textChanged(const QString &arg1);


    void on_recherche1_windowIconTextChanged(const QString &iconText);

    void on_recherche1_3_textChanged(const QString &arg1);

    void on_recherche1_2_textChanged(const QString &arg1);

    void on_recherche1_textEdited(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_comboBox_activated(int index);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    medicament tmpmedicament;
    visite tmpvisite;
    remise tmpremise;
};

#endif // MAINWINDOW_H
