#ifndef CUSTPAYMENTWIN_H
#define CUSTPAYMENTWIN_H

#include <QDialog>

namespace Ui {
class custPaymentWin;
}

class custPaymentWin : public QDialog
{
    Q_OBJECT

public:
    explicit custPaymentWin(QWidget *parent = nullptr);
    ~custPaymentWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::custPaymentWin *ui;
};

#endif // CUSTPAYMENTWIN_H

