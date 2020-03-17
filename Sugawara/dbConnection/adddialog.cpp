#include "adddialog.h"
#include "ui_adddialog.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

addDialog::addDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("insert into product values (:name,:category)");
    query->bindValue(":name", ui->lineEdit->text());
    query->bindValue(":category", ui->lineEdit_2->text());
    query->exec();

    if(query->lastError().isValid())
    {
        QMessageBox *msg = new QMessageBox();
        msg->setText(query->lastError().text());
        msg->show();
    }

    close();
}
