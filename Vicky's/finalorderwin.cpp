#include "finalorderwin.h"
#include "ui_finalorderwin.h"
#include "customermainmenu.h"

finalOrderwin::finalOrderwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finalOrderwin)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/customerOrderbkgrn.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);

}

finalOrderwin::~finalOrderwin()
{
    delete ui;
}
