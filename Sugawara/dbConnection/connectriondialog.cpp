#include "connectriondialog.h"
#include "ui_connectriondialog.h"


ConnectrionDialog::ConnectrionDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectrionDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setText("C383U07\\SQLEXPRESS");
    ui->lineEdit_2->setText("sugawara");
}

ConnectrionDialog::~ConnectrionDialog()
{
    delete ui;
}

void ConnectrionDialog::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=" + ui->lineEdit->text() + ";DATABASE=" + ui->lineEdit_2->text() + ";");
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());
    msg = new QMessageBox();
    if (db.open()){
        msg->setText("Connection OK");
    }
    else {
        msg->setText("Dont Connection. ERROR" + QSqlError(db.lastError()).text());
    }
    msg->show();
}
