#include "doneform.h"
#include "ui_doneform.h"

DoneForm::DoneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoneForm)
{
    ui->setupUi(this);
}

DoneForm::~DoneForm()
{
    delete ui;
}
