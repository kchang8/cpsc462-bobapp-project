#ifndef CUSTOMERCHOOSESTORE_H
#define CUSTOMERCHOOSESTORE_H

#include <QDialog>
#include "custorder.h"

namespace Ui {
class customerChooseStore;
}

class customerChooseStore : public QDialog
{
    Q_OBJECT

public:
    explicit customerChooseStore(QWidget *parent = nullptr);
    ~customerChooseStore();

private slots:
    void on_pushButton_clicked();

private:
    Ui::customerChooseStore *ui;
        custOrder *cOrder;
};

#endif // CUSTOMERCHOOSESTORE_H
