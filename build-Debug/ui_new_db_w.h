/********************************************************************************
** Form generated from reading UI file 'new_db_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DB_W_H
#define UI_NEW_DB_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_New_DB_W
{
public:
    QListView *ColumnsNT;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *NameColumn;
    QLabel *label_4;
    QComboBox *TypeColumn;
    QFrame *line;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *CreateButton;
    QPushButton *DefaultButton;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLineEdit *BD_Name;
    QLineEdit *BD_Pass;
    QLineEdit *Tab_Name;

    void setupUi(QDialog *New_DB_W)
    {
        if (New_DB_W->objectName().isEmpty())
            New_DB_W->setObjectName(QString::fromUtf8("New_DB_W"));
        New_DB_W->resize(482, 233);
        ColumnsNT = new QListView(New_DB_W);
        ColumnsNT->setObjectName(QString::fromUtf8("ColumnsNT"));
        ColumnsNT->setGeometry(QRect(270, 6, 201, 171));
        layoutWidget = new QWidget(New_DB_W);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 190, 241, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(layoutWidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        horizontalLayout->addWidget(AddButton);

        DeleteButton = new QPushButton(layoutWidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        horizontalLayout->addWidget(DeleteButton);

        layoutWidget1 = new QWidget(New_DB_W);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 241, 71));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        NameColumn = new QLineEdit(layoutWidget1);
        NameColumn->setObjectName(QString::fromUtf8("NameColumn"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameColumn);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        TypeColumn = new QComboBox(layoutWidget1);
        TypeColumn->addItem(QString());
        TypeColumn->addItem(QString());
        TypeColumn->addItem(QString());
        TypeColumn->addItem(QString());
        TypeColumn->addItem(QString());
        TypeColumn->setObjectName(QString::fromUtf8("TypeColumn"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TypeColumn);

        line = new QFrame(New_DB_W);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(250, 0, 20, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(New_DB_W);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 190, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        CreateButton = new QPushButton(layoutWidget2);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));

        horizontalLayout_2->addWidget(CreateButton);

        DefaultButton = new QPushButton(layoutWidget2);
        DefaultButton->setObjectName(QString::fromUtf8("DefaultButton"));

        horizontalLayout_2->addWidget(DefaultButton);

        layoutWidget3 = new QWidget(New_DB_W);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 241, 101));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BD_Name = new QLineEdit(layoutWidget3);
        BD_Name->setObjectName(QString::fromUtf8("BD_Name"));

        verticalLayout->addWidget(BD_Name);

        BD_Pass = new QLineEdit(layoutWidget3);
        BD_Pass->setObjectName(QString::fromUtf8("BD_Pass"));

        verticalLayout->addWidget(BD_Pass);

        Tab_Name = new QLineEdit(layoutWidget3);
        Tab_Name->setObjectName(QString::fromUtf8("Tab_Name"));

        verticalLayout->addWidget(Tab_Name);


        retranslateUi(New_DB_W);

        QMetaObject::connectSlotsByName(New_DB_W);
    } // setupUi

    void retranslateUi(QDialog *New_DB_W)
    {
        New_DB_W->setWindowTitle(QCoreApplication::translate("New_DB_W", "New table", nullptr));
        AddButton->setText(QCoreApplication::translate("New_DB_W", "Add", nullptr));
        DeleteButton->setText(QCoreApplication::translate("New_DB_W", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("New_DB_W", "Column name:", nullptr));
        label_4->setText(QCoreApplication::translate("New_DB_W", "Column type:", nullptr));
        TypeColumn->setItemText(0, QCoreApplication::translate("New_DB_W", "INT", nullptr));
        TypeColumn->setItemText(1, QCoreApplication::translate("New_DB_W", "DATE", nullptr));
        TypeColumn->setItemText(2, QCoreApplication::translate("New_DB_W", "TEXT", nullptr));
        TypeColumn->setItemText(3, QCoreApplication::translate("New_DB_W", "COUNT", nullptr));
        TypeColumn->setItemText(4, QCoreApplication::translate("New_DB_W", "IMAGE", nullptr));

        CreateButton->setText(QCoreApplication::translate("New_DB_W", "Create", nullptr));
        DefaultButton->setText(QCoreApplication::translate("New_DB_W", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_DB_W: public Ui_New_DB_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DB_W_H
