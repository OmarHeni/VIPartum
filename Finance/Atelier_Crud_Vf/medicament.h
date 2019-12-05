#ifndef MEDICAMENT_H
#define MEDICAMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class medicament
{public:
    medicament();
    medicament(int,int,int,int);
    int get_quan();
    int get_dat();
    int get_id();
    int get_prix();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString);
       bool  modifier(QString id,QString nv,int c);
 QSqlQueryModel * tri_pub_2(int );
 QSqlQueryModel * tri_pub_3(int );
 QSqlQueryModel * tri_pub_4(int );
 QSqlQueryModel * tri_pub_5(int );


    bool supprimer(int);

private:
    int id;
    int dat;
    int quan;
    int prix;
};
#endif // MEDICAMENT_H
