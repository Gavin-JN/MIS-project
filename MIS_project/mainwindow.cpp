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

MainWindow *WINDOW;   //����һ���������ָ��
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WINDOW=this;   //��

    //��������������Ʒ������Ϣ
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //���ñ�ͷ����
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

void MainWindow::on_profit_clicked()  //��ת���������
{
    this->close();
    Profit *pro=new Profit;
    pro->show();
}

void MainWindow::on_wareForm_clicked()  //��ת���������
{
    this->close();
    WareForm *ware=new WareForm;
    ware->show();
}

void MainWindow::on_suggestion_clicked()  //��ת���������
{
    this->close();
    Suggestion *sug=new Suggestion;
    sug->show();
}



void MainWindow::on_getIn_clicked()   //������Ӵ���
{
    AddNew *add =new AddNew;
    add->show();  //����add����
}



void MainWindow::on_getOut_clicked()
{
    getOut *gout=new getOut;
    gout->show();
}
