#ifndef WAREFORM_H
#define WAREFORM_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlDatabase>

namespace Ui {
class WareForm;
}

class WareForm : public QDialog
{
    Q_OBJECT

public:
    explicit WareForm(QWidget *parent = nullptr);
    ~WareForm();
    void appentData(QString name,int operater,double number,QString moreInformation);

private:
    Ui::WareForm *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
    void setModelStr(const QString &query);
};

#endif // WAREFORM_H
