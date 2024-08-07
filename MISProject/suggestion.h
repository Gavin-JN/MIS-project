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
    void on_knowBt_clicked();

private:
    Ui::Suggestion *ui;

};

#endif // SUGGESTION_H
