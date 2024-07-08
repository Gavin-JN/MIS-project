#include "wareform.h"
#include "ui_wareform.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
#include <QSqlTableModel>
#include <QTableView>
#include "global.h"
WareForm::WareForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WareForm)
{
    ui->setupUi(this);
    //ui->wareTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //从数据库中获得表格数据并在页面中显示
    db= QSqlDatabase::addDatabase("QSQLITE");
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
     //打开数据库
    db.open();
    QSqlQuery query2(db);
    if (!db.isOpen())
    {
           qDebug() << "Error: Database is not open.";
           return;
    }

    //表格
    QString queryStr =  QString ("SELECT namePutIn, typePutIn, numberPutIn, more, timePutIn FROM accessRecord WHERE userID = '%1'").arg(g_userName);
    setModelStr(queryStr);
    ui->wareTable->setModel(model);
    ui->wareTable->resizeColumnsToContents();
    ui->wareTable->resizeRowsToContents();

    model->setHeaderData(0, Qt::Horizontal, tr("名称"));
    model->setHeaderData(1, Qt::Horizontal, tr("操作"));
    model->setHeaderData(2, Qt::Horizontal, tr("数量"));
    model->setHeaderData(3, Qt::Horizontal, tr("备注"));
    model->setHeaderData(4, Qt::Horizontal, tr("时间"));




}

//void WareForm::appentData(QString name, int operater, double number, QString moreInformation)  //向报表的表格中添加信息
//{
//    int count=this->ui->wareTable->rowCount();

//    QTableWidgetItem *nameItem=new QTableWidgetItem(name);   //类型转换
//    QTableWidgetItem *numItem=new QTableWidgetItem(QString::number(number));
//    QTableWidgetItem *moreItem=new QTableWidgetItem(moreInformation);

//    nameItem->setTextAlignment(Qt::AlignCenter);   // 将表格信息进行居中操作
//    numItem->setTextAlignment(Qt::AlignCenter);
//    moreItem->setTextAlignment(Qt::AlignCenter);

//    this->ui->wareTable->setItem(count,0,nameItem);   //向表格中填入信息
//    this->ui->wareTable->setItem(count,1,numItem);
//    this->ui->wareTable->setItem(count,3,moreItem);

//    if(operater==1)
//    {
//        QTableWidgetItem *operItem=new QTableWidgetItem("入库");
//        this->ui->wareTable->setItem(count,2,operItem);
//        operItem->setTextAlignment(Qt::AlignCenter);
//    }
//    else
//    {
//        QTableWidgetItem *operItem=new QTableWidgetItem("出库");
//        this->ui->wareTable->setItem(count,2,operItem);
//        operItem->setTextAlignment(Qt::AlignCenter);
//    }
//}



void WareForm::setModelStr(const QString &query)
{
    model=new QSqlQueryModel(this);
    model->setQuery(query,db);

    if(model->lastError().isValid())
    {
        qDebug()<<"Erroe: model wrong"<<model->lastError().text();
    }
}


WareForm::~WareForm()
{
    delete ui;
}
