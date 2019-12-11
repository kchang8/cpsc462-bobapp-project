#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //sets up the background to an image
    QPixmap bkgrnd("/Users/KailieC/Pictures/Saved Pictures/bobappBackground.png");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_adminLogButton_clicked()
{

   //might add verification of inputs later
   QString storeID, adminID, password;
   storeID = ui->storeID_lineEdit->text();
   adminID = ui->adminID_lineEdit->text();
   password = ui->adminPW_lineEdit->text();

   if(storeID.isEmpty())
   {
       QMessageBox::warning(this, "Login Error", "Please enter a store ID");
   }
   else if(adminID.isEmpty())
   {
       QMessageBox::warning(this, "Login Error", "Please enter an admin ID");
   }
   else if(password.isEmpty())
   {
       QMessageBox::warning(this, "Login Error", "Incorrect password, try again");
   }
   else
   {
       hide(); //hides first window when button is clicked
       adminMenu = new AdminMenu(this); //constructs the admin menu window
       adminMenu->show(); //shows the  window
   }


}

//this function is for allowing the users to create a new customer account
void MainWindow::on_commandLinkButton_2_clicked()
{
    newAdmin = new NewAdminWin(this); //constructs the new admin window
    newAdmin->show(); //shows the window
}
