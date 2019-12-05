#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QtDebug>
#include "firstwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    firstwindow w;
    Connexion c;
    bool test=c.ouvrirConnexion();
    if(test)
    {w.show();
        QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("WELCOME to our medical centre system!"), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
