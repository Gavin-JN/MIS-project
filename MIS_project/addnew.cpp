#include "addnew.h"
#include "ui_addnew.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "QLineEdit"


extern MainWindow *WINDOW;
AddNew::AddNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNew)
{
    ui->setupUi(this);
}

AddNew::~AddNew()
{
    delete ui;
}

//向表格中添加信息（入库）
void AddNew::appendItem(QString name ,int num,int costPrice,int salePrice,QString more)
{
    int count=WINDOW->ui->tableWidget->rowCount()-1;  //获得供填入信息行数
    //转换成可以写入表格的类型
    QTableWidgetItem *nameItem=new QTableWidgetItem(name);
    QTableWidgetItem *numItem=new QTableWidgetItem(QString::number(num));
    QTableWidgetItem *costItem=new QTableWidgetItem(QString::number(costPrice));
    QTableWidgetItem *saleItem=new QTableWidgetItem(QString::number(salePrice));
    QTableWidgetItem *moreItem=new QTableWidgetItem(more);
    //居中显示
    nameItem->setTextAlignment(Qt::AlignCenter);
    numItem->setTextAlignment(Qt::AlignCenter);
    costItem->setTextAlignment(Qt::AlignCenter);
    saleItem->setTextAlignment(Qt::AlignCenter);
    moreItem->setTextAlignment(Qt::AlignCenter);
    //填入表格
    WINDOW->ui->tableWidget->setItem(count,0,nameItem);
    WINDOW->ui->tableWidget->setItem(count,1,numItem);
    WINDOW->ui->tableWidget->setItem(count,2,costItem);
    WINDOW->ui->tableWidget->setItem(count,3,saleItem);
    WINDOW->ui->tableWidget->setItem(count,4,moreItem);

}



void AddNew::on_add_clicked()    //点击添加按钮触发事件
{
    //从LineEdit 中获得信息
    QString name=ui->name->text();
    int num=ui->number->text().toInt();
    int cost=ui->costPrice->text().toInt();
    int sale=ui->salePrice->text().toInt();
    QString more=ui->more->text();
    if(name!=nullptr)          //当没有名字是判断为误触，不进行商品的录入
    {
     int currentRow=WINDOW->ui->tableWidget->rowCount();
     WINDOW->ui->tableWidget->insertRow(currentRow);
     appendItem(name,num,cost,sale,more);
    }
    this->close();
}



void AddNew::on_cencle_clicked()
{
    this->close();
}
