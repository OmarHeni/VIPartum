#include "médicament.h"
#include <QDebug>
Finance::Finance()
{
id=0;
del=0;
pat=0;
}
Finance::Finance(int id,int del,int pat)
{
  this->id=id;
  this->pat=pat;
  this->del=del;
}
int Finance::get_del(){return del;}
int Finance::get_pat(){return pat;}
int Finance::get_id(){return  id;}

bool Finance::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
QString res1= QString::number(del);
QString res2= QString::number(pat);
query.prepare("INSERT INTO finance (ID, del, pat) "
                    "VALUES (:id, :del, :pat)");
query.bindValue(":id", res);
query.bindValue(":del", res1);
query.bindValue(":pat", res2);

return    query.exec();
}

QSqlQueryModel * Finance::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from Finance");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("del "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("pat"));
    return model;
}

bool Finance::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from finance where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

