#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QWidget>
#include <QDialog>
#include "editmenu.h"
//#include "inventorywin.h"

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QWidget
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr);
    ~AdminMenu();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_editMenu_clicked();

private:
    Ui::AdminMenu *ui;
    editMenu *emen;

};

#endif // ADMINMENU_H
