#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QWidget>

namespace Ui {
class addDialog;
}

class addDialog : public QWidget
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent = nullptr);
    ~addDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addDialog *ui;
};

#endif // ADDDIALOG_H
