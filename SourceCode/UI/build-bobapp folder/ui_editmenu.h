/********************************************************************************
** Form generated from reading UI file 'editmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMENU_H
#define UI_EDITMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editMenu
{
public:
    QTableWidget *menuData;
    QPushButton *deleteButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *itemName;
    QDoubleSpinBox *itemPrice;
    QPushButton *saveMenu;

    void setupUi(QWidget *editMenu)
    {
        if (editMenu->objectName().isEmpty())
            editMenu->setObjectName(QString::fromUtf8("editMenu"));
        editMenu->resize(400, 300);
        menuData = new QTableWidget(editMenu);
        if (menuData->columnCount() < 2)
            menuData->setColumnCount(2);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        menuData->setGeometry(QRect(50, 50, 256, 192));
        menuData->setColumnCount(2);
        menuData->horizontalHeader()->setDefaultSectionSize(127);
        deleteButton = new QPushButton(editMenu);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(200, 250, 112, 32));
        layoutWidget = new QWidget(editMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 20, 271, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        itemName = new QLineEdit(layoutWidget);
        itemName->setObjectName(QString::fromUtf8("itemName"));

        horizontalLayout->addWidget(itemName);

        itemPrice = new QDoubleSpinBox(layoutWidget);
        itemPrice->setObjectName(QString::fromUtf8("itemPrice"));

        horizontalLayout->addWidget(itemPrice);

        saveMenu = new QPushButton(editMenu);
        saveMenu->setObjectName(QString::fromUtf8("saveMenu"));
        saveMenu->setGeometry(QRect(20, 250, 112, 32));

        retranslateUi(editMenu);

        QMetaObject::connectSlotsByName(editMenu);
    } // setupUi

    void retranslateUi(QWidget *editMenu)
    {
        editMenu->setWindowTitle(QCoreApplication::translate("editMenu", "Form", nullptr));
        deleteButton->setText(QCoreApplication::translate("editMenu", "Delete", nullptr));
        pushButton->setText(QCoreApplication::translate("editMenu", "Add", nullptr));
        saveMenu->setText(QCoreApplication::translate("editMenu", "Save Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editMenu: public Ui_editMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMENU_H
