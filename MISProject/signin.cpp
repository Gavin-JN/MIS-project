#include "signin.h"
#include "ui_signin.h"
#include "mainwindow.h"
#include "signup.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "catcherror.h"
#include "QMessageBox"

extern MainWindow *WINDOW;
SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}


SignIn::~SignIn()
{
    delete ui;
}

void initializeDatabase()
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
        return;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS usersInformation (userName TEXT PRIMARY KEY, password TEXT");
    db.close();
}


void SignIn::on_signIn_clicked()
{
    //检测账户和密码是否正确
    QString  userName=ui->userName->text();
    QString password=ui->password->text();

    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("usersInformation.db");

    if(!db.open())
    {
        qDebug()<<"ERROR: Could not connect to database";
                  return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM usersInformation WHERE userName= :userName AND password= :password");
    query.bindValue(":userName",userName);
    query.bindValue(":password",password);

    if(query.exec()&&query.next())
    {
        emit loginSuccessful(userName);
        this->close();
        WINDOW->show();
    }
    else
    {
        QMessageBox::warning(this, "Error", "用户名或密码错误");
//        CatchError *errorWithSignIn=new CatchError;
//        errorWithSignIn->setErrorReason("用户名或密码错误");
//        errorWithSignIn->show();

    }

    db.close();

}

void SignIn::on_signUp_clicked()
{
    this->close();
    SignUp *up=new SignUp;
    up->show();
}
