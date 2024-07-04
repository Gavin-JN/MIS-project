#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wareform.h"
#include "profit.h"
#include "suggestion.h"
#include "addnew.h"
#include "getout.h"

extern Profit *PROFIT;
extern Suggestion *SUGGESTION;
extern WareForm *WAREFORM;

MainWindow *WINDOW;   //设置一个主界面的指针
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WINDOW=this;   //绑定

    //设置主界面中商品表格的信息
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置表头名称
    QStringList horizontalList;
    horizontalList<<"Name";
    horizontalList<<"Number";
    horizontalList<<"Cost Price";
    horizontalList<<"Sale Price";
    horizontalList<<"More Information";
    ui->tableWidget->setHorizontalHeaderLabels(horizontalList);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_profit_clicked()  //跳转至收益界面
{
    this->close();
    Profit *pro=new Profit;
    pro->show();
}

void MainWindow::on_wareForm_clicked()  //跳转至报表界面
{
    this->close();
    WareForm *ware=new WareForm;
    ware->show();
}

void MainWindow::on_suggestion_clicked()  //跳转至建议界面
{
    this->close();
    Suggestion *sug=new Suggestion;
    sug->show();
}



void MainWindow::on_getIn_clicked()   //弹出添加窗口
{
    AddNew *add =new AddNew;
    add->show();  //弹出add窗口
}



void MainWindow::on_getOut_clicked()
{
    getOut *gout=new getOut;
    gout->show();
}
