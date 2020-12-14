#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "projectdb.h"

#include "inputform.h"
#include "scheduleform.h"
#include "settingform.h"
#include "taskform.h"
#include "warningform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void recieveInput(User);
    void recieveSchedule(QString str);
    void recieveSetting(User);
    void recieveTask(QString str);

private slots:

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
    User ObjectUser;
    ProjectDB *DB;

    InputForm *Input;
    ScheduleForm *Schedule;
    SettingForm *Setting;
    TaskForm *Task;
    WarningForm *Warning;
};
#endif // MAINWINDOW_H
