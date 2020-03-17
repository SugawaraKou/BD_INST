#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionConnections_BD_triggered()
{
    dlg = new ConnectrionDialog();
    dlg->show();

}

void MainWindow::on_pushButton_clicked()
{
    tmodel = new QSqlTableModel();
    tmodel->setTable("product");
    tmodel->select();
    ui->tableView->setModel(tmodel);

    qmodel = new QSqlQueryModel();
    qmodel->setQuery("select * from sugawara");
    ui->tableView_2->setModel(qmodel);
}

void MainWindow::on_pushButton_2_clicked()
{
    adlg = new addDialog();
    adlg->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    qmodel = new QSqlQueryModel();
    qmodel->setQuery("delete from product where ID = " + ui->spinBox->text());
    ui->tableView_2->setModel(qmodel);
}
