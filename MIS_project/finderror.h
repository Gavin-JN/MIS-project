#ifndef FINDERROR_H
#define FINDERROR_H

#include <QDialog>

namespace Ui {
class findError;
}

class findError : public QDialog
{
    Q_OBJECT

public:
    explicit findError(QWidget *parent = nullptr);
    ~findError();

public:
    Ui::findError *ui;
private slots:
    void on_pushButton_clicked();
};

#endif // FINDERROR_H
