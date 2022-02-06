/********************************************************************************
** Form generated from reading UI file 'explorer_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORER_W_H
#define UI_EXPLORER_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Explorer_W
{
public:
    QLineEdit *PathLine;
    QPushButton *Brows_Button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Open_Button;
    QPushButton *Cancel_Button;

    void setupUi(QDialog *Explorer_W)
    {
        if (Explorer_W->objectName().isEmpty())
            Explorer_W->setObjectName(QString::fromUtf8("Explorer_W"));
        Explorer_W->resize(400, 90);
        PathLine = new QLineEdit(Explorer_W);
        PathLine->setObjectName(QString::fromUtf8("PathLine"));
        PathLine->setGeometry(QRect(10, 10, 301, 28));
        Brows_Button = new QPushButton(Explorer_W);
        Brows_Button->setObjectName(QString::fromUtf8("Brows_Button"));
        Brows_Button->setGeometry(QRect(310, 10, 83, 29));
        widget = new QWidget(Explorer_W);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(223, 50, 169, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Open_Button = new QPushButton(widget);
        Open_Button->setObjectName(QString::fromUtf8("Open_Button"));

        horizontalLayout->addWidget(Open_Button);

        Cancel_Button = new QPushButton(widget);
        Cancel_Button->setObjectName(QString::fromUtf8("Cancel_Button"));

        horizontalLayout->addWidget(Cancel_Button);


        retranslateUi(Explorer_W);

        QMetaObject::connectSlotsByName(Explorer_W);
    } // setupUi

    void retranslateUi(QDialog *Explorer_W)
    {
        Explorer_W->setWindowTitle(QCoreApplication::translate("Explorer_W", "Dialog", nullptr));
        Brows_Button->setText(QCoreApplication::translate("Explorer_W", "Brows...", nullptr));
        Open_Button->setText(QCoreApplication::translate("Explorer_W", "Open", nullptr));
        Cancel_Button->setText(QCoreApplication::translate("Explorer_W", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Explorer_W: public Ui_Explorer_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORER_W_H
