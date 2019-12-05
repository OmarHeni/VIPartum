#ifndef REMISE_H
#define REMISE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class remise
{
public:
    remise();
    remise(int,int,int,int);

    int get_id(); //identifiant
    int get_dat(); //date
    int get_prix(); // prix
    int get_nombre(); //nombre d'elem
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
    int prix;
    int nombre;
};

#endif // REMISE_H
