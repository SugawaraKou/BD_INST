/********************************************************************************
** Form generated from reading UI file 'connectriondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTRIONDIALOG_H
#define UI_CONNECTRIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectrionDialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *ConnectrionDialog)
    {
        if (ConnectrionDialog->objectName().isEmpty())
            ConnectrionDialog->setObjectName(QString::fromUtf8("ConnectrionDialog"));
        ConnectrionDialog->resize(373, 234);
        lineEdit = new QLineEdit(ConnectrionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 161, 20));
        lineEdit_2 = new QLineEdit(ConnectrionDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 60, 161, 20));
        lineEdit_3 = new QLineEdit(ConnectrionDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 90, 161, 20));
        lineEdit_4 = new QLineEdit(ConnectrionDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 120, 161, 20));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ConnectrionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 160, 191, 61));
        label = new QLabel(ConnectrionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 91, 16));
        label_2 = new QLabel(ConnectrionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(ConnectrionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 47, 13));
        label_4 = new QLabel(ConnectrionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 47, 13));

        retranslateUi(ConnectrionDialog);

        QMetaObject::connectSlotsByName(ConnectrionDialog);
    } // setupUi

    void retranslateUi(QWidget *ConnectrionDialog)
    {
        ConnectrionDialog->setWindowTitle(QApplication::translate("ConnectrionDialog", "Form", nullptr));
        lineEdit_4->setText(QString());
        pushButton->setText(QApplication::translate("ConnectrionDialog", "Cinnect", nullptr));
        label->setText(QApplication::translate("ConnectrionDialog", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label_2->setText(QApplication::translate("ConnectrionDialog", "\320\230\320\274\321\217 \320\221\320\224", nullptr));
        label_3->setText(QApplication::translate("ConnectrionDialog", "Login", nullptr));
        label_4->setText(QApplication::translate("ConnectrionDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectrionDialog: public Ui_ConnectrionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTRIONDIALOG_H
