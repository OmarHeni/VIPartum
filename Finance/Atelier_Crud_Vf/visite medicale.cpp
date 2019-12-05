#include "visite medicale.h"
#include <QDebug>
Recu::Recu()
{
id=0;
dat=0;
recu=0;
}
Recu::Recu(int id,int dat,int recu)
{
  this->id=id;
  this->dat=dat;
  this->recu=recu;
}
int Recu::get_dat(){return dat;}
int Recu::get_recu(){return recu;}
int Recu::get_id(){return  id;}

bool Recu::ajouter()
{
QSqlQuery query;
QString idd0= QString::number(id);
QString idd1= QString::number(dat);
QString idd2= QString::number(recu);
query.prepare("INSERT INTO Recu (ID, dat, recu) "
                    "VALUES (:id, :dat, :recu)");
query.bindValue(":id", idd0);
query.bindValue(":dat", idd1);
query.bindValue(":recu", idd2);

return    query.exec();
}

QSqlQueryModel * Recu::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from Recu");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("recu"));
    return model;
}

bool Recu::supprimer(int idd)
{
QSqlQuery query;
QString idd0= QString::number(idd);
query.prepare("Delete from recu where ID = :id ");
query.bindValue(":id", idd0);
return    query.exec();
}

QSqlQueryModel * Recu::recherche(QString x)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from recu where ID LIKE '"+x+"%'");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
    return model;
}
