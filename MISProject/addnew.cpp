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
#include <QDateTime>
#include <QSqlTableModel>
#include <QSqlRecord>
#include "global.h"
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


 void AddNew::initializeDatabase3()    //数据库： accessRecord
 {
     QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("accessRecord.db");

     if(!db.open())
     {
         qDebug()<<"ERROR: Could not connect to database";
         return;
     }
     else
     {
         qDebug()<<"success connect";
     }

     QSqlQuery query(db);
     query.exec("CREATE TABLE IF NOT EXISTS accessRecord (userID TEXT, namePutIn TEXT,typePutIn TEXT, numberPutIn TEXT, more TEXT, timePutIn TEXT)");
     db.close();
 }


 void AddNew::initializeDatabase4()    //数据库： profitDatabase
 {
     QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("profitDatabase.db");

     if(!db.open())
     {
         qDebug()<<"ERROR: Could not connect to database";
         return;
     }
     else
     {
         qDebug()<<"success connect";
     }

     QSqlQuery query(db);
     query.exec("CREATE TABLE IF NOT EXISTS profitDatabase (userID TEXT,goodsName TEXT, costPrice TEXT, salePrice TEXT, saleNumber TEXT,buyNumber TEXT,profit TEXT, PRIMARY KEY (goodsName),CONSTRAINT unique_user_product UNIQUE (userID, goodsName))");
     db.close();
 }


void AddNew::on_cencleIn_clicked()
{
    this->close();
}

//入库商品信息
QString namePutIn;
double numberPutIn;
double costIn;
double saleIn;
QString more;

void AddNew::on_addIn_clicked()  //入库操作
{
    namePutIn=ui->namePutIn->text();      //商品的名称
    numberPutIn=ui->numberPutIn->text().toDouble();    //入库商品的数量
    costIn=ui->costPrice->text().toDouble();    //入库商品的进价
    saleIn=ui->salePrice->text().toDouble();    //入库商品的售价
    more=ui->more->text();  //仓库已有的商品的入库的备注将会被放置在仓库报表中
    if(namePutIn!=nullptr)
    {
        if(AddNew::ifExitIn(namePutIn)==-1)    //当入库商品在仓库中不存在时，表格添加一行，存储新商品
        {
         int currentRow=WINDOW->ui->tableWidget->rowCount();
         WINDOW->ui->tableWidget->insertRow(currentRow);
         appendItem(namePutIn,numberPutIn,costIn,saleIn,more);
        }
        else     //当要入库的商品在仓库中已经存在时，直接将该商品的数量进行增加
        {
            int rowPosition=AddNew::ifExitIn(namePutIn);
            int number=WINDOW->ui->tableWidget->item(rowPosition,1)->text().toInt();
            int currentNum2=number+numberPutIn;
            WINDOW->ui->tableWidget->item(rowPosition,1)->setText(QString::number(currentNum2));
            WINDOW->ui->tableWidget->item(rowPosition,1)->setTextAlignment(Qt::AlignCenter);
        }



        //将入库记录传给wareTable进行记录   报表模块
        QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("accessRecord.db");

        if(!db.open())
        {
            qDebug()<<"ERROR: Could not connect to database";
                      return;
        }
        QSqlQuery query2(db);

        if(!query2.exec("CREATE TABLE IF NOT EXISTS accessRecord (userID TEXT , namePutIn TEXT,typePutIn TEXT, numberPutIn  TEXT, more TEXT, timePutIn TEXT)"))
       {
            qDebug()<<"Error:Could not creat table???"<<query2.lastError().text();
            db.close();
            return ;
        }

        //插入数据
       query2.prepare("INSERT INTO accessRecord (userID, namePutIn,typePutIn, numberPutIn, more,timePutIn) VALUES (:userID, :namePutIn, :typePutIn, :numberPutIn, :more, :timePutIn)");

       QDateTime currentTime=QDateTime::currentDateTime();
       QString  formatTime=currentTime.toString("yyyy-MM-dd hh:mm:ss");

        qDebug()<<"Time:"<<formatTime;

        query2.bindValue(":userID", g_userName);
        query2.bindValue(":namePutIn", namePutIn);
        query2.bindValue(":typePutIn","入库");
        query2.bindValue(":numberPutIn", numberPutIn);
        query2.bindValue(":more", more);
        query2.bindValue(":timePutIn", formatTime);

        if (!query2.exec())
        {
               qDebug() << "Error: Could not insert data." << query2.lastError().text();
        }
        else
        {
               qDebug() << "Data inserted successfully.";
        }

        db.close();

        //计算收益模块

        QSqlDatabase dbProfit=QSqlDatabase::addDatabase("QSQLITE");
        dbProfit.setDatabaseName("profitDatabase.db");

        if(!dbProfit.open())
        {
            qDebug()<<"ERROR: Could not connect to database";
                      return;
        }
        QSqlQuery query3(dbProfit);
        //创建表格
        if(!query3.exec("CREATE TABLE IF NOT EXISTS profitDatabase (userID TEXT,goodsName TEXT , costPrice TEXT, salePrice TEXT, saleNumber TEXT,buyNumber TEXT,profit TEXT,PRIMARY KEY (goodsName),CONSTRAINT unique_user_product UNIQUE (userID, goodsName))"))
       {
            qDebug()<<"Error:Could not creat Profittable"<<query3.lastError().text();
            dbProfit.close();
            return ;
        }

        query3.prepare("SELECT profit , buyNumber FROM profitDatabase WHERE userID = :userID AND goodsName = :goodsName");
        query3.bindValue(":userID", g_userName);
        query3.bindValue(":goodsName", namePutIn);

        //数据填入
        if (query3.exec() && query3.next())
        {
            // 当数据库内已经有该用户的该商品的信息的时候
            double usedProfitDouble = query3.value("profit").toDouble(); //获得该商品的原有的收益信息
            double usedBuyNumber = query3.value("buyNumber").toDouble();

            qDebug()<<"in_usedProfit"<<usedProfitDouble;
            qDebug()<<"usedNu"<<usedBuyNumber;

            double currentBuyNumberDouble=usedBuyNumber+numberPutIn;
            double profitValueDouble = usedProfitDouble - (costIn * numberPutIn);


            QString currentBuyNumber=QString::number(currentBuyNumberDouble);
            QString profitValue=QString::number(profitValueDouble);
            //得到新的收益信息并更新数据库的信息
            QSqlQuery query4(dbProfit);
            query4.prepare("UPDATE profitDatabase SET profit = :profit, costPrice = :costPrice, salePrice = :salePrice, buyNumber = :buyNumber WHERE userID = :userID AND goodsName = :goodsName");
            query4.bindValue(":profit", profitValue);
            query4.bindValue(":costPrice", costIn);
            query4.bindValue(":salePrice", saleIn);
            query4.bindValue(":buyNumber", currentBuyNumber);
            query4.bindValue(":userID", g_userName);
            query4.bindValue(":goodsName", namePutIn);

            if (!query4.exec())
            {
                qDebug() << "Error: update wrong" << query4.lastError().text();
            }
            else
            {
                qDebug() << "updated success.";
            }

       }
       else
       {
            // 当入库的商品为新商品时
            double profitValueDouble = 0 - (costIn * numberPutIn);   //收益
            QString profitValue = QString::number(profitValueDouble);
            QSqlQuery query5(dbProfit);
             query5.prepare("INSERT INTO profitDatabase (userID, goodsName, costPrice, salePrice, saleNumber, buyNumber, profit) VALUES (:userID, :goodsName, :costPrice, :salePrice, :saleNumber, :buyNumber, :profit)");
                query5.bindValue(":userID", g_userName);
                query5.bindValue(":goodsName", namePutIn);
                query5.bindValue(":costPrice", costIn);
                query5.bindValue(":salePrice", saleIn);
                query5.bindValue(":saleNumber","0");
                query5.bindValue(":buyNumber", numberPutIn);
                query5.bindValue(":profit", profitValue);

            if (!query5.exec())
            {
                qDebug() << "Error: Put in wrong" <<query5.lastError().text();
            }
            else
            {
                qDebug() << "Put in success.";
            }
      }

        dbProfit.close();

        //收益模块结束


    }
    else   //当输入商品的名称为空时，认为是用户的错误输入，反馈给用户报错界面
    {
        CatchError *catchError=new CatchError;
        catchError->setErrorReason("原因：名称为空");
        catchError->show();
    }

    this->close();
}
