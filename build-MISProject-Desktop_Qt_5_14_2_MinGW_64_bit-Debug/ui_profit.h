/********************************************************************************
** Form generated from reading UI file 'profit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIT_H
#define UI_PROFIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Profit
{
public:
    QTableView *profitTable;

    void setupUi(QDialog *Profit)
    {
        if (Profit->objectName().isEmpty())
            Profit->setObjectName(QString::fromUtf8("Profit"));
        Profit->resize(948, 700);
        profitTable = new QTableView(Profit);
        profitTable->setObjectName(QString::fromUtf8("profitTable"));
        profitTable->setGeometry(QRect(30, -10, 881, 691));

        retranslateUi(Profit);

        QMetaObject::connectSlotsByName(Profit);
    } // setupUi

    void retranslateUi(QDialog *Profit)
    {
        Profit->setWindowTitle(QCoreApplication::translate("Profit", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profit: public Ui_Profit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIT_H
