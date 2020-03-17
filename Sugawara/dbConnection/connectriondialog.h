#ifndef CONNECTRIONDIALOG_H
#define CONNECTRIONDIALOG_H
#include <QtSql>
#include <QWidget>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class ConnectrionDialog;
}

class ConnectrionDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectrionDialog(QWidget *parent = nullptr);
    ~ConnectrionDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ConnectrionDialog *ui;

    QSqlDatabase db;

    QMessageBox *msg;

};

#endif // CONNECTRIONDIALOG_H
