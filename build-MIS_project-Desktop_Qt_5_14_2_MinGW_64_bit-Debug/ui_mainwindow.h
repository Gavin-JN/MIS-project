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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *wareForm;
    QPushButton *suggestion;
    QPushButton *profit;
    QPushButton *wareHouse;
    QPushButton *getIn;
    QPushButton *getOut;
    QFrame *frame_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2600, 1700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 270, 401, 1306));
        frame->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.370787 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:30px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        wareForm = new QPushButton(frame);
        wareForm->setObjectName(QString::fromUtf8("wareForm"));
        wareForm->setGeometry(QRect(9, 690, 381, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(28);
        wareForm->setFont(font);
        wareForm->setStyleSheet(QString::fromUtf8("border-radius:40;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
""));
        suggestion = new QPushButton(frame);
        suggestion->setObjectName(QString::fromUtf8("suggestion"));
        suggestion->setGeometry(QRect(9, 990, 381, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        suggestion->setFont(font1);
        suggestion->setStyleSheet(QString::fromUtf8("border-radius:40;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
""));
        profit = new QPushButton(frame);
        profit->setObjectName(QString::fromUtf8("profit"));
        profit->setGeometry(QRect(9, 390, 381, 81));
        profit->setFont(font1);
        profit->setStyleSheet(QString::fromUtf8("border-radius:40;\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
""));
        wareHouse = new QPushButton(frame);
        wareHouse->setObjectName(QString::fromUtf8("wareHouse"));
        wareHouse->setGeometry(QRect(10, 90, 381, 81));
        wareHouse->setFont(font1);
        wareHouse->setStyleSheet(QString::fromUtf8("border-radius:40;\n"
"background-color: rgb(85, 170, 255);\n"
"\n"
"\n"
""));
        getIn = new QPushButton(centralwidget);
        getIn->setObjectName(QString::fromUtf8("getIn"));
        getIn->setGeometry(QRect(573, 33, 376, 228));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        getIn->setFont(font2);
        getIn->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 106, 239);\n"
"border-radius:36px;"));
        getOut = new QPushButton(centralwidget);
        getOut->setObjectName(QString::fromUtf8("getOut"));
        getOut->setGeometry(QRect(1520, 33, 376, 228));
        getOut->setFont(font2);
        getOut->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 106, 239);\n"
"border-radius:36px;"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(2120, 360, 454, 1163));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(18);
        frame_2->setFont(font3);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:30px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 131, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(frame_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(140, 100, 291, 61));
        QFont font5;
        font5.setUnderline(false);
        textBrowser->setFont(font5);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-bottom-color: rgb(85, 0, 0);\n"
"border:30px;"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(570, 330, 1341, 1231));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2600, 21));
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
        wareForm->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\346\212\245\350\241\250", nullptr));
        suggestion->setText(QCoreApplication::translate("MainWindow", "\345\273\272\350\256\256", nullptr));
        profit->setText(QCoreApplication::translate("MainWindow", "\346\224\266\347\233\212", nullptr));
        wareHouse->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223", nullptr));
        getIn->setText(QCoreApplication::translate("MainWindow", "\345\205\245\345\272\223", nullptr));
        getOut->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\272\223", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " \344\273\223\345\272\223\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
