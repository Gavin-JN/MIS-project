#ifndef GETOUT_H
#define GETOUT_H

#include <QDialog>

namespace Ui {
class GetOut;
}

class GetOut : public QDialog
{
    Q_OBJECT

public:
    explicit GetOut(QWidget *parent = nullptr);
    ~GetOut();

private slots:
    void on_cencleOut_clicked();

    void on_Out_clicked();
    int ifExitOr(QString str);

private:
    Ui::GetOut *ui;
};

#endif // GETOUT_H
