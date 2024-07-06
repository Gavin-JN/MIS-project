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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNew
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *costPrice;
    QLineEdit *salePrice;
    QLineEdit *more;
    QLineEdit *numberPutIn;
    QLabel *label_6;
    QLineEdit *namePutIn;
    QLabel *label_7;
    QPushButton *addIn;
    QPushButton *cencleIn;

    void setupUi(QDialog *AddNew)
    {
        if (AddNew->objectName().isEmpty())
            AddNew->setObjectName(QString::fromUtf8("AddNew"));
        AddNew->resize(621, 405);
        frame = new QFrame(AddNew);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 581, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 140, 71, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 190, 71, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 240, 71, 31));
        costPrice = new QLineEdit(frame);
        costPrice->setObjectName(QString::fromUtf8("costPrice"));
        costPrice->setGeometry(QRect(170, 140, 231, 31));
        salePrice = new QLineEdit(frame);
        salePrice->setObjectName(QString::fromUtf8("salePrice"));
        salePrice->setGeometry(QRect(170, 190, 231, 31));
        more = new QLineEdit(frame);
        more->setObjectName(QString::fromUtf8("more"));
        more->setGeometry(QRect(170, 240, 231, 31));
        numberPutIn = new QLineEdit(frame);
        numberPutIn->setObjectName(QString::fromUtf8("numberPutIn"));
        numberPutIn->setGeometry(QRect(170, 90, 231, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 90, 71, 31));
        namePutIn = new QLineEdit(frame);
        namePutIn->setObjectName(QString::fromUtf8("namePutIn"));
        namePutIn->setGeometry(QRect(170, 40, 231, 31));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 40, 71, 31));
        addIn = new QPushButton(frame);
        addIn->setObjectName(QString::fromUtf8("addIn"));
        addIn->setGeometry(QRect(100, 310, 131, 31));
        cencleIn = new QPushButton(frame);
        cencleIn->setObjectName(QString::fromUtf8("cencleIn"));
        cencleIn->setGeometry(QRect(320, 310, 131, 31));

        retranslateUi(AddNew);

        QMetaObject::connectSlotsByName(AddNew);
    } // setupUi

    void retranslateUi(QDialog *AddNew)
    {
        AddNew->setWindowTitle(QCoreApplication::translate("AddNew", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("AddNew", "\350\277\233\344\273\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddNew", "\345\224\256\344\273\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AddNew", "\345\244\207\346\263\250\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("AddNew", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("AddNew", "\345\220\215\347\247\260\357\274\232", nullptr));
        addIn->setText(QCoreApplication::translate("AddNew", "\345\205\245\345\272\223", nullptr));
        cencleIn->setText(QCoreApplication::translate("AddNew", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNew: public Ui_AddNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
