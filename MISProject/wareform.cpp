#include "wareform.h"
#include "ui_wareform.h"
WareForm::WareForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WareForm)
{
    ui->setupUi(this);
    ui->wareTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void WareForm::appentData(QString name, int operater, double number, QString moreInformation)  //向报表的表格中添加信息
{
    int count=this->ui->wareTable->rowCount();

    QTableWidgetItem *nameItem=new QTableWidgetItem(name);   //类型转换
    QTableWidgetItem *numItem=new QTableWidgetItem(QString::number(number));
    QTableWidgetItem *moreItem=new QTableWidgetItem(moreInformation);

    nameItem->setTextAlignment(Qt::AlignCenter);   // 将表格信息进行居中操作
    numItem->setTextAlignment(Qt::AlignCenter);
    moreItem->setTextAlignment(Qt::AlignCenter);

    this->ui->wareTable->setItem(count,0,nameItem);   //向表格中填入信息
    this->ui->wareTable->setItem(count,1,numItem);
    this->ui->wareTable->setItem(count,3,moreItem);

    if(operater==1)
    {
        QTableWidgetItem *operItem=new QTableWidgetItem("入库");
        this->ui->wareTable->setItem(count,2,operItem);
        operItem->setTextAlignment(Qt::AlignCenter);
    }
    else
    {
        QTableWidgetItem *operItem=new QTableWidgetItem("出库");
        this->ui->wareTable->setItem(count,2,operItem);
        operItem->setTextAlignment(Qt::AlignCenter);
    }
}
WareForm::~WareForm()
{
    delete ui;
}
