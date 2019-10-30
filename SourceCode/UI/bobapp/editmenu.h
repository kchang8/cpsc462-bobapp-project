#ifndef EDITMENU_H
#define EDITMENU_H

#include <QMainWindow>
#include <fstream>
#include <QFile>
#include <QList>
#include <QStringList>
#include <QMainWindow>


namespace Ui {
class editMenu;
}

class editMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit editMenu(QWidget *parent = nullptr);
    ~editMenu();

private slots:
    void on_pushButton_clicked();

    void on_menuData_cellClicked(int row, int column);

    void on_deleteButton_clicked();

    void closeEvent(QCloseEvent *event);

    void readFile(QString filename);
    void writeFile(QString filename);

    void on_saveMenu_clicked();

private:
    Ui::editMenu *ui;
    int selectedRow;
};

#endif // EDITMENU_H
