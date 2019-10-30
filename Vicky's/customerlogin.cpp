#include "customerlogin.h"
#include "ui_customerlogin.h"
#include "customermainmenu.h"
#include <QMessageBox>

customerLogin::customerLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::customerLogin)
{
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/bobappBackground.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);

    QPixmap bobappLOGO("C:/Users/admin/Desktop/bobappLOGO.PNG");
    bobappLOGO = bobappLOGO.scaled(this->size(), Qt::IgnoreAspectRatio);
 }

customerLogin::~customerLogin()
{
    delete ui;
}



void customerLogin::on_pushButton_custLogin_clicked()
{
    QString email = ui -> lineEdit_email -> text();
    QString password = ui -> lineEdit_password -> text();

    if(email == "t" && password == "t")
    {
     hide();
     custMainMenu = new customerMainMenu(this);
     custMainMenu->show();

    }
    else
    {
        QMessageBox::about(this, "my", "Not working");
    }
}

