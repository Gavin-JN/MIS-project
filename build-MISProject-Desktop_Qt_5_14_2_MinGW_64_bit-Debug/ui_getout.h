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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_GetOut
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLineEdit *moreOut;
    QLineEdit *numberPutOut;
    QLabel *label_6;
    QLineEdit *namePutOut;
    QLabel *label_7;
    QPushButton *Out;
    QPushButton *cencleOut;
    QRadioButton *deleteInformation;

    void setupUi(QDialog *GetOut)
    {
        if (GetOut->objectName().isEmpty())
            GetOut->setObjectName(QString::fromUtf8("GetOut"));
        GetOut->resize(621, 405);
        frame = new QFrame(GetOut);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 581, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 150, 71, 31));
        moreOut = new QLineEdit(frame);
        moreOut->setObjectName(QString::fromUtf8("moreOut"));
        moreOut->setGeometry(QRect(170, 150, 231, 31));
        numberPutOut = new QLineEdit(frame);
        numberPutOut->setObjectName(QString::fromUtf8("numberPutOut"));
        numberPutOut->setGeometry(QRect(170, 90, 231, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 90, 71, 31));
        namePutOut = new QLineEdit(frame);
        namePutOut->setObjectName(QString::fromUtf8("namePutOut"));
        namePutOut->setGeometry(QRect(170, 40, 231, 31));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 40, 71, 31));
        Out = new QPushButton(frame);
        Out->setObjectName(QString::fromUtf8("Out"));
        Out->setGeometry(QRect(90, 280, 131, 31));
        cencleOut = new QPushButton(frame);
        cencleOut->setObjectName(QString::fromUtf8("cencleOut"));
        cencleOut->setGeometry(QRect(320, 280, 131, 31));
        deleteInformation = new QRadioButton(frame);
        deleteInformation->setObjectName(QString::fromUtf8("deleteInformation"));
        deleteInformation->setGeometry(QRect(160, 210, 251, 31));

        retranslateUi(GetOut);

        QMetaObject::connectSlotsByName(GetOut);
    } // setupUi

    void retranslateUi(QDialog *GetOut)
    {
        GetOut->setWindowTitle(QCoreApplication::translate("GetOut", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("GetOut", "\345\244\207\346\263\250\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("GetOut", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("GetOut", "\345\220\215\347\247\260\357\274\232", nullptr));
        Out->setText(QCoreApplication::translate("GetOut", "\345\207\272\345\272\223", nullptr));
        cencleOut->setText(QCoreApplication::translate("GetOut", "\345\217\226\346\266\210", nullptr));
        deleteInformation->setText(QCoreApplication::translate("GetOut", "\345\207\272\345\272\223\345\271\266\345\210\240\351\231\244\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetOut: public Ui_GetOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETOUT_H
