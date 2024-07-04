#include "finderror.h"
#include "ui_finderror.h"

findError::findError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::findError)
{
    ui->setupUi(this);
}

findError::~findError()
{
    delete ui;
}

void findError::on_pushButton_clicked()
{
    this->close();
}
