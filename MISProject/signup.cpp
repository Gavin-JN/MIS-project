#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include "signin.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QMessageBox>



SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_cencle_clicked()
{
    this->close();
}

void SignUp::on_newSignUp_clicked()
{

    //将新注册的账户和密码保存进数据库中
    QString newUserName=ui->newUserName->text();
    QString newPassword=ui->newPassword->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("usersInformation.db");

        if (!db.open())
        {
            qDebug() << "Error: Could not connect to database.";
            return;
        }

        QSqlQuery createTableQuery;
        createTableQuery.exec("CREATE TABLE IF NOT EXISTS usersInformation (userName TEXT PRIMARY KEY, password TEXT )");


        QSqlQuery query;
        query.prepare("INSERT INTO usersInformation (userName, password) VALUES (:userName, :password)");
        query.bindValue(":userName", newUserName);
        query.bindValue(":password", newPassword);

        if (query.exec())
        {
           QMessageBox::information(this,"Success","注册成功");
           this->close();
           SignIn *in=new SignIn;
           in->show();
        }
        else
        {
                QMessageBox::warning(this, "Error", "用户名已被注册");
         }
        db.close();

}
