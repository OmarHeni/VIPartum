#include "modifier.h"
#include "ui_modifier.h"
#include <QMessageBox>

Modifier::Modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifier)
{
    ui->setupUi(this);

}


Modifier::~Modifier()
{
    delete ui;
}

void Modifier::on_pushButton_clicked()
{
    reject();
}





void Modifier::on_pushButton_2_clicked(){

    mtmp.modifier(id,ui->lnm->text(),c);
    ftmp.modifier(id,ui->lnm->text(),c);
    ttmp.modifier(id,ui->lnm->text(),c);
    rtmp.modifier(id,ui->lnm->text(),c);
    vtmp.modifier(id,ui->lnm->text(),c);

        accept();
}





