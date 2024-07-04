#include "profit.h"
#include "ui_profit.h"
#include "mainwindow.h"
#include "wareform.h"
#include "suggestion.h"

extern MainWindow *WINDOW;
extern Suggestion *SUGGESTION;
extern WareForm *WAREFORM;

Profit *PROFIT;
Profit::Profit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profit)
{
    ui->setupUi(this);
    PROFIT=this;
}

Profit::~Profit()
{
    delete ui;
}


void Profit::on_wareHouse_clicked()   //跳转至仓库界面
{
    this->close();
    WINDOW->show();
}

void Profit::on_wareForm_clicked()  //跳转至报表界面
{
    this->close();
    WareForm *Ware=new WareForm;
    Ware->show();
}

void Profit::on_suggestion_clicked()  //跳转至建议界面
{
    this->close();
    Suggestion *sug=new Suggestion;
    sug->show();
}
