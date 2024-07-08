#include "profit.h"
#include "ui_profit.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
#include <QSqlTableModel>
#include <QTableView>
#include "global.h"


Profit::Profit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profit)
{
    ui->setupUi(this);


    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("profitDatabase.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to profitDatabase";
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
    QString queryStr =  QString ("SELECT goodsName, costPrice, salePrice, saleNumber, buyNumber,profit FROM profitDatabase WHERE userID = '%1'").arg(g_userName);
    setModelStr(queryStr);
    ui->profitTable->setModel(modelProfit);
    ui->profitTable->resizeColumnsToContents();
    ui->profitTable->resizeRowsToContents();

        modelProfit->setHeaderData(0, Qt::Horizontal, tr("商品名称"));
        modelProfit->setHeaderData(1, Qt::Horizontal, tr("进价"));
        modelProfit->setHeaderData(2, Qt::Horizontal, tr("售价"));
        modelProfit->setHeaderData(3, Qt::Horizontal, tr("累计销售数量"));
        modelProfit->setHeaderData(4, Qt::Horizontal, tr("累计购买数量"));
        modelProfit->setHeaderData(5,Qt::Horizontal,tr("收益"));

}

Profit::~Profit()
{
    delete ui;
}

void Profit::setModelStr(const QString &query)
{
    modelProfit=new QSqlQueryModel(this);
    modelProfit->setQuery(query,profitdb);

    if(modelProfit->lastError().isValid())
    {
        qDebug()<<"Erroe: model wrong"<<modelProfit->lastError().text();
    }
}
