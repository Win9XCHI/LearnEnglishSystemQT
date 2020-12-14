#ifndef WARNINGFORM_H
#define WARNINGFORM_H

#include <QWidget>

namespace Ui {
class WarningForm;
}

class WarningForm : public QWidget
{
    Q_OBJECT

public:
    explicit WarningForm(QWidget *parent = nullptr);
    ~WarningForm();

private:
    Ui::WarningForm *ui;
};

#endif // WARNINGFORM_H
