#include "profit.h"
#include "ui_profit.h"

Profit::Profit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profit)
{
    ui->setupUi(this);
    ui->profitTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //表格数据居中显示
}

Profit::~Profit()
{
    delete ui;
}
