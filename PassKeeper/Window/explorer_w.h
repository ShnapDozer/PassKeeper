#ifndef EXPLORER_W_H
#define EXPLORER_W_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class Explorer_W;
}

class Explorer_W : public QDialog
{
    Q_OBJECT

public:
    explicit Explorer_W(QWidget *parent = nullptr);
    ~Explorer_W();

signals:
    void signal_OpenW_Ok(QString Path);

public slots:
    void slot_SW_OpenExist();
    void slot_RunMain_W();

private slots:
    void on_Brows_Button_clicked();

    void on_PathLine_textChanged(const QString &arg1);

    void on_Open_Button_clicked();

private:
    QString filePath;
    Ui::Explorer_W *ui;
};

#endif // EXPLORER_W_H
