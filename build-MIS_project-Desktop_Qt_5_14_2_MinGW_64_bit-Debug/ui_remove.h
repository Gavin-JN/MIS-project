/********************************************************************************
** Form generated from reading UI file 'remove.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_H
#define UI_REMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_remove
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *remove)
    {
        if (remove->objectName().isEmpty())
            remove->setObjectName(QString::fromUtf8("remove"));
        remove->resize(668, 510);
        pushButton = new QPushButton(remove);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 330, 131, 41));
        label = new QLabel(remove);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 50, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(remove);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 120, 81, 41));
        label_2->setFont(font);
        label_3 = new QLabel(remove);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 200, 81, 51));
        label_3->setFont(font);
        pushButton_2 = new QPushButton(remove);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 330, 131, 41));
        lineEdit = new QLineEdit(remove);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 50, 251, 41));
        lineEdit_2 = new QLineEdit(remove);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 120, 251, 41));
        lineEdit_3 = new QLineEdit(remove);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(240, 200, 251, 41));

        retranslateUi(remove);

        QMetaObject::connectSlotsByName(remove);
    } // setupUi

    void retranslateUi(QDialog *remove)
    {
        remove->setWindowTitle(QCoreApplication::translate("remove", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("remove", "\345\207\272\345\272\223", nullptr));
        label->setText(QCoreApplication::translate("remove", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("remove", "\345\207\272\345\272\223\346\225\260\351\207\217\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("remove", "\345\244\207\346\263\250\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("remove", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove: public Ui_remove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_H
