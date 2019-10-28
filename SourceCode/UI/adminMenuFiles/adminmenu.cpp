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
