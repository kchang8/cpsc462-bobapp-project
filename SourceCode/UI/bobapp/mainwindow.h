#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adminmenu.h"
#include "newadminwin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_adminLogButton_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::MainWindow *ui;
    AdminMenu *adminMenu;
    NewAdminWin *newAdmin;
};
#endif // MAINWINDOW_H
