#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "profit.h"
#include "wareform.h"
#include "suggestion.h"
#include  "addnew.h"
#include "getout.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "catcherror.h"
#include <iostream>
#include "signin.h"
#include "QLineEdit"

MainWindow *WINDOW;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WINDOW =this;
    signiin=new SignIn(this);
    connect(signiin,&SignIn::loginSuccessful,this,&MainWindow::onLoginSuccessful);
    signiin->show();      //打开登录界面

    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QStringList horizontalList;
    horizontalList<<"名称";
    horizontalList<<"数量";
    horizontalList<<"进价";
    horizontalList<<"售价";
    horizontalList<<"备注";
    ui->tableWidget->setHorizontalHeaderLabels(horizontalList);
   //从数据库中获得对应用户的仓库的信息，并填入到对应的位置

    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
                  return;
    }

    QSqlQuery query;
    query.prepare("SELECT wareName, wareKeeperName, wareKeeperNumber, wareFoundTime FROM userLogin WHERE userID = :userID");
        query.bindValue(":userID", userID);

        if (query.exec() && query.next()) {

            WINDOW->ui->wareName->setText(query.value("wareName").toString());
            WINDOW->ui->wareKeeperName->setText(query.value("wareKeeperName").toString());
            WINDOW->ui->wareKeeperNumber->setText(query.value("wareKeeperNumber").toString());
            WINDOW->ui->wareFoundTime->setText(query.value("wareFoundTime").toString());
        }
        else
        {
            qDebug()<<"Error: No find waredetails";
        }

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeDatabase2()
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersDetails.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
        return;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS usersDetails (userID TEXT PRIMARY KEY, wareName TEXT, wareKeeperName TEXT, wareKeeperNumber TEXT, wareFoundTime TEXT)");
    db.close();
}

void MainWindow::onLoginSuccessful(QString userName)  //获得用户ID
{
    userID=userName;
    qDebug()<<userID;
    loadWarehouseDetails(userID);
}


void MainWindow::on_goProfit_clicked()
{
  Profit *profit=new Profit;
  profit->show();
}

void MainWindow::on_goWareForm_clicked()
{
    WareForm *wareForm=new WareForm;
    wareForm->show();
}

void MainWindow::on_goSuggestion_clicked()
{
    Suggestion *suggestion=new Suggestion;
    suggestion->show();
}

void MainWindow::on_pushButton_clicked()
{
    AddNew *addNew=new AddNew;
    addNew->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    GetOut *getOut=new  GetOut;
    getOut->show();
}

void MainWindow::loadWarehouseDetails(const QString &userID)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if (!db.open())
    {
        qDebug() << "ERROR: Could not connect to database";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT wareName, wareKeeperName, wareKeeperNumber, wareFoundTime FROM usersInformation WHERE userID = :userID");
    query.bindValue(":userID", userID);

    if (query.exec() && query.next())
    {
        ui->wareName->setText(query.value("wareName").toString());
        ui->wareKeeperName->setText(query.value("wareKeeperName").toString());
        ui->wareKeeperNumber->setText(query.value("wareKeeperNumber").toString());
        ui->wareFoundTime->setText(query.value("wareFoundTime").toString());
    }
    else
    {
        qDebug() << "Error: Warehouse details not found";
    }

    db.close();
}



void MainWindow::on_saveBt_clicked()
{
    QString wareName=WINDOW->ui->wareName->text();
    QString wareKeeperName=WINDOW->ui->wareKeeperName->text();
    QString wareKeeperNumber=WINDOW->ui->wareKeeperNumber->text();
    QString wareFoundTime=WINDOW->ui->wareFoundTime->text();

    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if (!db.open())
    {
        qDebug() << "Error: Could not connect to database.";
        return;
    }

    QSqlQuery createTableQuery;
    createTableQuery.exec("CREATE TABLE IF NOT EXISTS usersInformation (userID TEXT PRIMARY KEY, wareName TEXT, wareKeeperName TEXT, wareKeeperNumber TEXT, wareFoundTime TEXT)");


    QSqlQuery query;
    query.prepare("INSERT INTO usersInformation (userID, wareName, wareKeeperName, wareKeeperNumber, wareFoundTime) VALUES (:userID, :wareName, :wareKeeperName, :wareKeeperNumber, :wareFoundTime)");
    query.bindValue(":userID", userID);
    query.bindValue(":wareName", wareName);
    query.bindValue(":wareKeeperName", wareKeeperName);
    query.bindValue(":wareKeeperNumber", wareKeeperNumber);
    query.bindValue(":wareFoundTime", wareFoundTime);


    if(query.exec())
    {
        qDebug()<<"wareHouse datails save successful";
    }
    else
    {
        qDebug()<<"Error: save wrong"<<query.lastError().text();

    }
    db.close();

   //将用户输入的仓库的信息保存到数据库中

}
