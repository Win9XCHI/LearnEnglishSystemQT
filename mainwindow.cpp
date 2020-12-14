#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    DB = new ProjectDB("DB.db");
    DB->createConnection();

    Input = new InputForm();
    Schedule = new ScheduleForm();
    Setting = new SettingForm();
    Task = new TaskForm();
    Warning = new WarningForm();

    connect(Input, SIGNAL(sendData(User)), this, SLOT(recieveInput(User)));
    connect(Schedule, SIGNAL(sendData(QString)), this, SLOT(recieveSchedule(QString)));
    connect(Setting, SIGNAL(sendData(User)), this, SLOT(recieveSetting(User)));
    connect(Task, SIGNAL(sendData(QString)), this, SLOT(recieveTask(QString)));

}

MainWindow::~MainWindow() {
    delete Input;
    delete Schedule;
    delete Setting;
    delete Task;
    delete Warning;
    delete DB;
    delete ui;
}


void MainWindow::recieveInput(User object) {

    if (object.GetId() != 0) {
        ObjectUser = object;
        ui->label_8->setText("User: " + object.GetName());
        ui->label_14->setText("");
        Input->hide();

        //statusBar

    } else {
        ui->label_14->setText("Invalid login");
    }
}

void MainWindow::recieveSchedule(QString str) {

}
void MainWindow::recieveSetting(User object) {

}
void MainWindow::recieveTask(QString str) {

}

void MainWindow::on_pushButton_7_clicked() {
    Input->show();
    Input->SetDB(DB);
}

void MainWindow::on_pushButton_9_clicked() {
    Setting->show();
    Setting->SetDB(DB);
    //Setting->SetUser(User_id);
}

void MainWindow::on_pushButton_8_clicked() {
    Schedule->show();
    Schedule->SetDB(DB);
    //Schedule->SetUser(User_id);
}
