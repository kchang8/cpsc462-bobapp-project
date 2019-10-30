#include "custpaymentwin.h"
#include "ui_custpaymentwin.h"

custPaymentWin::custPaymentWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::custPaymentWin)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/customerOrderbkgrn.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);

}

custPaymentWin::~custPaymentWin()
{
    delete ui;
}

void custPaymentWin::on_pushButton_clicked()
{
    hide();
    finalOrder = new finalOrderwin(this);
    finalOrder->show();

}
