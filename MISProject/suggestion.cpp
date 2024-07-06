#include "suggestion.h"
#include "ui_suggestion.h"

Suggestion::Suggestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Suggestion)
{
    ui->setupUi(this);
}

Suggestion::~Suggestion()
{
    delete ui;
}
