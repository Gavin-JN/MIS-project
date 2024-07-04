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
    void appendItem(QString name ,int num,int costPrice,int salePrice,QString more);


private slots:
    void on_add_clicked();

    void on_cencle_clicked();

private:
    Ui::AddNew *ui;
};

#endif // ADDNEW_H
