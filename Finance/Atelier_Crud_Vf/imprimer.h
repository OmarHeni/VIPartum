#ifndef IMPRIMER_H
#define IMPRIMER_H

#include <QDialog>

namespace Ui {
class imprimer;
}

class imprimer : public QDialog
{
    Q_OBJECT

public:
    explicit imprimer(QWidget *parent = nullptr);
    ~imprimer();

private slots:
    void on_importer_clicked();

    void on_imprim_clicked();

    void on_pushButton_clicked();

private:
    Ui::imprimer *ui;
};

#endif // IMPRIMER_H
