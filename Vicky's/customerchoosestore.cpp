#include "customerchoosestore.h"
#include "ui_customerchoosestore.h"
#include <QPixmap>

customerChooseStore::customerChooseStore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerChooseStore)
{
    //Background
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/bobappBackground.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);

  ui->comboBox->addItem("Sharetea, Fullerton, CA");
  ui->comboBox->addItem("Ding Tea, Fullerton  , CA");

}

customerChooseStore::~customerChooseStore()
{
    delete ui;
}

void customerChooseStore::on_pushButton_clicked()
{
    hide();
    cOrder = new custOrder(this);
    cOrder -> show();


}

