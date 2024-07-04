#include "wareform.h"
#include "ui_wareform.h"
#include "mainwindow.h"
#include "profit.h"
#include "suggestion.h"

extern MainWindow *WINDOW;
extern Profit *PROFIT;
extern Suggestion *SUGGESTION;

WareForm *WAREFORM;
WareForm::WareForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WareForm)
{
    ui->setupUi(this);
    WAREFORM=this;
}

WareForm::~WareForm()
{
    delete ui;
}



void WareForm::on_wareHouse_clicked()  //��ת���ֿ����
{
    this->close();
    WINDOW->show();
}

void WareForm::on_profit_clicked()   //��ת���������
{
    this->close();
    Profit *pro=new Profit;
    pro->show();
}

void WareForm::on_suggestion_clicked()   //��ת���������
{
    this->close();
    Suggestion *sug=new Suggestion;
    sug->show();
}
