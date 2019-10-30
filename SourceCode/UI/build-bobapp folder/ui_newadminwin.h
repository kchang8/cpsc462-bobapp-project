/********************************************************************************
** Form generated from reading UI file 'newadminwin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADMINWIN_H
#define UI_NEWADMINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewAdminWin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewAdminWin)
    {
        if (NewAdminWin->objectName().isEmpty())
            NewAdminWin->setObjectName(QString::fromUtf8("NewAdminWin"));
        NewAdminWin->resize(591, 645);
        centralwidget = new QWidget(NewAdminWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 281, 111));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/bobappLOGO.png")));
        label->setScaledContents(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(90, 140, 411, 401));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 181, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 391, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        lineEdit->setFont(font2);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 181, 21));
        label_3->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 150, 391, 31));
        lineEdit_2->setFont(font2);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 200, 181, 21));
        label_4->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 230, 391, 31));
        lineEdit_3->setFont(font2);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 280, 181, 21));
        label_5->setFont(font1);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 310, 391, 31));
        lineEdit_4->setFont(font2);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 350, 131, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton->setFont(font3);
        NewAdminWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewAdminWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 591, 21));
        NewAdminWin->setMenuBar(menubar);
        statusbar = new QStatusBar(NewAdminWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewAdminWin->setStatusBar(statusbar);

        retranslateUi(NewAdminWin);

        QMetaObject::connectSlotsByName(NewAdminWin);
    } // setupUi

    void retranslateUi(QMainWindow *NewAdminWin)
    {
        NewAdminWin->setWindowTitle(QCoreApplication::translate("NewAdminWin", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("NewAdminWin", "Business Sign up", nullptr));
        label_2->setText(QCoreApplication::translate("NewAdminWin", "Admin Name", nullptr));
        label_3->setText(QCoreApplication::translate("NewAdminWin", "Admin Email", nullptr));
        label_4->setText(QCoreApplication::translate("NewAdminWin", "Store Name", nullptr));
        label_5->setText(QCoreApplication::translate("NewAdminWin", "Store Address", nullptr));
        pushButton->setText(QCoreApplication::translate("NewAdminWin", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewAdminWin: public Ui_NewAdminWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADMINWIN_H
