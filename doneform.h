#ifndef DONEFORM_H
#define DONEFORM_H

#include <QWidget>

namespace Ui {
class DoneForm;
}

class DoneForm : public QWidget
{
    Q_OBJECT

public:
    explicit DoneForm(QWidget *parent = nullptr);
    ~DoneForm();

private:
    Ui::DoneForm *ui;
};

#endif // DONEFORM_H
