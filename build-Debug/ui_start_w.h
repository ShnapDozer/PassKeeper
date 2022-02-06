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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Start_W
{
public:
    QPushButton *Open_button;
    QFrame *line;
    QLineEdit *NameNewDB_TexLine;
    QPushButton *Create_Button;
    QLineEdit *PassNewDB_TexLine;
    QLineEdit *Path_line;
    QPushButton *Brows_Button;

    void setupUi(QDialog *Start_W)
    {
        if (Start_W->objectName().isEmpty())
            Start_W->setObjectName(QString::fromUtf8("Start_W"));
        Start_W->resize(294, 361);
        Open_button = new QPushButton(Start_W);
        Open_button->setObjectName(QString::fromUtf8("Open_button"));
        Open_button->setGeometry(QRect(10, 180, 272, 40));
        line = new QFrame(Start_W);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 219, 371, 31));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        NameNewDB_TexLine = new QLineEdit(Start_W);
        NameNewDB_TexLine->setObjectName(QString::fromUtf8("NameNewDB_TexLine"));
        NameNewDB_TexLine->setGeometry(QRect(12, 241, 270, 30));
        Create_Button = new QPushButton(Start_W);
        Create_Button->setObjectName(QString::fromUtf8("Create_Button"));
        Create_Button->setEnabled(true);
        Create_Button->setGeometry(QRect(11, 311, 272, 40));
        PassNewDB_TexLine = new QLineEdit(Start_W);
        PassNewDB_TexLine->setObjectName(QString::fromUtf8("PassNewDB_TexLine"));
        PassNewDB_TexLine->setGeometry(QRect(12, 276, 270, 30));
        Path_line = new QLineEdit(Start_W);
        Path_line->setObjectName(QString::fromUtf8("Path_line"));
        Path_line->setGeometry(QRect(10, 145, 241, 28));
        Brows_Button = new QPushButton(Start_W);
        Brows_Button->setObjectName(QString::fromUtf8("Brows_Button"));
        Brows_Button->setGeometry(QRect(252, 145, 31, 28));

        retranslateUi(Start_W);

        QMetaObject::connectSlotsByName(Start_W);
    } // setupUi

    void retranslateUi(QDialog *Start_W)
    {
        Start_W->setWindowTitle(QCoreApplication::translate("Start_W", "Dialog", nullptr));
        Open_button->setText(QCoreApplication::translate("Start_W", "Open exist....", nullptr));
        Create_Button->setText(QCoreApplication::translate("Start_W", "Create new DB ", nullptr));
        Brows_Button->setText(QCoreApplication::translate("Start_W", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start_W: public Ui_Start_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_W_H
