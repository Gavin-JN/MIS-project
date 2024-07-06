#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class AddNew;
}

class AddNew : public QDialog
{
    Q_OBJECT

public:
    explicit AddNew(QWidget *parent = nullptr);
    ~AddNew();
    void appendItem(QString name ,double number,double costPrice,double salePrice,QString more);
    int ifExitIn(QString str);

private slots:
    void on_cencleIn_clicked();

    void on_addIn_clicked();

private:
    Ui::AddNew *ui;
};

#endif // ADDNEW_H
