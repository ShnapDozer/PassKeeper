/********************************************************************************
** Form generated from reading UI file 'start_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_W_H
#define UI_START_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Start_W
{
public:
    QPushButton *Open_button;
    QPushButton *Create_Button;

    void setupUi(QDialog *Start_W)
    {
        if (Start_W->objectName().isEmpty())
            Start_W->setObjectName(QString::fromUtf8("Start_W"));
        Start_W->resize(294, 228);
        Open_button = new QPushButton(Start_W);
        Open_button->setObjectName(QString::fromUtf8("Open_button"));
        Open_button->setGeometry(QRect(8, 14, 131, 201));
        Create_Button = new QPushButton(Start_W);
        Create_Button->setObjectName(QString::fromUtf8("Create_Button"));
        Create_Button->setEnabled(true);
        Create_Button->setGeometry(QRect(148, 14, 131, 201));

        retranslateUi(Start_W);

        QMetaObject::connectSlotsByName(Start_W);
    } // setupUi

    void retranslateUi(QDialog *Start_W)
    {
        Start_W->setWindowTitle(QCoreApplication::translate("Start_W", "Dialog", nullptr));
        Open_button->setText(QCoreApplication::translate("Start_W", "Open exist....", nullptr));
        Create_Button->setText(QCoreApplication::translate("Start_W", "Create new DB ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start_W: public Ui_Start_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_W_H
