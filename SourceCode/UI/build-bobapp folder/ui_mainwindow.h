/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QCommandLinkButton *commandLinkButton;
    QGroupBox *groupBox;
    QLabel *storeID_label;
    QLineEdit *storeID_lineEdit;
    QLabel *adminID_label;
    QLineEdit *adminID_lineEdit;
    QPushButton *adminLogButton;
    QLabel *adminPW_label;
    QLineEdit *adminPW_lineEdit;
    QCommandLinkButton *commandLinkButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 311, 131));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/bobappLOGO.png")));
        label->setScaledContents(true);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(260, 460, 281, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        commandLinkButton->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 170, 421, 291));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        storeID_label = new QLabel(groupBox);
        storeID_label->setObjectName(QString::fromUtf8("storeID_label"));
        storeID_label->setGeometry(QRect(10, 30, 221, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        storeID_label->setFont(font2);
        storeID_lineEdit = new QLineEdit(groupBox);
        storeID_lineEdit->setObjectName(QString::fromUtf8("storeID_lineEdit"));
        storeID_lineEdit->setGeometry(QRect(10, 60, 391, 31));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        storeID_lineEdit->setFont(font3);
        adminID_label = new QLabel(groupBox);
        adminID_label->setObjectName(QString::fromUtf8("adminID_label"));
        adminID_label->setGeometry(QRect(10, 100, 221, 31));
        adminID_label->setFont(font2);
        adminID_lineEdit = new QLineEdit(groupBox);
        adminID_lineEdit->setObjectName(QString::fromUtf8("adminID_lineEdit"));
        adminID_lineEdit->setGeometry(QRect(10, 130, 391, 31));
        adminID_lineEdit->setFont(font3);
        adminLogButton = new QPushButton(groupBox);
        adminLogButton->setObjectName(QString::fromUtf8("adminLogButton"));
        adminLogButton->setGeometry(QRect(300, 240, 101, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Gothic"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        adminLogButton->setFont(font4);
        adminPW_label = new QLabel(groupBox);
        adminPW_label->setObjectName(QString::fromUtf8("adminPW_label"));
        adminPW_label->setGeometry(QRect(10, 170, 221, 31));
        adminPW_label->setFont(font2);
        adminPW_lineEdit = new QLineEdit(groupBox);
        adminPW_lineEdit->setObjectName(QString::fromUtf8("adminPW_lineEdit"));
        adminPW_lineEdit->setGeometry(QRect(10, 200, 391, 31));
        adminPW_lineEdit->setFont(font3);
        adminPW_lineEdit->setEchoMode(QLineEdit::Password);
        commandLinkButton_2 = new QCommandLinkButton(centralwidget);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(260, 490, 281, 41));
        commandLinkButton_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Sign up for yearly subscription here", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        storeID_label->setText(QCoreApplication::translate("MainWindow", "Store ID", nullptr));
        adminID_label->setText(QCoreApplication::translate("MainWindow", "Admin ID", nullptr));
        adminLogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        adminPW_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "New? Sign up here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
