/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QLabel *invenIcon_label;
    QLabel *label;
    QLabel *label_2;
    QPushButton *editMenu_button;
    QPushButton *editInven_button;
    QPushButton *viewCustOrder_button;
    QPushButton *custRewards_button;
    QLabel *label_3;
    QLabel *menuIcon_label;
    QComboBox *comboBox;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        AdminMenu->resize(547, 719);
        invenIcon_label = new QLabel(AdminMenu);
        invenIcon_label->setObjectName(QString::fromUtf8("invenIcon_label"));
        invenIcon_label->setGeometry(QRect(310, 170, 161, 151));
        invenIcon_label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/invenIcon.png")));
        invenIcon_label->setScaledContents(true);
        label = new QLabel(AdminMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 420, 141, 141));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/customerIcon.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 410, 161, 141));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/rewardIcon.png")));
        label_2->setScaledContents(true);
        editMenu_button = new QPushButton(AdminMenu);
        editMenu_button->setObjectName(QString::fromUtf8("editMenu_button"));
        editMenu_button->setGeometry(QRect(70, 340, 161, 41));
        editInven_button = new QPushButton(AdminMenu);
        editInven_button->setObjectName(QString::fromUtf8("editInven_button"));
        editInven_button->setGeometry(QRect(310, 340, 161, 41));
        viewCustOrder_button = new QPushButton(AdminMenu);
        viewCustOrder_button->setObjectName(QString::fromUtf8("viewCustOrder_button"));
        viewCustOrder_button->setGeometry(QRect(70, 580, 161, 41));
        custRewards_button = new QPushButton(AdminMenu);
        custRewards_button->setObjectName(QString::fromUtf8("custRewards_button"));
        custRewards_button->setGeometry(QRect(310, 580, 161, 41));
        label_3 = new QLabel(AdminMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 50, 271, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        menuIcon_label = new QLabel(AdminMenu);
        menuIcon_label->setObjectName(QString::fromUtf8("menuIcon_label"));
        menuIcon_label->setGeometry(QRect(70, 170, 161, 161));
        menuIcon_label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/menuIcon.png")));
        menuIcon_label->setScaledContents(true);
        comboBox = new QComboBox(AdminMenu);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(440, 20, 71, 31));

        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "Dialog", nullptr));
        invenIcon_label->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        editMenu_button->setText(QCoreApplication::translate("AdminMenu", "Edit Menu", nullptr));
        editInven_button->setText(QCoreApplication::translate("AdminMenu", "Edit Inventory", nullptr));
        viewCustOrder_button->setText(QCoreApplication::translate("AdminMenu", "View Customer Orders", nullptr));
        custRewards_button->setText(QCoreApplication::translate("AdminMenu", "Update Customer Rewards", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMenu", "Main Menu", nullptr));
        menuIcon_label->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("AdminMenu", "Options", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AdminMenu", "Log Out", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
