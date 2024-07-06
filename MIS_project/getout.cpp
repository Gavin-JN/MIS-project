#include "getout.h"
#include "ui_getout.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "finderror.h"
#include "ui_finderror.h"
extern MainWindow *WINDOW;

getOut::getOut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getOut)
{
    ui->setupUi(this);
}

getOut::~getOut()
{
    delete ui;
}

int getOut::ifExit(QString name_out)   //判断仓库内是否有要出库的商品  ***
{
    int count=WINDOW->ui->tableWidget->rowCount();
    for(int i=0;i<count;i++)
    {
        QTableWidgetItem *item=WINDOW->ui->tableWidget->item(i,1);
        if(item)
        {
            QString name_in=item->text().trimmed();
         if(QString::compare(name_in,name_out,Qt::CaseSensitive)==0)
         {
            return i;
         }
        }
    }
    return -1;
}

void getOut::on_get_out_clicked()  //出库
{
    QString name_out=ui->get_out->text().trimmed();
    int row=getOut::ifExit(name_out);
    if(row!= -1)
    {
        WINDOW->ui->tableWidget->removeRow(row);
    }
        else
    {
        findError *err=new findError;
        err->ui->errorReason->setText("No Find!");
        err->show();
    }
}

void getOut::on_cencle_out_clicked()
{
    this->close();
}
