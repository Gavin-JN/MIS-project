#include "suggestion.h"
#include "ui_suggestion.h"
#include "mainwindow.h"
#include "profit.h"
#include "wareform.h"

extern MainWindow *WINDOW;
extern Profit *PROFIT;
extern WareForm *WAREFORM;

Suggestion *SUGGESTION;
Suggestion::Suggestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Suggestion)
{
    ui->setupUi(this);
    SUGGESTION=this;
}

Suggestion::~Suggestion()
{
    delete ui;
}

void Suggestion::on_wareHouse_clicked()  //跳转至仓库界面
{
    this->close();
    WINDOW->show();
}

void Suggestion::on_profit_clicked()   //跳转至建议界面
{
    this->close();
   Profit *pro=new Profit;
   pro->show();
}

void Suggestion::on_wareForm_clicked()   //跳转至报表界面
{
    this->close();
    WareForm *ware=new WareForm;
    ware->show();
}
