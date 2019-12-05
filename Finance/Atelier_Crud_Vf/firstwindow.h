#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class firstwindow;
}

class firstwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit firstwindow(QWidget *parent = nullptr);
    ~firstwindow();

private slots:
    void on_pushButton_4_clicked();



    void on_g_vente_clicked();


    void on_imprim_clicked();


    void on_static_2_clicked();

private:
    Ui::firstwindow *ui;
};

#endif // FIRSTWINDOW_H
