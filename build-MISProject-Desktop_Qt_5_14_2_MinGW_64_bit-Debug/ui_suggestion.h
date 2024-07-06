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

QT_BEGIN_NAMESPACE

class Ui_Suggestion
{
public:

    void setupUi(QDialog *Suggestion)
    {
        if (Suggestion->objectName().isEmpty())
            Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->resize(1200, 700);

        retranslateUi(Suggestion);

        QMetaObject::connectSlotsByName(Suggestion);
    } // setupUi

    void retranslateUi(QDialog *Suggestion)
    {
        Suggestion->setWindowTitle(QCoreApplication::translate("Suggestion", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Suggestion: public Ui_Suggestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTION_H
