#ifndef CUSTOMERLOGIN_H
#define CUSTOMERLOGIN_H

#include <QMainWindow>
#include "customermainmenu.h"

namespace Ui {
class customerLogin;
}

class customerLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit customerLogin(QWidget *parent = nullptr);
    ~customerLogin();

private slots:


    void on_pushButton_custLogin_clicked();

private:
    Ui::customerLogin *ui;
    customerMainMenu *custMainMenu;


};

#endif // CUSTOMERLOGIN_H
