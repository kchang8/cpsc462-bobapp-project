#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);

    //sets up the background to an image
    QPixmap bkgrnd("/Users/KailieC/Pictures/Saved Pictures/bobappBackground.png");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::on_comboBox_currentIndexChanged(int index)
{
    if(index == 1)
    {
        QApplication::exit();
    }
}

void AdminMenu::on_editInven_button_clicked()
{
    invWin = new InventoryWin(this);
    invWin->show();

}

void AdminMenu::on_editMenu_button_clicked()
{
    eMenu = new editMenu(this);
    eMenu->show();
}
