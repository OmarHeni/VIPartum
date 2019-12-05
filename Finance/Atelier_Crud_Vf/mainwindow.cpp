#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "materiel.h"
#include "firstwindow.h"
#include "visite_med.h"
#include "modifier.h"
#include <QFile>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
QPixmap pix ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/ident.png");
ui->label_pic->setPixmap(pix);
QPixmap pixe ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/prix.png");
ui->label_prix->setPixmap(pixe);
QPixmap pix1 ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/deleg.png");
ui->label_pic_2->setPixmap(pix1);
QPixmap pix2 ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/pati.png");
ui->label_pic_3->setPixmap(pix2);
QPixmap pix3 ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/medicine.png");
ui->label_medicine->setPixmap(pix3);
QPixmap pix4 ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/materiel.png");
ui->label_materiel->setPixmap(pix4);
QPixmap pixx ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/visit.png");
ui->visite->setPixmap(pixx);


QPixmap pix6("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/ident.png");
ui->label_idm->setPixmap(pix6);
QPixmap pix7("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/date.png");
ui->label_date->setPixmap(pix7);
QPixmap pix8("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/montant.png");
ui->label_montant->setPixmap(pix8);
QPixmap pix9("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/quant.png");
ui->label_quant->setPixmap(pix9);
QPixmap pix11("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/ident.png");
ui->label_id_med->setPixmap(pix11);
QPixmap pix12("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/nom.png");
ui->label_nom->setPixmap(pix12);
QPixmap pix13("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/nom.png");
ui->label_prenom->setPixmap(pix13);
QPixmap pix14("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/visite.png");
ui->label_visite->setPixmap(pix14);
ui->tabfinance_3->setModel(tmpvisite.afficher());
ui->tabfinance->setModel(tmpmedicament.afficher());
ui->tabfinance_r->setModel(tmpremise.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked() // gestion des finances
{
    int id = ui->lineEdit_id->text().toInt();
    int quan = ui->lineEdit_quant->text().toInt();
    int dat = ui->lineEdit_dat->text().toInt();
    int prix=ui->lineEdit_prix->text().toInt();
  medicament e(id,quan,dat,prix);
  bool test=e.ajouter();
  if(test)
{ui->tabfinance->setModel(tmpmedicament.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un medicament"),
                  QObject::tr("Medicament ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un medicament"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  QFile file ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/enregistrement_medicament.txt"); // enregistrement
  if (!file.open(QFile::WriteOnly |  QFile::Text)) {
  QMessageBox::warning(this,"title","file not open"); }
  QTextStream out(&file);
  QString id1=ui->lineEdit_id->text().toUpper();
  QString quan1=ui->lineEdit_quant->text().toUpper();
  QString dat1=ui->lineEdit_dat->text().toUpper();
  QString text="identifaint ="+id1+" quantité ="+quan1+" date="+dat1;
  out  << text;
  file.flush();
}


void MainWindow::on_pb_supprimer_clicked()       // des finances
{
int id = ui->recherche1->text().toInt();
bool test=tmpmedicament.supprimer(id);
if(test)
{ui->tabfinance->setModel(tmpmedicament.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un medicament"),
                QObject::tr("medicament supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un medicament"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_3_clicked() // gestion des visites
{
    int id = ui->lineEdit_id_v->text().toInt();
    QString nom = ui->lineEdit_nom_v->text();
    QString prenom = ui->lineEdit_prenom->text();
    int vis = ui->lineEdit_visi->text().toInt();
  visite e(id,vis,nom,prenom);
  bool test=e.ajouter();
  if(test)
{ui->tabfinance_3->setModel(tmpvisite.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("visite medicale"),
                  QObject::tr("visite ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("visite medicale"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  QFile file ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/enregistrement_visite.txt"); // enregistrement
  if (!file.open(QFile::WriteOnly |  QFile::Text)) {
  QMessageBox::warning(this,"title","file not open"); }
  QTextStream out(&file);
  QString id1=ui->lineEdit_id_v->text().toUpper();
  QString nom1=ui->lineEdit_nom_v->text();
  QString prenom1=ui->lineEdit_prenom->text();
  QString vis1=ui->lineEdit_visi->text().toUpper();
  QString text="identifiant ="+id1+" nom ="+nom1+" prenom ="+prenom1+"visite ="+vis1;
  out  << text;
  file.flush();
}

void MainWindow::on_pb_supprimer_3_clicked() // suppression d'un visite med
{
    int id = ui->recherche1_3->text().toInt();
    bool test=tmpvisite.supprimer(id);
    if(test)
    {ui->tabfinance_3->setModel(tmpvisite.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un visite"),
                    QObject::tr("visite supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un visite"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_9_clicked() // gestion de remise
{
    int id = ui->lineEdit_id_r->text().toInt();
    int dat = ui->lineEdit_dat_r->text().toInt();
    int prix = ui->lineEdit_prix_r->text().toInt();
    int nombre = ui->lineEdit_nombre_r->text().toInt();
  remise e(id,dat,prix,nombre);
  bool test=e.ajouter();
  if(test)
{ui->tabfinance_r->setModel(tmpremise.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter materiel"),
                  QObject::tr("materiel ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter materiel"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  QFile file ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/enregistrement_materiel.txt"); // enregistrement
  if (!file.open(QFile::WriteOnly |  QFile::Text)) {
  QMessageBox::warning(this,"title","file not open"); }
  QTextStream out(&file);
  QString id1=ui->lineEdit_id_r->text().toUpper();
  QString dat1=ui->lineEdit_dat_r->text().toUpper();
  QString prix1=ui->lineEdit_nombre_r->text().toUpper();
  QString nombre1=ui->lineEdit_nombre_r->text().toUpper();
  QString text="identifaint ="+id1+" date ="+dat1+" prix ="+prix1+"nombre ="+nombre1;
  out  << text;
  file.flush();
}

void MainWindow::on_pb_supprimer_9_clicked() // suppression remise
{
    int id = ui->recherche1_2->text().toInt();
    bool test=tmpremise.supprimer(id);
    if(test)
    {ui->tabfinance_r->setModel(tmpremise.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer materiel"),
                    QObject::tr("materiel supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer materiel"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pb_quitter_clicked()
{
    close();
}

void MainWindow::on_pb_quitter_2_clicked()
{
    close();
}

void MainWindow::on_pb_quitter_3_clicked()
{
    close();
}



void MainWindow::on_recherche1_textChanged(const QString &arg1)
{
   ui->tabfinance->setModel(tmpmedicament.recherche(arg1));
}




void MainWindow::on_recherche1_2_textChanged(const QString &arg1)
{
    ui->tabfinance_r->setModel(tmpremise.recherche(arg1));

}

void MainWindow::on_recherche1_3_textChanged(const QString &arg1)
{
    ui->tabfinance_3->setModel(tmpvisite.recherche(arg1));

}

void MainWindow::on_pushButton_2_clicked()
{
    bool  res ;
        Modifier m ;
        m.seta(1);
     QString q ;
     QModelIndex index ;
        QModelIndexList selection = ui->tabfinance->selectionModel()->selectedIndexes();
    for (int i =0;i<selection.count();i++){
           index  = selection.at(i);
           q = QVariant(ui->tabfinance->model()->index(index.row(),0).data()).toString();


            m.setc(index.column());
            m.setid(q);

         res = m.exec() ;
          if (res == QDialog::Accepted){

              ui->tabfinance->setModel(tmpmedicament.afficher());
}
}
}

void MainWindow::on_pushButton_4_clicked()
{
    hide();
    firstwindow *newmain= new firstwindow();
    newmain->show();
}

void MainWindow::on_pushButton_3_clicked() // modifier materiel
{
    bool  res ;
        Modifier m ;
        m.seta(1);
     QString q ;
     QModelIndex index ;
        QModelIndexList selection = ui->tabfinance_r->selectionModel()->selectedIndexes();
    for (int i =0;i<selection.count();i++){
           index  = selection.at(i);
           q = QVariant(ui->tabfinance_r->model()->index(index.row(),0).data()).toString();


            m.setc(index.column());
            m.setid(q);

         res = m.exec() ;
          if (res == QDialog::Accepted){

              ui->tabfinance_r->setModel(tmpremise.afficher());
}
}
}

void MainWindow::on_pushButton_5_clicked() // modifier visite
{
    bool  res ;
        Modifier m ;
        m.seta(1);
     QString q ;
     QModelIndex index ;
        QModelIndexList selection = ui->tabfinance_3->selectionModel()->selectedIndexes();
    for (int i =0;i<selection.count();i++){
           index  = selection.at(i);
           q = QVariant(ui->tabfinance_3->model()->index(index.row(),0).data()).toString();


            m.setc(index.column());
            m.setid(q);

         res = m.exec() ;
          if (res == QDialog::Accepted){

              ui->tabfinance_3->setModel(tmpvisite.afficher());
}
}
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if (index==0)
{ ui->tabfinance->setModel(tmpmedicament.afficher());
        ui->tabfinance->setModel(tmpmedicament.tri_pub_2(index));

    }
    else { if (index==1)
        { ui->tabfinance->setModel(tmpmedicament.afficher());

        ui->tabfinance->setModel(tmpmedicament.tri_pub_3(index));
    }  else
        { if (index==2)
            {ui->tabfinance->setModel(tmpmedicament.afficher());

        ui->tabfinance->setModel(tmpmedicament.tri_pub_4(index));
     }
        else

                    { ui->tabfinance->setModel(tmpmedicament.afficher());

                ui->tabfinance->setModel(tmpmedicament.tri_pub_5(index)); }
             }}

}

void MainWindow::on_comboBox_2_currentIndexChanged(int index) // trier materiel
{
    if (index==0)
{ ui->tabfinance_r->setModel(tmpremise.afficher());
        ui->tabfinance_r->setModel(tmpremise.tri_pub_2(index));

    }
    else { if (index==1)
        { ui->tabfinance_r->setModel(tmpremise.afficher());

        ui->tabfinance_r->setModel(tmpremise.tri_pub_3(index));
    }  else
            if (index==2)
        { ui->tabfinance_r->setModel(tmpremise.afficher());

        ui->tabfinance_r->setModel(tmpremise.tri_pub_4(index));
     }  else
                if (index==3)
            { ui->tabfinance_r->setModel(tmpremise.afficher());

            ui->tabfinance_r->setModel(tmpremise.tri_pub_5(index));
         }  }
}

void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    if (index==0)
{ ui->tabfinance_3->setModel(tmpvisite.afficher());
        ui->tabfinance_3->setModel(tmpvisite.tri_pub_2(index));

    }
      else
                if (index==1)
            { ui->tabfinance_3->setModel(tmpvisite.afficher());

            ui->tabfinance_3->setModel(tmpvisite.tri_pub_3(index));
         }
}
