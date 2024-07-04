/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNew
{
public:
    QPushButton *add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *costPrice;
    QLineEdit *salePrice;
    QLabel *label_5;
    QLineEdit *more;
    QLineEdit *number;
    QPushButton *cencle;

    void setupUi(QDialog *AddNew)
    {
        if (AddNew->objectName().isEmpty())
            AddNew->setObjectName(QString::fromUtf8("AddNew"));
        AddNew->resize(668, 510);
        add = new QPushButton(AddNew);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(150, 410, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        add->setFont(font);
        label = new QLabel(AddNew);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 21, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(AddNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 121, 41));
        label_2->setFont(font1);
        label_3 = new QLabel(AddNew);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 170, 121, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(AddNew);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 250, 151, 41));
        label_4->setFont(font1);
        name = new QLineEdit(AddNew);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(190, 20, 291, 41));
        costPrice = new QLineEdit(AddNew);
        costPrice->setObjectName(QString::fromUtf8("costPrice"));
        costPrice->setGeometry(QRect(190, 170, 291, 41));
        salePrice = new QLineEdit(AddNew);
        salePrice->setObjectName(QString::fromUtf8("salePrice"));
        salePrice->setGeometry(QRect(190, 250, 291, 41));
        label_5 = new QLabel(AddNew);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 330, 101, 41));
        label_5->setFont(font1);
        more = new QLineEdit(AddNew);
        more->setObjectName(QString::fromUtf8("more"));
        more->setGeometry(QRect(190, 330, 291, 41));
        number = new QLineEdit(AddNew);
        number->setObjectName(QString::fromUtf8("number"));
        number->setGeometry(QRect(190, 100, 291, 41));
        cencle = new QPushButton(AddNew);
        cencle->setObjectName(QString::fromUtf8("cencle"));
        cencle->setGeometry(QRect(380, 410, 121, 51));
        cencle->setFont(font);

        retranslateUi(AddNew);

        QMetaObject::connectSlotsByName(AddNew);
    } // setupUi

    void retranslateUi(QDialog *AddNew)
    {
        AddNew->setWindowTitle(QCoreApplication::translate("AddNew", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("AddNew", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("AddNew", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddNew", "\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddNew", "\346\210\220\346\234\254\344\273\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddNew", "\351\242\204\350\256\241\351\224\200\345\224\256\344\273\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AddNew", "\345\244\207\346\263\250\357\274\232", nullptr));
        cencle->setText(QCoreApplication::translate("AddNew", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNew: public Ui_AddNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
