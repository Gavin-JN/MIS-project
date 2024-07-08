#include "suggestion.h"
#include "ui_suggestion.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <mainwindow.h>
#include <ui_mainwindow.h>
#include "global.h"
#include <QList>

extern MainWindow* WINDOW;
Suggestion::Suggestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Suggestion)
{
    int rowCount=WINDOW->ui->tableWidget->rowCount();
    int rowOfMax;
    double maxNumber=0;
    for(int i=0;i<rowCount;i++)
    {
        double  leaveNum =WINDOW->ui->tableWidget->item(i,1)->text().toDouble();
        if(leaveNum>maxNumber)
        {
            rowOfMax=i;
            maxNumber=leaveNum;
        }

    }


    ui->leaveNumberMost->setText(WINDOW->ui->tableWidget->item(rowOfMax,0)->text());
    ui->leaveMaxNumber->setText(QString::number(maxNumber));

    double maxSingleProfit;
    for(int i=0;i<rowCount;i++)
    {
       // double singleProfit=WINDOW->ui->tableWidget->item(i,);
    }






    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if (!db.open())
    {
        qDebug() << "Error: Could not open database.";
        qDebug() << db.lastError().text();
    }
    else
    {
        qDebug() << "usersInformation connect  success.";
    }

    QSqlQuery query(db);/*
    query.prepare("SELECT MAX()")*/

}

Suggestion::~Suggestion()
{
    delete ui;
}


void Suggestion::on_knowBt_clicked()
{
    this->close();
}
