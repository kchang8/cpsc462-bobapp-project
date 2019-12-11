#ifndef NEWADMINWIN_H
#define NEWADMINWIN_H

#include <QMainWindow>

namespace Ui {
class NewAdminWin;
}

class NewAdminWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewAdminWin(QWidget *parent = nullptr);
    ~NewAdminWin();

private slots:
    void on_AccountFactoryButton_clicked();

private:
    Ui::NewAdminWin *ui;
};

#endif // NEWADMINWIN_H
