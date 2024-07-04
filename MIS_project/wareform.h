#ifndef WAREFORM_H
#define WAREFORM_H

#include <QDialog>

namespace Ui {
class WareForm;
}

class WareForm : public QDialog
{
    Q_OBJECT

public:
    explicit WareForm(QWidget *parent = nullptr);
    ~WareForm();


private slots:
    void on_wareHouse_clicked();

    void on_profit_clicked();

    void on_suggestion_clicked();

public:
    Ui::WareForm *ui;
};

#endif // WAREFORM_H
