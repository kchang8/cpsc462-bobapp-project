#ifndef INTROWINDOW_H
#define INTROWINDOW_H

#include <QMainWindow>
#include "customerlogin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class IntroWindow; }
QT_END_NAMESPACE

class IntroWindow : public QMainWindow
{
    Q_OBJECT

public:
    IntroWindow(QWidget *parent = nullptr);
    ~IntroWindow();

private slots:
    void on_customerButton_clicked();

private:
    Ui::IntroWindow *ui;
     customerLogin *custLogin;


};
#endif // INTROWINDOW_H
