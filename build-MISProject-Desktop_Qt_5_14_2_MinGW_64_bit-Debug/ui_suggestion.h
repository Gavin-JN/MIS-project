/********************************************************************************
** Form generated from reading UI file 'suggestion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTION_H
#define UI_SUGGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Suggestion
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *knowBt;
    QLabel *leaveNumberMost;
    QLabel *singleProfitMost;
    QLabel *saleMost;
    QLabel *label_4;
    QLabel *leaveMaxNumber;

    void setupUi(QDialog *Suggestion)
    {
        if (Suggestion->objectName().isEmpty())
            Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->resize(985, 523);
        frame = new QFrame(Suggestion);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 20, 921, 471));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 211, 61));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 180, 201, 51));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 280, 211, 51));
        knowBt = new QPushButton(frame);
        knowBt->setObjectName(QString::fromUtf8("knowBt"));
        knowBt->setGeometry(QRect(350, 400, 121, 41));
        leaveNumberMost = new QLabel(frame);
        leaveNumberMost->setObjectName(QString::fromUtf8("leaveNumberMost"));
        leaveNumberMost->setGeometry(QRect(240, 20, 201, 41));
        singleProfitMost = new QLabel(frame);
        singleProfitMost->setObjectName(QString::fromUtf8("singleProfitMost"));
        singleProfitMost->setGeometry(QRect(250, 90, 191, 41));
        saleMost = new QLabel(frame);
        saleMost->setObjectName(QString::fromUtf8("saleMost"));
        saleMost->setGeometry(QRect(230, 150, 221, 41));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 80, 91, 61));
        leaveMaxNumber = new QLabel(frame);
        leaveMaxNumber->setObjectName(QString::fromUtf8("leaveMaxNumber"));
        leaveMaxNumber->setGeometry(QRect(230, 90, 201, 41));

        retranslateUi(Suggestion);

        QMetaObject::connectSlotsByName(Suggestion);
    } // setupUi

    void retranslateUi(QDialog *Suggestion)
    {
        Suggestion->setWindowTitle(QCoreApplication::translate("Suggestion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Suggestion", "\347\233\256\345\211\215\344\273\223\345\272\223\345\206\205\345\211\251\344\275\231\351\207\217\346\234\200\345\244\232\347\232\204\345\225\206\345\223\201\344\270\272\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Suggestion", "\347\233\256\345\211\215\344\273\223\345\272\223\345\206\205\345\215\225\344\270\252\345\210\251\346\266\246\346\234\200\345\244\247\347\232\204\345\225\206\345\223\201\344\270\272\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Suggestion", "\347\233\256\345\211\215\344\273\223\345\272\223\345\206\205\351\224\200\345\224\256\346\234\200\345\245\275\347\232\204\345\225\206\345\223\201\344\270\272\357\274\232", nullptr));
        knowBt->setText(QCoreApplication::translate("Suggestion", "\347\241\256\350\256\244", nullptr));
        leaveNumberMost->setText(QString());
        singleProfitMost->setText(QString());
        saleMost->setText(QString());
        label_4->setText(QCoreApplication::translate("Suggestion", "\346\234\200\345\244\247\345\211\251\344\275\231\351\207\217\344\270\272\357\274\232", nullptr));
        leaveMaxNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Suggestion: public Ui_Suggestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTION_H
