#ifndef FINALORDERWIN_H
#define FINALORDERWIN_H

#include <QDialog>
#include "customermainmenu.h"

namespace Ui {
class finalOrderwin;
}

class finalOrderwin : public QDialog
{
    Q_OBJECT

public:
    explicit finalOrderwin(QWidget *parent = nullptr);
    ~finalOrderwin();

private slots:

private:
    Ui::finalOrderwin *ui;

};

#endif // FINALORDERWIN_H
