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
    void appentData(QString name,int operater,double number,QString moreInformation);

public:
    Ui::WareForm *ui;
};

#endif // WAREFORM_H
