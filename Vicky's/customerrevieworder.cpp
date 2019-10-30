#include "customerrevieworder.h"
#include "ui_customerrevieworder.h"

customerReviewOrder::customerReviewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerReviewOrder)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/custOrderBeforePaymentBKGRN.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);
}

customerReviewOrder::~customerReviewOrder()
{
    delete ui;
}

void customerReviewOrder::on_pushButton_clicked()
{
    hide();
    custPay = new custPaymentWin(this);
    custPay-> show();
}

