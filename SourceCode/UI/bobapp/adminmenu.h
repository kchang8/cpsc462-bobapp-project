#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>
#include "inventorywin.h"

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr);
    ~AdminMenu();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_editInven_button_clicked();

private:
    Ui::AdminMenu *ui;
    InventoryWin *invWin;
};

#endif // ADMINMENU_H
