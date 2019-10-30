/********************************************************************************
** Form generated from reading UI file 'inventorywin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYWIN_H
#define UI_INVENTORYWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventoryWin
{
public:
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *deleteButton;
    QTableWidget *invData;
    QLabel *label_2;
    QSpinBox *itemNum;
    QDoubleSpinBox *priceBox;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *invInput;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InventoryWin)
    {
        if (InventoryWin->objectName().isEmpty())
            InventoryWin->setObjectName(QString::fromUtf8("InventoryWin"));
        InventoryWin->resize(592, 630);
        actionSave = new QAction(InventoryWin);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(InventoryWin);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(InventoryWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(10);
        pushButton->setFont(font);
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(410, 120, 141, 41));
        deleteButton->setFont(font);
        invData = new QTableWidget(centralwidget);
        if (invData->columnCount() < 3)
            invData->setColumnCount(3);
        invData->setObjectName(QString::fromUtf8("invData"));
        invData->setGeometry(QRect(40, 170, 511, 371));
        invData->setRowCount(0);
        invData->setColumnCount(3);
        invData->horizontalHeader()->setCascadingSectionResizes(false);
        invData->horizontalHeader()->setDefaultSectionSize(169);
        invData->horizontalHeader()->setHighlightSections(false);
        invData->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        invData->horizontalHeader()->setStretchLastSection(false);
        invData->verticalHeader()->setVisible(false);
        invData->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        invData->verticalHeader()->setStretchLastSection(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 30, 111, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        itemNum = new QSpinBox(centralwidget);
        itemNum->setObjectName(QString::fromUtf8("itemNum"));
        itemNum->setGeometry(QRect(230, 70, 42, 22));
        itemNum->setMinimum(1);
        priceBox = new QDoubleSpinBox(centralwidget);
        priceBox->setObjectName(QString::fromUtf8("priceBox"));
        priceBox->setGeometry(QRect(350, 70, 62, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 30, 111, 23));
        label_3->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 181, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        verticalLayout->addWidget(label);

        invInput = new QLineEdit(widget);
        invInput->setObjectName(QString::fromUtf8("invInput"));

        verticalLayout->addWidget(invInput);

        InventoryWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InventoryWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 592, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        InventoryWin->setMenuBar(menubar);
        statusbar = new QStatusBar(InventoryWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InventoryWin->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);

        retranslateUi(InventoryWin);

        QMetaObject::connectSlotsByName(InventoryWin);
    } // setupUi

    void retranslateUi(QMainWindow *InventoryWin)
    {
        InventoryWin->setWindowTitle(QCoreApplication::translate("InventoryWin", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("InventoryWin", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("InventoryWin", "Exit", nullptr));
        pushButton->setText(QCoreApplication::translate("InventoryWin", "Add Item", nullptr));
        deleteButton->setText(QCoreApplication::translate("InventoryWin", "Delete Item", nullptr));
        label_2->setText(QCoreApplication::translate("InventoryWin", "Item Quantity:", nullptr));
        label_3->setText(QCoreApplication::translate("InventoryWin", "Item Price:", nullptr));
        label->setText(QCoreApplication::translate("InventoryWin", "Item Name:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("InventoryWin", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InventoryWin: public Ui_InventoryWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWIN_H
