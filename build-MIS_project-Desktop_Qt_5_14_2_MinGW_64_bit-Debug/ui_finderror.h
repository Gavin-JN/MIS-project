/********************************************************************************
** Form generated from reading UI file 'finderror.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDERROR_H
#define UI_FINDERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_findError
{
public:
    QLabel *label;
    QLabel *Error_reason;
    QPushButton *pushButton;

    void setupUi(QDialog *findError)
    {
        if (findError->objectName().isEmpty())
            findError->setObjectName(QString::fromUtf8("findError"));
        findError->resize(860, 498);
        label = new QLabel(findError);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 90, 281, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Error_reason = new QLabel(findError);
        Error_reason->setObjectName(QString::fromUtf8("Error_reason"));
        Error_reason->setGeometry(QRect(260, 250, 301, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        Error_reason->setFont(font1);
        pushButton = new QPushButton(findError);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 380, 151, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);

        retranslateUi(findError);

        QMetaObject::connectSlotsByName(findError);
    } // setupUi

    void retranslateUi(QDialog *findError)
    {
        findError->setWindowTitle(QCoreApplication::translate("findError", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("findError", "\351\224\231\350\257\257\357\274\201", nullptr));
        Error_reason->setText(QString());
        pushButton->setText(QCoreApplication::translate("findError", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findError: public Ui_findError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDERROR_H
