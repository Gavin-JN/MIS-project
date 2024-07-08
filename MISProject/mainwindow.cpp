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
#include <QMessageBox>
#include <QCloseEvent>
#include "global.h"

MainWindow *WINDOW;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WINDOW =this;
    signiin=new SignIn(this);
    signiin->show(); //打开登录界面
    connect(signiin,&SignIn::loginSuccessful,this,&MainWindow::onLoginSuccessful);

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
    db.setDatabaseName("usersWare.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
                  return;
    }

    QSqlQuery queryOfWare;
    queryOfWare.prepare("SELECT * FROM usersWare WHERE userID= :userID");
    queryOfWare.bindValue(":userID",g_userName);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeDatabase2()    //数据库： usersDetails
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE","detailsConnection");
    db.setDatabaseName("usersDetails.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
        return;
    }

    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS usersDetails (userID TEXT PRIMARY KEY, wareName TEXT, wareKeeperName TEXT, wareKeeperNumber TEXT, wareFoundTime TEXT)");
    db.close();
}

void MainWindow::initializeDatabase5()    //数据库： usesWare
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersWare.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
        return;
    }

    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS usersWare (userID TEXT , goodName TEXT, goodNumber TEXT, goodCost TEXT, goodSale TEXT, moreInformation TEXT)");
    db.close();
}

void MainWindow::onLoginSuccessful(QString userName)  //登录成功后，获得用户ID并从数据库 usersDetails中获得主页面的仓库信息
{
    userID=userName;
    qDebug()<<"***"<<userID;

    loadWarehouseDetails(userID);

//    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("usersDetails.db");

//    if(!db.open())
//    {
//        qDebug()<<"ERROR: Could not connect to database";
//                  return;
//    }

//    QSqlQuery query;
//    query.prepare("SELECT wareName, wareKeeperName, wareKeeperNumber, wareFoundTime FROM usersDetails WHERE userID = :userID");
//        query.bindValue(":userID", userID);

//        if (query.exec() && query.next()) {

//            WINDOW->ui->wareName->setText(query.value("wareName").toString());
//            WINDOW->ui->wareKeeperName->setText(query.value("wareKeeperName").toString());
//            WINDOW->ui->wareKeeperNumber->setText(query.value("wareKeeperNumber").toString());
//            WINDOW->ui->wareFoundTime->setText(query.value("wareFoundTime").toString());
//        }
//        else
//        {
//            qDebug()<<"Error: No find waredetails";      //*
//        }
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

void  MainWindow::loadWarehouseDetails(const QString &userID_p)   //获得仓库信息并填入
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","loaddetailsConnection");
    db.setDatabaseName("usersDetails.db");

    if (!db.open())
    {
        qDebug() << "ERROR: Could not connect to database";
        return;
    }
    else
    {
        qDebug()<<"connect right";
    }

    QSqlQuery query(db);
    query.prepare("SELECT wareName, wareKeeperName, wareKeeperNumber, wareFoundTime FROM usersDetails WHERE userID = :userID");
    query.bindValue(":userID", userID_p);
    qDebug() << "Bound value:" << query.boundValue(":userID");

    if (query.exec())
    {
        if (query.next())
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
    }
    else
    {
        qDebug() << "Error: " << query.lastError().text();
    }

    db.close();
}


void MainWindow::on_saveBt_clicked()    //保存输入的仓库信息,将保存的仓库的信息传入到数据库中
{
    QString wareName=WINDOW->ui->wareName->text();
    QString wareKeeperName=WINDOW->ui->wareKeeperName->text();
    QString wareKeeperNumber=WINDOW->ui->wareKeeperNumber->text();
    QString wareFoundTime=WINDOW->ui->wareFoundTime->text();

    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE","detailsConnection");
    db.setDatabaseName("usersDetails.db");


    if (!db.open())  //判断是否成功连接到数据库
    {
        qDebug() << "Error: Could not connect to database.";
        return;
    }


    QSqlQuery createTableQuery(db);
    createTableQuery.exec("CREATE TABLE IF NOT EXISTS usersDetails (userID TEXT PRIMARY KEY, wareName TEXT, wareKeeperName TEXT, wareKeeperNumber TEXT, wareFoundTime TEXT)");

    //检查该用户是否已经保存过仓库的信息
    QSqlQuery checkIfExit(db);
    checkIfExit.prepare("SELECT COUNT(*) FROM usersDetails WHERE userID= :userID");
    checkIfExit.bindValue(":userID",userID);

    if(checkIfExit.exec()&&checkIfExit.next())
    {
        int count=checkIfExit.value(0).toInt();
        QSqlQuery query(db);
        if(count>0)      //如果数据库内已有该仓库信息
        {
         query.prepare("UPDATE usersDetails SET wareName = :wareName, wareKeeperName = :wareKeeperName, wareKeeperNumber = :wareKeeperNumber, wareFoundTime = :wareFoundTime WHERE userID = :userID");
        }
        else             //如果数据库内没有该仓库信息
        {
         query.prepare("INSERT INTO usersDetails (userID, wareName, wareKeeperName, wareKeeperNumber, wareFoundTime) VALUES (:userID, :wareName, :wareKeeperName, :wareKeeperNumber, :wareFoundTime)");
        }


        qDebug()<<userID<<"count:"<<count;

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
   }
    db.close();

   //将用户输入的仓库的信息保存到数据库中

}



void MainWindow::closeEvent(QCloseEvent *eventWhenClose)  //关闭主窗口是将仓库内商品的信息进行存储
    {
        // 执行关闭前的操作
        qDebug() << "窗口即将关闭";

        // 弹出确认对话框
        QMessageBox::StandardButton resBtn = QMessageBox::question(this, "确认关闭",tr("你确定要关闭窗口吗?\n"),
                                                                   QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                   QMessageBox::Yes);
        if (resBtn != QMessageBox::Yes)
        {
         eventWhenClose->ignore() ; // 忽略关闭事件，窗口不会关闭
        }
        else
        {
            //接受关闭，关闭之前进行数据的存储

            QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("usersWare.db");


            if (!db.open())  //判断是否成功连接到数据库
            {
                qDebug() << "Error: Could not connect to database.";
                return;
            }


            QSqlQuery createTableQuery(db);
            createTableQuery.exec("CREATE TABLE IF NOT EXISTS usersWare (userID TEXT , goodName TEXT, goodNumber TEXT, goodCost TEXT, goodSale TEXT, moreInformation TEXT)");
             int rowNumber=ui->tableWidget->rowCount();
             for(int row=0;row<rowNumber;row++)
             {
                 QString goodName=ui->tableWidget->item(row,0)->text();
                 QString goodNumber=ui->tableWidget->item(row,1)->text();
                 QString goodCost=ui->tableWidget->item(row,2)->text();
                 QString goodSale=ui->tableWidget->item(row,3)->text();
                 QString moreInformation=ui->tableWidget->item(row,4)->text();

                 QSqlQuery queryWare(db);
                 queryWare.prepare("INSERT INTO usersWare (userID, goodName, goodNumber, goodCost, goodSale,moreInformation) VALUES (:userID, :goodName, :goodNumber, :goodCost, :goodSale, :moreInformation)");
                 queryWare.bindValue(":userID",g_userName);
                 queryWare.bindValue(":goodName",goodName);
                 queryWare.bindValue(":goodCost",goodCost);
                 queryWare.bindValue(":goodSale",goodSale);
                 queryWare.bindValue(":moreInformation",moreInformation);
                 if(queryWare.exec())
                   {
                     qDebug()<<"userWare save successful";
                   }
                 else
                   {
                     qDebug()<<"Error: save wrong"<<queryWare.lastError().text();

                   }
                }
                 db.close();


             }
          eventWhenClose->accept();  // 接受关闭事件，窗口会关闭
        }

