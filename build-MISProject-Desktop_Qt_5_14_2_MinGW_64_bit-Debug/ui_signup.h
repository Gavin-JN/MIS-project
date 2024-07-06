/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *newUserName;
    QLineEdit *newPassword;
    QPushButton *newSignUp;
    QPushButton *cencle;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(732, 388);
        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 60, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(SignUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 150, 111, 41));
        label_2->setFont(font);
        newUserName = new QLineEdit(SignUp);
        newUserName->setObjectName(QString::fromUtf8("newUserName"));
        newUserName->setGeometry(QRect(280, 60, 261, 41));
        newPassword = new QLineEdit(SignUp);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setGeometry(QRect(280, 150, 261, 41));
        newSignUp = new QPushButton(SignUp);
        newSignUp->setObjectName(QString::fromUtf8("newSignUp"));
        newSignUp->setGeometry(QRect(200, 270, 121, 31));
        cencle = new QPushButton(SignUp);
        cencle->setObjectName(QString::fromUtf8("cencle"));
        cencle->setGeometry(QRect(450, 270, 121, 31));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "\350\256\276\347\275\256\345\257\206\347\240\201\357\274\232", nullptr));
        newSignUp->setText(QCoreApplication::translate("SignUp", "\346\263\250\345\206\214", nullptr));
        cencle->setText(QCoreApplication::translate("SignUp", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
