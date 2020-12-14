#ifndef INPUTFORM_H
#define INPUTFORM_H

#include <QWidget>
#include "projectdb.h"

namespace Ui {
class InputForm;
}

class InputForm : public QWidget
{
    Q_OBJECT

public:
    explicit InputForm(QWidget *parent = nullptr);
    ~InputForm();
    void SetDB(ProjectDB*);

signals:
    void sendData(User);

private:
    Ui::InputForm *ui;
    ProjectDB *DB;

private slots:
    void on_pushButton_clicked();
};

#endif // INPUTFORM_H
