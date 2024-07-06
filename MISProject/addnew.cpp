#include "addnew.h"
#include "ui_addnew.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "catcherror.h"
#include "ui_catcherror.h"
#include "wareform.h"
#include "ui_wareform.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
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

void AddNew::appendItem(QString name, double number, double costPrice, double salePrice, QString more)
{
    int count=WINDOW->ui->tableWidget->rowCount()-1;

    QTableWidgetItem *nameItem=new QTableWidgetItem(name);   //类型转换
    QTableWidgetItem *numItem=new QTableWidgetItem(QString::number(number));
    QTableWidgetItem *costItem=new QTableWidgetItem(QString::number(costPrice));
    QTableWidgetItem *saleItem=new QTableWidgetItem(QString::number(salePrice));
    QTableWidgetItem *moreItem=new QTableWidgetItem(more);

    nameItem->setTextAlignment(Qt::AlignCenter);   // 将表格信息进行居中操作
    numItem->setTextAlignment(Qt::AlignCenter);
    costItem->setTextAlignment(Qt::AlignCenter);
    saleItem->setTextAlignment(Qt::AlignCenter);
    moreItem->setTextAlignment(Qt::AlignCenter);

    WINDOW->ui->tableWidget->setItem(count,0,nameItem);   //向表格中填入信息
    WINDOW->ui->tableWidget->setItem(count,1,numItem);
    WINDOW->ui->tableWidget->setItem(count,2,costItem);
    WINDOW->ui->tableWidget->setItem(count,3,saleItem);
    WINDOW->ui->tableWidget->setItem(count,4,moreItem);

}
 int AddNew::ifExitIn(QString str)   //该函数用以检测入库的商品信息是否在仓库中已经存在
 {
     int count=WINDOW->ui->tableWidget->rowCount();
     for(int i=0;i<count;i++)
     {
         QTableWidgetItem *item=WINDOW->ui->tableWidget->item(i,0);
         if(item)
         {
             QString nameIn=item->text().trimmed();
          if(QString::compare(nameIn,str,Qt::CaseSensitive)==0)
          {
              return i;
          }
         }
     }
     return -1;
 }


void AddNew::on_cencleIn_clicked()
{
    this->close();
}

//入库商品信息
QString nameIn;
double numIn;
double costIn;
double saleIn;
QString more;

void AddNew::on_addIn_clicked()  //入库操作
{
    nameIn=ui->namePutIn->text();      //商品的名称
    numIn=ui->numberPutIn->text().toDouble();    //入库商品的数量
    costIn=ui->costPrice->text().toDouble();    //入库商品的进价
    saleIn=ui->salePrice->text().toDouble();    //入库商品的售价
    more=ui->more->text();  //仓库已有的商品的入库的备注将会被放置在仓库报表中
    if(nameIn!=nullptr)
    {
        if(AddNew::ifExitIn(nameIn)==-1)    //当入库商品在仓库中不存在时，表格添加一行，存储新商品
        {
         int currentRow=WINDOW->ui->tableWidget->rowCount();
         WINDOW->ui->tableWidget->insertRow(currentRow);
         appendItem(nameIn,numIn,costIn,saleIn,more);
        }
        else     //当要入库的商品在仓库中已经存在时，直接将该商品的数量进行增加
        {
            int rowPosition=AddNew::ifExitIn(nameIn);
            int number=WINDOW->ui->tableWidget->item(rowPosition,1)->text().toInt();
            int currentNum2=number+numIn;
            WINDOW->ui->tableWidget->item(rowPosition,1)->setText(QString::number(currentNum2));
            WINDOW->ui->tableWidget->item(rowPosition,1)->setTextAlignment(Qt::AlignCenter);
        }
    }
    else   //当输入商品的名称为空时，认为是用户的错误输入，反馈给用户报错界面
    {
        CatchError *catchError=new CatchError;
        catchError->setErrorReason("原因：名称为空");
        catchError->show();
    }


    //将入库记录传给wareTable进行记录

    this->close();
}
