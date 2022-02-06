#ifndef EXPLORER_W_H
#define EXPLORER_W_H

#include <QDialog>

namespace Ui {
class Explorer_W;
}

class Explorer_W : public QDialog
{
    Q_OBJECT

public:
    explicit Explorer_W(QWidget *parent = nullptr);
    ~Explorer_W();

private:
    Ui::Explorer_W *ui;
};

#endif // EXPLORER_W_H
