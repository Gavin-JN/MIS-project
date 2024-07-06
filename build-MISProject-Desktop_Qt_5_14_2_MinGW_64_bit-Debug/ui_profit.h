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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Profit
{
public:
    QTableWidget *profitTable;

    void setupUi(QDialog *Profit)
    {
        if (Profit->objectName().isEmpty())
            Profit->setObjectName(QString::fromUtf8("Profit"));
        Profit->resize(1200, 700);
        profitTable = new QTableWidget(Profit);
        if (profitTable->columnCount() < 4)
            profitTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        profitTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        profitTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        profitTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        profitTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        profitTable->setObjectName(QString::fromUtf8("profitTable"));
        profitTable->setGeometry(QRect(10, 10, 1181, 681));

        retranslateUi(Profit);

        QMetaObject::connectSlotsByName(Profit);
    } // setupUi

    void retranslateUi(QDialog *Profit)
    {
        Profit->setWindowTitle(QCoreApplication::translate("Profit", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = profitTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Profit", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = profitTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Profit", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = profitTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Profit", "\350\277\233\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = profitTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Profit", "\346\224\266\347\233\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profit: public Ui_Profit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIT_H
