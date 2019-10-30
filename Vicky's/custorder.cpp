#include "custorder.h"
#include "ui_custorder.h"
#include <QDebug>
#include "customerrevieworder.h"

custOrder::custOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::custOrder)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/customerOrderbkgrn.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);



}

custOrder::~custOrder()
{
    delete ui;
}


void custOrder::on_menuTable_cellClicked(int row, int column)
{
    selectedRow=row;
}

void custOrder::on_pushButton_clicked()
{

    if (selectedRow==-1)
    {
        return;
    }

}

void custOrder::on_pushButton_2_clicked()
{
    hide();
    custReview = new customerReviewOrder(this);
    custReview->show();
}

