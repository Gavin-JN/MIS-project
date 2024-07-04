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

//�����������Ϣ����⣩
void AddNew::appendItem(QString name ,int num,int costPrice,int salePrice,QString more)
{
    int count=WINDOW->ui->tableWidget->rowCount()-1;  //��ù�������Ϣ����
    //ת���ɿ���д���������
    QTableWidgetItem *nameItem=new QTableWidgetItem(name);
    QTableWidgetItem *numItem=new QTableWidgetItem(QString::number(num));
    QTableWidgetItem *costItem=new QTableWidgetItem(QString::number(costPrice));
    QTableWidgetItem *saleItem=new QTableWidgetItem(QString::number(salePrice));
    QTableWidgetItem *moreItem=new QTableWidgetItem(more);
    //������ʾ
    nameItem->setTextAlignment(Qt::AlignCenter);
    numItem->setTextAlignment(Qt::AlignCenter);
    costItem->setTextAlignment(Qt::AlignCenter);
    saleItem->setTextAlignment(Qt::AlignCenter);
    moreItem->setTextAlignment(Qt::AlignCenter);
    //������
    WINDOW->ui->tableWidget->setItem(count,0,nameItem);
    WINDOW->ui->tableWidget->setItem(count,1,numItem);
    WINDOW->ui->tableWidget->setItem(count,2,costItem);
    WINDOW->ui->tableWidget->setItem(count,3,saleItem);
    WINDOW->ui->tableWidget->setItem(count,4,moreItem);

}



void AddNew::on_add_clicked()    //�����Ӱ�ť�����¼�
{
    //��LineEdit �л����Ϣ
    QString name=ui->name->text();
    int num=ui->number->text().toInt();
    int cost=ui->costPrice->text().toInt();
    int sale=ui->salePrice->text().toInt();
    QString more=ui->more->text();
    if(name!=nullptr)          //��û���������ж�Ϊ�󴥣���������Ʒ��¼��
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
