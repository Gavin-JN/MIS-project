/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userName;
    QLineEdit *password;
    QPushButton *signIn;
    QPushButton *signUp;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(862, 573);
        label = new QLabel(SignIn);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 140, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(SignIn);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 230, 111, 51));
        label_2->setFont(font);
        userName = new QLineEdit(SignIn);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(320, 140, 311, 51));
        password = new QLineEdit(SignIn);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(320, 230, 311, 51));
        signIn = new QPushButton(SignIn);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->setGeometry(QRect(210, 400, 161, 41));
        signUp = new QPushButton(SignIn);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->setGeometry(QRect(530, 400, 161, 41));

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignIn", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("SignIn", "\345\257\206\347\240\201\357\274\232", nullptr));
        signIn->setText(QCoreApplication::translate("SignIn", "\347\231\273\345\275\225", nullptr));
        signUp->setText(QCoreApplication::translate("SignIn", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
