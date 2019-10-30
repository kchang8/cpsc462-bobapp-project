#include "customermainmenu.h"
#include "ui_customermainmenu.h"
#include "introwindow.h"
#include "customerchoosestore.h"

customerMainMenu::customerMainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerMainMenu)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/plain.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);

}

customerMainMenu::~customerMainMenu()
{
    delete ui;
}

void customerMainMenu::on_pushButton_order_clicked()
{
    hide();
    custChooseStore= new customerChooseStore(this);
    custChooseStore->show();

}

void customerMainMenu::on_pushButton_clicked()
{
    close();
}

