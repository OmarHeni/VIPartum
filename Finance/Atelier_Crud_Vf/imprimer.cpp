#include "imprimer.h"
#include "ui_imprimer.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include "firstwindow.h"


imprimer::imprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imprimer)
{
    ui->setupUi(this);
}

imprimer::~imprimer()
{
    delete ui;
}

void imprimer::on_importer_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open File"),"D:\\QT\\ATELIER CRUD\\Atelier_Crud_Vf"
                                                      ,"Text File (*.txt)");
        QFile file(filename);
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(nullptr,"info",file.errorString());
        QTextStream in(&file);
        ui->pour_imprimer->setText(in.readAll());
    }


void imprimer::on_imprim_clicked()
{
    QPrinter printer;
       printer.setPrinterName("desierd printer name");
       QPrintDialog dialog(&printer,this);
       if(dialog.exec()== QDialog::Rejected) return;
       ui->pour_imprimer->print(&printer);
}

void imprimer::on_pushButton_clicked()
{
    hide();
    firstwindow *newmain= new firstwindow();
    newmain->show();
}
