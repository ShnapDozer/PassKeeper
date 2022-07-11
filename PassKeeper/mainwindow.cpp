#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

//"C:/Users/HellNout/Downloads/QtProjects/PassKeeper/build-Debug/Test.db", "132435wer"
//qDebug() << QSqlDatabase::drivers();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      WinClipBoard(QApplication::clipboard())
{
    ui->setupUi(this);
    ui->Seach_line->setPlaceholderText(QString("Search..."));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QAbstractItemModel* MainWindow::getModel()
{
    return ui->MainTable->model();
}

void MainWindow::updateTabBar(std::vector<QString> Names)
{
    ui->TabBar->clear();
    for(int i = 0; i < Names.size(); ++i)
    {
        ui->TabBar->addTab(new QWidget(), Names[i]);
    }
}

int MainWindow::getID(QModelIndex index)
{
    auto model = getModel();
    return model->data(model->index(index.row(), 0)).toInt();
}

void MainWindow::slot_BDisCreate(EditableSqlModel *Model)
{
    this->show();

    ui->MainTable->setModel(Model);
    ui->MainTable->setColumnHidden(0, true);
    updateTabBar(Model->getTabNames());
    ui->MainTable->show();

    EditModel = Model;

    emit signal_RunMain_W();
}

void MainWindow::slot_TabisCreate()
{
    updateTabBar(EditModel->getTabNames());
}

void MainWindow::on_AddPass_Button_clicked()
{
    getModel()->insertRow(0);
}

void MainWindow::on_AddTab_Button_clicked()
{
    emit signal_MW_CreateNewTab("Name", "sefgwfw");
}


void MainWindow::on_DelR_Button_clicked()
{
    if(PressIndex.isValid()){
        qDebug()<< getModel()->removeRow(PressID);
    }
}


void MainWindow::on_MainTable_pressed(const QModelIndex &index)
{
    PressIndex = index;
    PressID = getID(index);
    WinClipBoard->setText((getModel()->data(index)).toString(), QClipboard::Clipboard);
}


void MainWindow::on_Seach_line_textChanged(const QString &arg1)
{
    EditModel->Search(arg1, 1, true );
}


void MainWindow::on_TabBar_currentChanged(int index)
{
    qDebug()<<index;
    if(index >= 0)
        EditModel->SelectTable(index);
}

