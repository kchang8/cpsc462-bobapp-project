#ifndef CUSTOMERREVIEWORDER_H
#define CUSTOMERREVIEWORDER_H

#include <QDialog>
#include "custpaymentwin.h"

namespace Ui {
class customerReviewOrder;
}

class customerReviewOrder : public QDialog
{
    Q_OBJECT

public:
    explicit customerReviewOrder(QWidget *parent = nullptr);
    ~customerReviewOrder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::customerReviewOrder *ui;
     custPaymentWin *custPay;
};

#endif // CUSTOMERREVIEWORDER_H


