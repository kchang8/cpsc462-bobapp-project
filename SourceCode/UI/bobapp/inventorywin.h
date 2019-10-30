#ifndef INVENTORYWIN_H
#define INVENTORYWIN_H

#include <QMainWindow>
#include <fstream>
#include <string>
#include <QFile>
#include <QList>
#include <QStringList>

namespace Ui {
class InventoryWin;
}

class InventoryWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit InventoryWin(QWidget *parent = nullptr);
    ~InventoryWin();

private slots:
    void on_pushButton_clicked();

    void on_invData_cellClicked(int row, int column);

    void on_deleteButton_clicked();

    void closeEvent(QCloseEvent *event);

    void readFile(QString filename);
    void writeFile(QString filename);

private:
    Ui::InventoryWin *ui;
    int selectedRow;
};

#endif // INVENTORYWIN_H
