#ifndef PROFIT_H
#define PROFIT_H

#include <QDialog>

namespace Ui {
class Profit;
}

class Profit : public QDialog
{
    Q_OBJECT

public:
    explicit Profit(QWidget *parent = nullptr);
    ~Profit();



private slots:
    void on_wareHouse_clicked();

    void on_wareForm_clicked();

    void on_suggestion_clicked();

public:
    Ui::Profit *ui;
};

#endif // PROFIT_H
