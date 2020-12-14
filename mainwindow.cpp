#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    User_id = -1;
    DB = new ProjectDB("DB_English");
    DB->createConnection();

    Input = new InputForm();
    Schedule = new ScheduleForm();
    Setting = new SettingForm();
    Task = new TaskForm();
    Warning = new WarningForm();

    connect(Input, SIGNAL(sendData(QString)), this, SLOT(recieveInput(QString)));
    connect(Schedule, SIGNAL(sendData(QString)), this, SLOT(recieveSchedule(QString)));
    connect(Setting, SIGNAL(sendData(QString)), this, SLOT(recieveSetting(QString)));
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


void MainWindow::recieveInput(QString str) {

    if (str != "") {
        User_id = str.toInt();
    }
}

void MainWindow::recieveSchedule(QString str) {

}
void MainWindow::recieveSetting(QString str) {

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
