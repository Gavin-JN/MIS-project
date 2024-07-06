#include "getout.h"
#include "ui_getout.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "catcherror.h"

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
    }
}
}
