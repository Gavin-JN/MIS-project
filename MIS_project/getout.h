#ifndef GETOUT_H
#define GETOUT_H

#include <QDialog>

namespace Ui {
class getOut;
}

class getOut : public QDialog
{
    Q_OBJECT

public:
    explicit getOut(QWidget *parent = nullptr);
    ~getOut();
    int ifExit (QString name_out);

private slots:
    void on_get_out_clicked();

    void on_cencle_out_clicked();

private:
    Ui::getOut *ui;
};

#endif // GETOUT_H
