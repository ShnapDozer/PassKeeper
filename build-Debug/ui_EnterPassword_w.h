/********************************************************************************
** Form generated from reading UI file 'EnterPassword_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERPASSWORD_W_H
#define UI_ENTERPASSWORD_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterPassword_w
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *PassEnter;
    QHBoxLayout *horizontalLayout;
    QPushButton *Ok;

    void setupUi(QDialog *EnterPassword_w)
    {
        if (EnterPassword_w->objectName().isEmpty())
            EnterPassword_w->setObjectName(QString::fromUtf8("EnterPassword_w"));
        EnterPassword_w->resize(400, 124);
        verticalLayoutWidget = new QWidget(EnterPassword_w);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 361, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PassEnter = new QLineEdit(verticalLayoutWidget);
        PassEnter->setObjectName(QString::fromUtf8("PassEnter"));

        verticalLayout->addWidget(PassEnter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Ok = new QPushButton(verticalLayoutWidget);
        Ok->setObjectName(QString::fromUtf8("Ok"));

        horizontalLayout->addWidget(Ok);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(EnterPassword_w);

        QMetaObject::connectSlotsByName(EnterPassword_w);
    } // setupUi

    void retranslateUi(QDialog *EnterPassword_w)
    {
        EnterPassword_w->setWindowTitle(QCoreApplication::translate("EnterPassword_w", "Dialog", nullptr));
        Ok->setText(QCoreApplication::translate("EnterPassword_w", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterPassword_w: public Ui_EnterPassword_w {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERPASSWORD_W_H
