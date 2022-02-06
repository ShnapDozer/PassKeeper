/********************************************************************************
** Form generated from reading UI file 'passwrite_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWRITE_W_H
#define UI_PASSWRITE_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PassWrite_W
{
public:
    QDialogButtonBox *ButtonBox;
    QLineEdit *Pass_lineEdit;
    QLabel *label;

    void setupUi(QDialog *PassWrite_W)
    {
        if (PassWrite_W->objectName().isEmpty())
            PassWrite_W->setObjectName(QString::fromUtf8("PassWrite_W"));
        PassWrite_W->resize(400, 124);
        ButtonBox = new QDialogButtonBox(PassWrite_W);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(20, 80, 361, 32));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Pass_lineEdit = new QLineEdit(PassWrite_W);
        Pass_lineEdit->setObjectName(QString::fromUtf8("Pass_lineEdit"));
        Pass_lineEdit->setGeometry(QRect(20, 40, 361, 28));
        label = new QLabel(PassWrite_W);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 221, 20));

        retranslateUi(PassWrite_W);
        QObject::connect(ButtonBox, &QDialogButtonBox::accepted, PassWrite_W, qOverload<>(&QDialog::accept));
        QObject::connect(ButtonBox, &QDialogButtonBox::rejected, PassWrite_W, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PassWrite_W);
    } // setupUi

    void retranslateUi(QDialog *PassWrite_W)
    {
        PassWrite_W->setWindowTitle(QCoreApplication::translate("PassWrite_W", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PassWrite_W", "Enter password for this database:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PassWrite_W: public Ui_PassWrite_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWRITE_W_H
