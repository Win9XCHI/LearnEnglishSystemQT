#include "warningform.h"
#include "ui_warningform.h"

WarningForm::WarningForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WarningForm)
{
    ui->setupUi(this);
}

WarningForm::~WarningForm()
{
    delete ui;
}
