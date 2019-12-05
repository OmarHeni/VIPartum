#ifndef RECU_H
#define RECU_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Recu
{
public:
    Recu();
    Recu(int,QString,QString,int);

    int get_id(); //identifiant
    QString get_nom(); //nom patient
    QString get_prenom(); //prenom patient
    int get_visite(); //num visite

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString);

    bool supprimer(int);
private:
    int id;
    QString nom,prenom;
    int visite;
};

#endif // RECU_H
