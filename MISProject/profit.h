#ifndef PROFIT_H
#define PROFIT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class Profit;
}

class Profit : public QDialog
{
    Q_OBJECT

public:
    explicit Profit(QWidget *parent = nullptr);
    ~Profit();
    void setModelStr(const QString &query);

private:
    QSqlDatabase dbProfit;
    Ui::Profit *ui;
    QSqlQueryModel *modelProfit;
    QSqlDatabase profitdb;

};

#endif // PROFIT_H
