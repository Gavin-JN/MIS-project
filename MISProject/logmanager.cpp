#include "logmanager.h"
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

    LogManager::LogManager()
    {
        // 初始化数据库连接
        db = QSqlDatabase::addDatabase("QSQLITE");
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
    }

    LogManager::~LogManager()
    {
        db.close();
    }

   bool LogManager::ifExit(QString userName)   //判断某用户名是否存在
   {
       QSqlQuery query(db);
       query.prepare("SELECT COUNT(*) FROM usersInformation WHERE userName = :userName");
       query.bindValue(":userName",userName);
       if (!query.exec())
       {
               qDebug() << "Error in check userName" << query.lastError().text();
               db.close();
               return false;
       }
       query.next();
       return query.value(0).toInt();
   }



   bool LogManager::ifSignInSuccess(QString userName,QString password)
   {
       QSqlQuery query(db);
       query.prepare("SELECT COUNT(*) FROM usersInformation WHERE userName= :userName AND password= :password");
       query.bindValue(":userName",userName);
       query.bindValue(":password",password);
       if (!query.exec())
       {
               qDebug() << "Error in signIn" << query.lastError().text();
               db.close();
               return false;
       }
       query.next();
       return query.value(0).toInt();
   }



   bool LogManager::addNew(QString userName,QString password)
   {
       QSqlQuery query;
       query.prepare("INSERT INTO usersInformation (userName, password) VALUES (:userName, :password)");
       query.bindValue(":userName", userName);
       query.bindValue(":password", password);

       if (query.exec())
               {
                  return true;
               }
               else
               {
                   return false;
               }
   }

