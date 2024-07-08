#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *eventWhenClose);

private slots:

    void onLoginSuccessful(QString userName);

    void initializeDatabase2();

    void initializeDatabase5();

    void renewTable(QString userName);

    void on_goProfit_clicked();

    void on_goWareForm_clicked();

    void on_goSuggestion_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void loadWarehouseDetails(const QString &userID);

    void on_saveBt_clicked();

public:
    Ui::MainWindow *ui;
    QString  userID;
    SignIn *signiin;
};
#endif // MAINWINDOW_H
