/********************************************************************************
** Form generated from reading UI file 'catcherror.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATCHERROR_H
#define UI_CATCHERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CatchError
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *errorReaeon;
    QPushButton *know;

    void setupUi(QDialog *CatchError)
    {
        if (CatchError->objectName().isEmpty())
            CatchError->setObjectName(QString::fromUtf8("CatchError"));
        CatchError->resize(546, 464);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        CatchError->setFont(font);
        frame = new QFrame(CatchError);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 60, 431, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 141, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        errorReaeon = new QLabel(frame);
        errorReaeon->setObjectName(QString::fromUtf8("errorReaeon"));
        errorReaeon->setGeometry(QRect(20, 70, 391, 101));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        errorReaeon->setFont(font2);
        know = new QPushButton(frame);
        know->setObjectName(QString::fromUtf8("know"));
        know->setGeometry(QRect(160, 190, 101, 31));

        retranslateUi(CatchError);

        QMetaObject::connectSlotsByName(CatchError);
    } // setupUi

    void retranslateUi(QDialog *CatchError)
    {
        CatchError->setWindowTitle(QCoreApplication::translate("CatchError", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CatchError", "\351\224\231\350\257\257\357\274\201", nullptr));
        errorReaeon->setText(QCoreApplication::translate("CatchError", "TextLabel", nullptr));
        know->setText(QCoreApplication::translate("CatchError", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CatchError: public Ui_CatchError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATCHERROR_H
