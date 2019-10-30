#ifndef CUSTOMERMAINMENU_H
#define CUSTOMERMAINMENU_H

#include <QDialog>
#include "customerchoosestore.h"

namespace Ui {
class customerMainMenu;
}

class customerMainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit customerMainMenu(QWidget *parent = nullptr);
    ~customerMainMenu();

private slots:
    void on_pushButton_order_clicked();

    void on_pushButton_clicked();

private:
    Ui::customerMainMenu *ui;
    customerChooseStore *custChooseStore;

};

#endif // CUSTOMERMAINMENU_H


