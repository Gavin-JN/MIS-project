#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>

namespace Ui {
class SignIn;
}

void initializeDatabase();

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

signals:
    void loginSuccessful(QString userName);

private slots:
    void on_signIn_clicked();

    void on_signUp_clicked();

private:
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
