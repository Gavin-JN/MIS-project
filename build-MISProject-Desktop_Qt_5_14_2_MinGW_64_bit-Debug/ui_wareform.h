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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_WareForm
{
public:
    QTableView *wareTable;

    void setupUi(QDialog *WareForm)
    {
        if (WareForm->objectName().isEmpty())
            WareForm->setObjectName(QString::fromUtf8("WareForm"));
        WareForm->resize(993, 714);
        wareTable = new QTableView(WareForm);
        wareTable->setObjectName(QString::fromUtf8("wareTable"));
        wareTable->setGeometry(QRect(80, 20, 841, 671));

        retranslateUi(WareForm);

        QMetaObject::connectSlotsByName(WareForm);
    } // setupUi

    void retranslateUi(QDialog *WareForm)
    {
        WareForm->setWindowTitle(QCoreApplication::translate("WareForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WareForm: public Ui_WareForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREFORM_H
