/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *goProfit;
    QPushButton *goWareForm;
    QPushButton *goSuggestion;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *wareName;
    QLineEdit *wareFoundTime;
    QLineEdit *wareKeeperName;
    QLineEdit *wareKeeperNumber;
    QPushButton *saveBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 60, 131, 231));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 370, 131, 231));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(140, 0, 831, 661));
        goProfit = new QPushButton(centralwidget);
        goProfit->setObjectName(QString::fromUtf8("goProfit"));
        goProfit->setGeometry(QRect(980, 440, 211, 51));
        goWareForm = new QPushButton(centralwidget);
        goWareForm->setObjectName(QString::fromUtf8("goWareForm"));
        goWareForm->setGeometry(QRect(980, 510, 211, 51));
        goSuggestion = new QPushButton(centralwidget);
        goSuggestion->setObjectName(QString::fromUtf8("goSuggestion"));
        goSuggestion->setGeometry(QRect(980, 580, 211, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(980, 10, 101, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(980, 170, 221, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(980, 90, 211, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(980, 250, 211, 31));
        wareName = new QLineEdit(centralwidget);
        wareName->setObjectName(QString::fromUtf8("wareName"));
        wareName->setGeometry(QRect(980, 50, 221, 31));
        wareFoundTime = new QLineEdit(centralwidget);
        wareFoundTime->setObjectName(QString::fromUtf8("wareFoundTime"));
        wareFoundTime->setGeometry(QRect(980, 130, 221, 31));
        wareKeeperName = new QLineEdit(centralwidget);
        wareKeeperName->setObjectName(QString::fromUtf8("wareKeeperName"));
        wareKeeperName->setGeometry(QRect(980, 210, 221, 31));
        wareKeeperNumber = new QLineEdit(centralwidget);
        wareKeeperNumber->setObjectName(QString::fromUtf8("wareKeeperNumber"));
        wareKeeperNumber->setGeometry(QRect(980, 290, 221, 31));
        saveBt = new QPushButton(centralwidget);
        saveBt->setObjectName(QString::fromUtf8("saveBt"));
        saveBt->setGeometry(QRect(1040, 360, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\245\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\272\223", nullptr));
        goProfit->setText(QCoreApplication::translate("MainWindow", "\346\224\266\347\233\212", nullptr));
        goWareForm->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\241\250", nullptr));
        goSuggestion->setText(QCoreApplication::translate("MainWindow", "\345\273\272\350\256\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\350\264\237\350\264\243\344\272\272\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\264\237\350\264\243\344\272\272\347\224\265\350\257\235\357\274\232", nullptr));
        saveBt->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
