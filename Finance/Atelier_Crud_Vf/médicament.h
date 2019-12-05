#ifndef médicament_H
#define FINANCE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Finance
{public:
    Finance();
    Finance(int,int,int);

    int get_id(); //identifiant
    int get_del(); //stock
    int get_pat(); // patient
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    int del;
    int id;
    int pat;
};

#endif // FINANCE_H
