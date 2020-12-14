#ifndef SETTINGFORM_H
#define SETTINGFORM_H

#include <QWidget>
#include "projectdb.h"

namespace Ui {
class SettingForm;
}

class SettingForm : public QWidget
{
    Q_OBJECT

public:
    explicit SettingForm(QWidget *parent = nullptr);
    ~SettingForm();
    void SetDB(ProjectDB*);

private:
    Ui::SettingForm *ui;
    ProjectDB *DB;
};

#endif // SETTINGFORM_H
