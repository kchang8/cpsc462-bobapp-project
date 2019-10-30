#include "newadminwin.h"
#include "ui_newadminwin.h"

NewAdminWin::NewAdminWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewAdminWin)
{
    ui->setupUi(this);

    //sets up the background to an image
    QPixmap bkgrnd("/Users/KailieC/Pictures/Saved Pictures/bobappBackground.png");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);
}

NewAdminWin::~NewAdminWin()
{
    delete ui;
}
