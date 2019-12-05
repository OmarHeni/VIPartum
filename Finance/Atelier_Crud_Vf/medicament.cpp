#include "medicament.h"
medicament::medicament()
{
id=0;
quan=0;
dat=0;
prix=0;
}
medicament::medicament(int id,int quan,int dat,int prix)
{
  this->id=id;
  this->quan=quan;
    this->dat=dat;
    this->prix=prix;
}
int medicament::get_quan(){return  quan;}
int medicament::get_dat(){return  dat;}
int medicament::get_id(){return  id;}
int medicament::get_prix(){return prix;}

bool medicament::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
QString res1= QString::number(quan);
QString res2= QString::number(dat);
QString res3= QString::number(prix);

query.prepare("INSERT INTO medicament (ID, quan, dat,prix) "
                    "VALUES (:id, :quan, :dat, :prix)");
query.bindValue(":id", res);
query.bindValue(":quan", res1);
query.bindValue(":dat", res2);
query.bindValue(":prix", res3);

return    query.exec();
}

QSqlQueryModel * medicament::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from medicament");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

    return model;
}

bool medicament::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from medicament where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}


QSqlQueryModel * medicament::recherche(QString x)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from medicament where ID LIKE '"+x+"%'");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

    return model;
}

QString col_value3(int c){
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "quan";
    }else if (c==2){
     return "dat" ;
    }else if (c==3){
        return "prix" ;
       }
    return "NULL";
}

bool medicament :: modifier(QString id,QString nv,int c){
    QString col = col_value3(c);
     QString header ;
    QSqlQuery q;
       header = "UPDATE medicament SET "+col+"=:nv WHERE (id= :id);";
        q.prepare(header);
        q.bindValue(":nv",nv);
        q.bindValue(":id",id);

    return q.exec();
}

QString test_tri1(int c)
{
    if (c==0){
        return "id" ;
    }else if (c==1){
        return "quan";
    }else if (c==2){
     return "dat" ;
    }else if (c==3){
        return "prix" ;
       }
    return "NULL";
}

QSqlQueryModel * medicament::tri_pub_2(int i){
    QString col = test_tri1(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM medicament order by id ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

        return model;
    }

QSqlQueryModel * medicament::tri_pub_3(int i){
    QString col = test_tri1(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM medicament order by quan ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

        return model;
    }
QSqlQueryModel * medicament::tri_pub_4(int i){
    QString col = test_tri1(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM medicament order by dat ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

        return model;
    }
QSqlQueryModel * medicament::tri_pub_5(int i){
    QString col = test_tri1(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM medicament order by dat ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));

        return model;
    }
