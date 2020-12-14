#ifndef SCHEDULEFORM_H
#define SCHEDULEFORM_H

#include <QWidget>
#include "projectdb.h"

namespace Ui {
class ScheduleForm;
}

class ScheduleForm : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleForm(QWidget *parent = nullptr);
    ~ScheduleForm();
    void SetDB(ProjectDB*);

private:
    Ui::ScheduleForm *ui;
    ProjectDB *DB;
};

#endif // SCHEDULEFORM_H
