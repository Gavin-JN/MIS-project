#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_profit_clicked();

    void on_wareForm_clicked();

    void on_suggestion_clicked();

    void on_getIn_clicked();

    void on_getOut_clicked();

public:
    Ui::MainWindow *ui;   //修改为Public便于其他界面修改和使用该界面的控件信息
};
#endif // MAINWINDOW_H
