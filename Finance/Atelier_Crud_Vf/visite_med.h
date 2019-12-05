#ifndef VISITE_MED_H
#define VISITE_MED_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class visite
{public:
    visite();
    visite(int,int,QString,QString);
    int get_id();
    QString get_nom();
    QString get_prenom();
    int get_vis();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString);
    bool  modifier(QString id,QString nv,int c);
    QSqlQueryModel * tri_pub_2(int );
    QSqlQueryModel * tri_pub_3(int );


    bool supprimer(int);

private:
    int id;
     QString nom,prenom;
     int vis;
};

#endif // VISITE_MED_H
