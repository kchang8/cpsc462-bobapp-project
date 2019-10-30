#ifndef CUSTORDER_H
#define CUSTORDER_H

#include <QDialog>
#include "customerrevieworder.h"

namespace Ui {
class custOrder;
}

class custOrder : public QDialog
{
    Q_OBJECT

public:
    explicit custOrder(QWidget *parent = nullptr);
    ~custOrder();

private slots:

    void on_menuTable_cellClicked(int row, int column);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::custOrder *ui;
        customerReviewOrder *custReview;
    int selectedRow;

};

#endif // CUSTORDER_H


