#include "editmenu.h"
#include "ui_editmenu.h"
#include <string>
#include <QDebug>

editMenu::editMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editMenu)
{
    ui->setupUi(this);
    QStringList headerLabels = {"Item Name", "Price"};
    ui->menuData->setHorizontalHeaderLabels(headerLabels);

    selectedRow = -1;

    readFile("Menu.csv");

}

editMenu::~editMenu()
{
    delete ui;
}

void editMenu::on_pushButton_clicked()
{
    QString invItem = ui->itemName->text().trimmed();

        if(invItem != "")
        {
            ui->menuData->insertRow(ui->menuData->rowCount());
            ui->menuData->setItem(ui->menuData->rowCount() - 1, 0, new QTableWidgetItem(invItem));

            ui->menuData->setItem(ui->menuData->rowCount() - 1, 1, new QTableWidgetItem(QString::number(ui->itemPrice->value())));
            //ui->menuData->setItem(ui->menuData->rowCount() - 1, 2, new QTableWidgetItem(QString::number(ui->priceBox->value())));
        }
        ui->itemName->clear();
        ui->itemPrice->setValue(0);
        //ui->priceBox->setValue(0);
}

void editMenu::on_menuData_cellClicked(int row, int column)
{
    selectedRow = row;
}

void editMenu::on_deleteButton_clicked()
{
    if(selectedRow == -1)
    {
        return;
    }
    ui->menuData->removeRow(selectedRow);
    selectedRow = -1;

}

void editMenu::closeEvent(QCloseEvent *event)
{
    writeFile("Menu.csv");
}

void editMenu::readFile(QString filename)
{
    QFile inFile(filename);
    inFile.open(QIODevice::ReadOnly);

    while(!inFile.atEnd())
    {
        QStringList inventory;
        QByteArray line = inFile.readLine();
        QList < QByteArray > row = line.split(',');

        inventory.append(row[0]);
        inventory.append(row[1]);
        //inventory.append(row[2]);

        ui->menuData->insertRow(ui->menuData->rowCount());
        ui->menuData->setItem(ui->menuData->rowCount() - 1, 0, new QTableWidgetItem(inventory[0]));

        ui->menuData->setItem(ui->menuData->rowCount() - 1, 1, new QTableWidgetItem(inventory[1]));
        //ui->menuData->setItem(ui->menuData->rowCount() - 1, 2, new QTableWidgetItem(inventory[2]));
    }
}

void editMenu::writeFile(QString filename)
{
    QFile outFile(filename);
    if(!outFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "Can't open file";
    }
    QTextStream outStream(&outFile);

    for(int i = 0; i < ui->menuData->rowCount(); i++)
    {
        outStream << ui->menuData->item(i, 0)->text() << ',' << ui->menuData->item(i, 1)->text() << ",\n";
    }

    outFile.close();
}

void editMenu::on_saveMenu_clicked()
{
    writeFile("Menu.csv");

}
