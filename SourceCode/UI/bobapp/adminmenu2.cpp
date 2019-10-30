#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);

    QPixmap bkgrn("/Users/andrewlopez/cpsc462-bobapp-project/SourceCode/UI/designIMGs/bobappBackground.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::on_comboBox_currentIndexChanged(int index)
{
    if(index == 1)
        {
            hide();
        }
}


void AdminMenu::on_editMenu_clicked()
{
    emen = new editMenu(this);
    emen->show();

}
