#include "newadminwin.h"
#include "ui_newadminwin.h"
#include <QMessageBox>

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

//allows a new admin to create a new account
void NewAdminWin::on_AccountFactoryButton_clicked()
{
    QString aName, aEmail, storeName, storeAdr, newPass;
    aName = ui->adminName_lineEdit->text();
    aEmail = ui->adminEmail_lineEdit->text();
    storeName = ui->storeName_lineEdit->text();
    storeAdr = ui->storeAdr_lineEdit->text();
    newPass = ui->newPass_lineEdit->text();

    if(aName.isEmpty())
    {
        QMessageBox::warning(this, "Entry Error", "Please enter your name");
    }
    else if(aEmail.isEmpty())
    {
        QMessageBox::warning(this, "Entry Error", "Please enter your admin email");
    }
    else if(storeName.isEmpty())
    {
        QMessageBox::warning(this, "Entry Error", "Please enter your store name");
    }
    else if(storeAdr.isEmpty())
    {
        QMessageBox::warning(this, "Entry Error", "Please provide the store address");
    }
    else if(newPass.isEmpty())
    {
        QMessageBox::warning(this, "Entry Error", "Please provide a password");
    }
    else
    {
          hide(); //hides the window
    }

}
