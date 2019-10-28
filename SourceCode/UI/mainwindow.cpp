#include "mainwindow.h"
#include "ui_mainwindow.h"

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
   //**might add verification of inputs later**

   hide(); //hides first window when button is clicked
   adminMenu = new AdminMenu(this); //constructs the admin menu window
   adminMenu->show(); //shows the  window
}

void MainWindow::on_commandLinkButton_2_clicked()
{
    hide(); //hides first window when button is clicked
    newAdmin = new NewAdminWin(this); //constructs the new admin window
    newAdmin->show(); //shows the window
}
