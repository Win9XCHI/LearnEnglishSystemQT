#include "inputform.h"
#include "ui_inputform.h"

InputForm::InputForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputForm)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::on_pushButton_clicked() {
    emit sendData(ui->lineEdit->text());
}

void InputForm::SetDB(ProjectDB *DBMain) {
    DB = DBMain;
}
