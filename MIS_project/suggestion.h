#ifndef SUGGESTION_H
#define SUGGESTION_H

#include <QDialog>

namespace Ui {
class Suggestion;
}

class Suggestion : public QDialog
{
    Q_OBJECT

public:
    explicit Suggestion(QWidget *parent = nullptr);
    ~Suggestion();

private slots:
    void on_wareHouse_clicked();

    void on_profit_clicked();

    void on_wareForm_clicked();

public:
    Ui::Suggestion *ui;
};

#endif // SUGGESTION_H
