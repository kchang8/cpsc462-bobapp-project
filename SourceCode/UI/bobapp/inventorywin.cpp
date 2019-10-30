#include "inventorywin.h"
#include "ui_inventorywin.h"
#include <string>
#include <QDebug>

InventoryWin::InventoryWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InventoryWin)
{
    ui->setupUi(this); 

    QStringList headerLabels = {"Item Name", "Quantity", "Price"};
    ui->invData->setHorizontalHeaderLabels(headerLabels);

    selectedRow = -1;

    readFile("Inventory.csv");

    //sets up the background to an image
    QPixmap bkgrnd("/Users/KailieC/Pictures/Saved Pictures/bobappBackground.png");
    bkgrnd = bkgrnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrnd);
    this->setPalette(palette);
}

InventoryWin::~InventoryWin()
{
    delete ui;
}

void InventoryWin::on_pushButton_clicked()
{
    QString invItem = ui->invInput->text().trimmed();

    if(invItem != "")
    {
        ui->invData->insertRow(ui->invData->rowCount());
        ui->invData->setItem(ui->invData->rowCount() - 1, 0, new QTableWidgetItem(invItem));

        ui->invData->setItem(ui->invData->rowCount() - 1, 1, new QTableWidgetItem(QString::number(ui->itemNum->value())));
        ui->invData->setItem(ui->invData->rowCount() - 1, 2, new QTableWidgetItem(QString::number(ui->priceBox->value())));
    }
    ui->invInput->clear();
    ui->itemNum->setValue(1);
    ui->priceBox->setValue(0);
}

void InventoryWin::on_invData_cellClicked(int row, int column)
{
    selectedRow = row;
}

void InventoryWin::on_deleteButton_clicked()
{
    if(selectedRow == -1)
    {
        return;
    }
    ui->invData->removeRow(selectedRow);
    selectedRow = -1;
}

void InventoryWin::closeEvent(QCloseEvent *event)
{
    writeFile("Inventory.csv");
}

void InventoryWin::readFile(QString filename)
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
        inventory.append(row[2]);

        ui->invData->insertRow(ui->invData->rowCount());
        ui->invData->setItem(ui->invData->rowCount() - 1, 0, new QTableWidgetItem(inventory[0]));

        ui->invData->setItem(ui->invData->rowCount() - 1, 1, new QTableWidgetItem(inventory[1]));
        ui->invData->setItem(ui->invData->rowCount() - 1, 2, new QTableWidgetItem(inventory[2]));
    }
}
void InventoryWin::writeFile(QString filename)
{
    QFile outFile(filename);
    if(!outFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "Can't open file";
    }
    QTextStream outStream(&outFile);

    for(int i = 0; i < ui->invData->rowCount(); i++)
    {
        outStream << ui->invData->item(i, 0)->text() << ',' << ui->invData->item(i, 1)->text() << ',' << ui->invData->item(i, 2)->text() << ",\n";
    }

    outFile.close();
}

