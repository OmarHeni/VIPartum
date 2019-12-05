#include "materiel.h"
#include <QDebug>

remise::remise()
{
    id=0;
    dat=0;
    prix=0;
    nombre=0;
}


remise::remise(int id,int dat,int prix, int nombre)
{
  this->id=id;
  this->dat=dat;
  this->prix=prix;
  this->nombre=nombre;
}
int remise::get_dat(){return dat;}
int remise::get_prix(){return prix;}
int remise::get_id(){return  id;}
int remise::get_nombre(){return  nombre;}

bool remise::ajouter()
{
QSqlQuery query;
QString idd0= QString::number(id);
QString idd1= QString::number(dat);
QString idd2= QString::number(prix);
QString idd3= QString::number(nombre);

query.prepare("INSERT INTO remise (ID, dat, prix,nombre) "
                    "VALUES (:id, :dat, :prix, :nombre)");
query.bindValue(":id", idd0);
query.bindValue(":dat", idd1);
query.bindValue(":prix", idd2);
query.bindValue(":nombre", idd3);


return    query.exec();
}

QSqlQueryModel * remise::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from remise");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
    return model;
}

bool remise::supprimer(int idd)
{
QSqlQuery query;
QString idd0= QString::number(idd);
query.prepare("Delete from remise where ID = :id ");
query.bindValue(":id", idd0);
return    query.exec();
}

QSqlQueryModel * remise::recherche(QString x)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from remise where ID LIKE '"+x+"%'");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));

    return model;
}
QString col_value1(int c){
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "dat";
    }else if (c==2){
     return "prix" ;
    }else if (c==3){
        return "nombre" ;
    }return "NULL";
}

bool remise :: modifier(QString id,QString nv,int c)
{
    QString col = col_value1(c);
     QString header ;
    QSqlQuery q;
       header = "UPDATE remise SET "+col+"=:nv WHERE (id= :id);";
        q.prepare(header);
        q.bindValue(":nv",nv);
        q.bindValue(":id",id);

    return q.exec();
}
QString test_tri(int c)
{
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "dat";
    }else if (c==2){
     return "prix" ;
    }else if (c==3){
        return "nombre" ;
    }return "NULL";
}

QSqlQueryModel * remise::tri_pub_2(int i){
    QString col = test_tri(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM remise order by id ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
        return model;
    }

QSqlQueryModel * remise::tri_pub_3(int i){
    QString col = test_tri(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM remise order by dat ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
        return model;
    }
QSqlQueryModel * remise::tri_pub_4(int i){
    QString col = test_tri(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM remise order by prix ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
        return model;
    }
QSqlQueryModel * remise::tri_pub_5(int i){
    QString col = test_tri(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM remise order by nombre ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dat"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre"));
        return model;
    }
