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

private:
    Ui::Profit *ui;
};

#endif // PROFIT_H
