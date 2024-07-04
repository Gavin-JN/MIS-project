/********************************************************************************
** Form generated from reading UI file 'wareform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAREFORM_H
#define UI_WAREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WareForm
{
public:
    QFrame *frame;
    QPushButton *wareForm;
    QPushButton *suggestion;
    QPushButton *profit;
    QPushButton *wareHouse;

    void setupUi(QDialog *WareForm)
    {
        if (WareForm->objectName().isEmpty())
            WareForm->setObjectName(QString::fromUtf8("WareForm"));
        WareForm->resize(2600, 1700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WareForm->sizePolicy().hasHeightForWidth());
        WareForm->setSizePolicy(sizePolicy);
        WareForm->setSizeGripEnabled(true);
        frame = new QFrame(WareForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 270, 401, 1306));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
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
"background-color: rgb(85, 170, 255);\n"
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
"background-color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));

        retranslateUi(WareForm);

        QMetaObject::connectSlotsByName(WareForm);
    } // setupUi

    void retranslateUi(QDialog *WareForm)
    {
        WareForm->setWindowTitle(QCoreApplication::translate("WareForm", "Dialog", nullptr));
        wareForm->setText(QCoreApplication::translate("WareForm", "\345\272\223\345\255\230\346\212\245\350\241\250", nullptr));
        suggestion->setText(QCoreApplication::translate("WareForm", "\345\273\272\350\256\256", nullptr));
        profit->setText(QCoreApplication::translate("WareForm", "\346\224\266\347\233\212", nullptr));
        wareHouse->setText(QCoreApplication::translate("WareForm", "\344\273\223\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WareForm: public Ui_WareForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREFORM_H
