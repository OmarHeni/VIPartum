#include "visite_med.h"

visite::visite()
{
id=0;
vis=0;
nom=" ";
prenom=" ";
}
visite::visite(int id,int vis,QString nom, QString prenom)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->vis=vis; }
int visite::get_id(){return  id;}
QString visite::get_nom(){return  nom;}
QString visite::get_prenom(){return prenom;}
int visite::get_vis(){return  vis;}


bool visite::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
QString res1= QString::number(vis);

query.prepare("INSERT INTO visite (ID, VIS, NOM,PRENOM) "
                    "VALUES (:id, :vis, :nom, :prenom)");
query.bindValue(":id", res);
query.bindValue(":vis", res1);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
return    query.exec();
}

QSqlQueryModel * visite::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from visite");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("VIS"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));

return model;
}

bool visite::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from visite where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}


QSqlQueryModel * visite::recherche(QString x)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from visite where ID LIKE '"+x+"%'");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("VIS"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));

    return model;
}

QString col_value4(int c){
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "vis";
    }else if (c==2){
     return "nom" ;
    }else if (c==3){
        return "prenom" ;
       }
    return "NULL";
}

bool visite :: modifier(QString id,QString nv,int c){
    QString col = col_value4(c);
     QString header ;
    QSqlQuery q;
       header = "UPDATE visite SET "+col+"=:nv WHERE (id= :id);";
        q.prepare(header);
        q.bindValue(":nv",nv);
        q.bindValue(":id",id);

    return q.exec();
}

QString test_tri2(int c)
{
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "vis";
    }else if (c==2){
     return "nom" ;
    }else if (c==3){
        return "prenom" ;
       }
    return "NULL";
}

QSqlQueryModel * visite::tri_pub_2(int i){
    QString col = test_tri2(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM visite order by id ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("VIS"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
        return model;
    }

QSqlQueryModel * visite::tri_pub_3(int i){
    QString col = test_tri2(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM visite order by vis ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("VIS"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
        return model;
    }
