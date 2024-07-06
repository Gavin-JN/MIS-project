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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WareForm
{
public:
    QTableWidget *wareTable;

    void setupUi(QDialog *WareForm)
    {
        if (WareForm->objectName().isEmpty())
            WareForm->setObjectName(QString::fromUtf8("WareForm"));
        WareForm->resize(1200, 700);
        wareTable = new QTableWidget(WareForm);
        if (wareTable->columnCount() < 4)
            wareTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        wareTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        wareTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        wareTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        wareTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        wareTable->setObjectName(QString::fromUtf8("wareTable"));
        wareTable->setGeometry(QRect(10, 10, 731, 681));

        retranslateUi(WareForm);

        QMetaObject::connectSlotsByName(WareForm);
    } // setupUi

    void retranslateUi(QDialog *WareForm)
    {
        WareForm->setWindowTitle(QCoreApplication::translate("WareForm", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = wareTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("WareForm", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = wareTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("WareForm", "\345\207\272/\345\205\245\345\272\223", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = wareTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("WareForm", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = wareTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("WareForm", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WareForm: public Ui_WareForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREFORM_H
