/********************************************************************************
** Form generated from reading UI file 'user_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_SCREEN_H
#define UI_USER_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Screen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Ttile;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Search_label;
    QLineEdit *Search_Bar;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Back_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Exit_Button;

    void setupUi(QMainWindow *User_Screen)
    {
        if (User_Screen->objectName().isEmpty())
            User_Screen->setObjectName("User_Screen");
        User_Screen->resize(800, 600);
        User_Screen->setStyleSheet(QString::fromUtf8("background-color:rgb(220, 220, 220);"));
        centralwidget = new QWidget(User_Screen);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_6 = new QSpacerItem(328, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        Ttile = new QPushButton(centralwidget);
        Ttile->setObjectName("Ttile");
        Ttile->setMinimumSize(QSize(111, 51));
        Ttile->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 35pt \"Britannic\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 35pt \"Britannic\";\n"
"}"));

        horizontalLayout_4->addWidget(Ttile);

        horizontalSpacer_7 = new QSpacerItem(328, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(45, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Search_label = new QLabel(centralwidget);
        Search_label->setObjectName("Search_label");
        Search_label->setMinimumSize(QSize(90, 30));
        Search_label->setStyleSheet(QString::fromUtf8("Color:BLACK;\n"
"Font:17px;"));

        horizontalLayout_3->addWidget(Search_label);

        Search_Bar = new QLineEdit(centralwidget);
        Search_Bar->setObjectName("Search_Bar");
        Search_Bar->setMinimumSize(QSize(591, 41));
        Search_Bar->setStyleSheet(QString::fromUtf8("font:17px;\n"
"color:BLACK;"));

        horizontalLayout_3->addWidget(Search_Bar);

        horizontalSpacer_4 = new QSpacerItem(28, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(690, 400));
        listWidget->setStyleSheet(QString::fromUtf8("font:15px;\n"
"color:BLACK;"));

        horizontalLayout_2->addWidget(listWidget);

        horizontalSpacer_2 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setMinimumSize(QSize(101, 31));
        Back_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout->addWidget(Back_Button);

        horizontalSpacer_5 = new QSpacerItem(568, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        Exit_Button = new QPushButton(centralwidget);
        Exit_Button->setObjectName("Exit_Button");
        Exit_Button->setMinimumSize(QSize(101, 31));
        Exit_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout->addWidget(Exit_Button);


        verticalLayout->addLayout(horizontalLayout);

        User_Screen->setCentralWidget(centralwidget);

        retranslateUi(User_Screen);

        QMetaObject::connectSlotsByName(User_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *User_Screen)
    {
        User_Screen->setWindowTitle(QCoreApplication::translate("User_Screen", "MainWindow", nullptr));
        Ttile->setText(QCoreApplication::translate("User_Screen", "User", nullptr));
        Search_label->setText(QCoreApplication::translate("User_Screen", "Search Bar:", nullptr));
        Back_Button->setText(QCoreApplication::translate("User_Screen", "Back", nullptr));
        Exit_Button->setText(QCoreApplication::translate("User_Screen", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Screen: public Ui_User_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_SCREEN_H
