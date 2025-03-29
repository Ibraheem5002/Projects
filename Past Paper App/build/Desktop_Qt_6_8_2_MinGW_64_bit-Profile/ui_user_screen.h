/********************************************************************************
** Form generated from reading UI file 'user_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_SCREEN_H
#define UI_USER_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Screen
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User_Screen)
    {
        if (User_Screen->objectName().isEmpty())
            User_Screen->setObjectName("User_Screen");
        User_Screen->resize(800, 600);
        centralwidget = new QWidget(User_Screen);
        centralwidget->setObjectName("centralwidget");
        User_Screen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User_Screen);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        User_Screen->setMenuBar(menubar);
        statusbar = new QStatusBar(User_Screen);
        statusbar->setObjectName("statusbar");
        User_Screen->setStatusBar(statusbar);

        retranslateUi(User_Screen);

        QMetaObject::connectSlotsByName(User_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *User_Screen)
    {
        User_Screen->setWindowTitle(QCoreApplication::translate("User_Screen", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Screen: public Ui_User_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_SCREEN_H
