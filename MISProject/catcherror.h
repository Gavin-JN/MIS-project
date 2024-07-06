#ifndef CATCHERROR_H
#define CATCHERROR_H

#include <QDialog>

namespace Ui {
class CatchError;
}

class CatchError : public QDialog
{
    Q_OBJECT

public:
    explicit CatchError(QWidget *parent = nullptr);
    ~CatchError();
    void setErrorReason(QString reason);

private slots:
    void on_know_clicked();

public:
    Ui::CatchError *ui;
};

#endif // CATCHERROR_H
