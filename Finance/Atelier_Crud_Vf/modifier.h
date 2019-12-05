#ifndef MODIFIER_H
#define MODIFIER_H

#include <QDialog>
#include "medicament.h"
#include "visite_med.h"
#include "fact_materiel.h"
#include "fact_medicament.h"
#include "materiel.h"

namespace Ui {
class Modifier;
}

class Modifier : public QDialog
{
    Q_OBJECT

public:
    explicit Modifier(QWidget *parent = nullptr);
    ~Modifier();
    void setc(int x){
        c=x ;
    }
    void setid(QString x){
        id=x ;
    }
    void control(int c);
    void seta(int i){
        a=i;
    }
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


private:
    medicament mtmp;
    fact_med ftmp;
    materiel1 ttmp;
    remise rtmp;
    visite vtmp;



    QString id ;
    int c ;
    int a ;
    Ui::Modifier *ui;
};

#endif // MODIFIER_H
