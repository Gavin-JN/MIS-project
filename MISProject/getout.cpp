#include "getout.h"
#include "ui_getout.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "catcherror.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <addnew.h>
#include <QDateTime>
#include "global.h"

extern MainWindow*WINDOW;
GetOut::GetOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetOut)
{
    ui->setupUi(this);
}

GetOut::~GetOut()
{
    delete ui;
}

void GetOut::on_cencleOut_clicked()
{
    this->close();
}

int GetOut::ifExitOr(QString str)  //检测要出库或者入库的商品在仓库内是否存在或者是否还有剩余量
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
    return -2;
}


QString nameOut;  //用于记录出库商品名称
int numOut;   //用于记录出库商品数量


void GetOut::on_Out_clicked()
{


nameOut=ui->namePutOut->text();
int ifhave=ifExitOr(nameOut);

if(ifhave==-2)
{
    CatchError *error=new CatchError;
    error->setErrorReason("原因：仓库内未发现该商品");
    error->show();
}

else
{
    if(WINDOW->ui->tableWidget->item(ifhave,1)->text().toUInt()==0)
   {
    if(ui->deleteInformation->isChecked())  //当要删除仓库内该商品信息时
    {
        numOut=0;  //此时默认出库的数量为仓库内剩余的全部数量 ，numOut存储出库数量
        WINDOW->ui->tableWidget->removeRow(ifhave);   //error
        this->close();
    }
    else
    {
    CatchError *error2=new CatchError;
    error2->setErrorReason("原因：仓库内该商品数量为0");
    error2->show();
    }
   }

  else
  {
       if(ui->deleteInformation->isChecked())  //当要删除仓库内该商品信息时
       {
        numOut=WINDOW->ui->tableWidget->item(ifhave,1)->text().toDouble();   //此时默认出库的数量为仓库内剩余的全部数量 ，numOut存储出库数量
        WINDOW->ui->tableWidget->removeRow(ifhave);
        this->close();
       }

      else
       {
           numOut=ui->numberPutOut->text().toUInt();
          int currentNum=WINDOW->ui->tableWidget->item(ifhave,1)->text().toInt()-numOut;  //仓库内数量减去要出库的数量剩余的数量

        if(currentNum<0)  //当库存数量少于要出库的数量时
        {
           CatchError *error3=new CatchError;
           error3->setErrorReason("原因：仓库内该商品数量不足");
           error3->show();
        }
        else   //当库存数量足够时
        {
           QTableWidgetItem *currentNumber=new QTableWidgetItem;
           currentNumber->setText(QString::number(currentNum));
           WINDOW->ui->tableWidget->setItem(ifhave,1,currentNumber);
           WINDOW->ui->tableWidget->item(ifhave,1)->setTextAlignment(Qt::AlignCenter);
           this->close();
        }

       }


       //将出库记录传给wareTable进行记录
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

       db.open();
       QSqlQuery query2(db);
       if (!db.isOpen())
       {
              qDebug() << "Error: Database is not open.";
              return;
       }
       if(!query2.exec("CREATE TABLE IF NOT EXISTS accessRecord (userID TEXT PRIMARY KEY, namePutIn TEXT,typePutIn TEXT, numberPutIn  TEXT, more TEXT, timePutIn TEXT)"))
      {
           qDebug()<<"Error:Could not creat table"<<query2.lastError().text();
           db.close();
           return ;
       }

       //插入数据
       query2.prepare("INSERT INTO accessRecord (userID, namePutIn,typePutIn, numberPutIn, more,timePutIn) VALUES (:userID, :namePutIn, :typePutIn, :numberPutIn, :more, :timePutIn)");

      QDateTime currentTime=QDateTime::currentDateTime();
      QString  formatTime=currentTime.toString("yyyy-MM-dd hh:mm:ss");

       qDebug()<<"Time:"<<formatTime;

       query2.bindValue(":userID", g_userName);
       query2.bindValue(":namePutIn", nameOut);
       query2.bindValue(":typePutIn","出库");
       query2.bindValue(":numberPutIn", numOut);
       query2.bindValue(":more", ui->moreOut->text());
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





      //收益模块
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

       query3.prepare("SELECT profit ,salePrice FROM profitDatabase WHERE userID = :userID AND goodsName = :goodsName");
       query3.bindValue(":userID", g_userName);
       query3.bindValue(":goodsName", nameOut);


          double usedProfitDouble = query3.value("profit").toDouble(); //获得该商品的原有的收益信息
          double salePrice = query3.value("salePrice").toDouble();

           qDebug()<<"out_useProfit:"<<usedProfitDouble;
           qDebug()<<"salePrice:"<<salePrice;

           double profitValueDouble = usedProfitDouble + (salePrice*numOut);
           QString profitValue = QString::number(profitValueDouble);
           //得到新的收益信息并更新数据库的信息
           QSqlQuery query4(dbProfit);
           query4.prepare("UPDATE profitDatabase SET profit = :profit, saleNumber = :saleNumber WHERE userID = :userID AND goodsName = :goodsName");
           query4.bindValue(":profit", profitValue);
           query4.bindValue(":saleNumber", numOut);
           query4.bindValue(":userID", g_userName);
           query4.bindValue(":goodsName", nameOut);

           if (!query4.exec())
           {
               qDebug() << "Error: update wrong" << query4.lastError().text();
           }
           else
           {
               qDebug() << "updated success.";
           }



       dbProfit.close();

       //收益模块结束


    }
}
}
