#ifndef LOGMANAGER_H
#define LOGMANAGER_H
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTableView>
#include <QStandardItemModel>
#include <QPushButton>
#include <QStringListModel>
#include <QSqlTableModel>
#include <QMessageBox>



class LogManager
{
public:
    LogManager();
    ~LogManager();
    bool ifSignInSuccess(QString userName,QString password);
    bool ifExit(QString userName);
    bool addNew(QString userName,QString password);
private:
    QSqlDatabase db;
};

#endif // LOGMANAGER_H
