#include "introwindow.h"
#include "ui_introwindow.h"

IntroWindow::IntroWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IntroWindow)
{

    //SETS THE BACKGROUND FOR MAIN WINDOW
    ui->setupUi(this);
    QPixmap bkgrn("C:/Users/admin/Desktop/introBkgrn.PNG");
    bkgrn = bkgrn.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette1;
    palette1.setBrush(QPalette::Background, bkgrn);
    this->setPalette(palette1);


}

IntroWindow::~IntroWindow()
{
    delete ui;
}


void IntroWindow::on_customerButton_clicked()
{
  hide();
  custLogin = new customerLogin(this);
  custLogin->show();

}

