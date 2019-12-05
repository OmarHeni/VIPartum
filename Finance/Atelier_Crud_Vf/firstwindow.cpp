#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "mainwindow.h"
#include "facture.h"
#include "imprimer.h"
#include "donutbreakdownchart.h"
#include "mainslice.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtCharts/QChartView>
#include "connexion.h"


firstwindow::firstwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::firstwindow)
{
    ui->setupUi(this);
    QPixmap pix ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/finan.png");
    ui->label_back->setPixmap(pix);
    QPixmap pixt ("D:/QT/ATELIER CRUD/Atelier_Crud_Vf/titre.png");
    ui->titre->setPixmap(pixt);
}

firstwindow::~firstwindow()
{
    delete ui;
}

void firstwindow::on_pushButton_4_clicked()
{
    close();
}



void firstwindow::on_g_vente_clicked()
{
    hide();
    MainWindow *newmain= new MainWindow();
    newmain->show();
}


void firstwindow::on_imprim_clicked()
{
    hide();
    imprimer f;
    f.exec();
}



void firstwindow::on_static_2_clicked()
{
    Connexion c;
    firstwindow w;

    bool test=c.ouvrirConnexion();
    if(test)
    {w.show();

    QPieSeries *series1 = new QPieSeries();
    series1->setName("Medicament");
    series1->append("Quantite", 5);
    series1->append("prix", 10);


    QPieSeries *series2 = new QPieSeries();
    series2->setName("materiel");
    series2->append("quantite", 4);
    series2->append("prix", 4);




    //![2]
    DonutBreakdownChart *donutBreakdown = new DonutBreakdownChart();
    donutBreakdown->setAnimationOptions(QChart::AllAnimations);
    donutBreakdown->setTitle("Statistique total du medicament/materiel");
    donutBreakdown->legend()->setAlignment(Qt::AlignRight);
    donutBreakdown->addBreakdownSeries(series1, Qt::red);
    donutBreakdown->addBreakdownSeries(series2, Qt::darkGreen);
    //![2]

    //![3]
    QMainWindow window;
    QChartView *chartView = new QChartView(donutBreakdown);
    chartView->setRenderHint(QPainter::Antialiasing);
    window.setCentralWidget(chartView);
    window.resize(800, 500);

    window.show();
    //![3]

    }
}
