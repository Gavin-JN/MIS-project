/********************************************************************************
** Form generated from reading UI file 'getout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETOUT_H
#define UI_GETOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getOut
{
public:
    QPushButton *decline_out;
    QLineEdit *name_out;
    QLineEdit *more_out;
    QPushButton *get_out;
    QLabel *label_3;
    QLabel *label;
    QPushButton *cencle_out;
    QLineEdit *number_out;
    QLabel *label_2;

    void setupUi(QDialog *getOut)
    {
        if (getOut->objectName().isEmpty())
            getOut->setObjectName(QString::fromUtf8("getOut"));
        getOut->resize(778, 598);
        decline_out = new QPushButton(getOut);
        decline_out->setObjectName(QString::fromUtf8("decline_out"));
        decline_out->setGeometry(QRect(490, 420, 111, 31));
        name_out = new QLineEdit(getOut);
        name_out->setObjectName(QString::fromUtf8("name_out"));
        name_out->setGeometry(QRect(300, 40, 311, 41));
        more_out = new QLineEdit(getOut);
        more_out->setObjectName(QString::fromUtf8("more_out"));
        more_out->setGeometry(QRect(300, 200, 311, 41));
        get_out = new QPushButton(getOut);
        get_out->setObjectName(QString::fromUtf8("get_out"));
        get_out->setGeometry(QRect(190, 330, 131, 41));
        label_3 = new QLabel(getOut);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 200, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label = new QLabel(getOut);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 121, 41));
        label->setFont(font);
        cencle_out = new QPushButton(getOut);
        cencle_out->setObjectName(QString::fromUtf8("cencle_out"));
        cencle_out->setGeometry(QRect(480, 330, 131, 41));
        number_out = new QLineEdit(getOut);
        number_out->setObjectName(QString::fromUtf8("number_out"));
        number_out->setGeometry(QRect(300, 120, 311, 41));
        label_2 = new QLabel(getOut);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 120, 131, 41));
        label_2->setFont(font);

        retranslateUi(getOut);

        QMetaObject::connectSlotsByName(getOut);
    } // setupUi

    void retranslateUi(QDialog *getOut)
    {
        getOut->setWindowTitle(QCoreApplication::translate("getOut", "Dialog", nullptr));
        decline_out->setText(QCoreApplication::translate("getOut", "\345\210\240\351\231\244", nullptr));
        get_out->setText(QCoreApplication::translate("getOut", "\345\207\272\345\272\223", nullptr));
        label_3->setText(QCoreApplication::translate("getOut", "\345\244\207\346\263\250\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("getOut", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        cencle_out->setText(QCoreApplication::translate("getOut", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("getOut", "\345\207\272\345\272\223\346\225\260\351\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getOut: public Ui_getOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETOUT_H
