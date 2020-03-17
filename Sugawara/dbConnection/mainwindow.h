#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connectriondialog.h"
#include "ui_connectriondialog.h"
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include "adddialog.h"
#include "ui_adddialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    ConnectrionDialog *dlg;
    addDialog *adlg;


private slots:
    void on_actionConnections_BD_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *tmodel;
    QSqlQueryModel *qmodel;
};
#endif // MAINWINDOW_H
