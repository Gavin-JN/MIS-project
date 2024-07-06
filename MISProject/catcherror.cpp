#include "catcherror.h"
#include "ui_catcherror.h"

CatchError::CatchError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CatchError)
{
    ui->setupUi(this);
}

CatchError::~CatchError()
{
    delete ui;
}

void CatchError::setErrorReason(QString reason)
{
    this->ui->errorReaeon->setText(reason);
}

void CatchError::on_know_clicked()
{
    close();
}

