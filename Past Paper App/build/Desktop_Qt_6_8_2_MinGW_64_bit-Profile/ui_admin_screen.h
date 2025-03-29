/********************************************************************************
** Form generated from reading UI file 'admin_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SCREEN_H
#define UI_ADMIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Screen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Title;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Upload_Button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Back_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Exit_Button;

    void setupUi(QMainWindow *Admin_Screen)
    {
        if (Admin_Screen->objectName().isEmpty())
            Admin_Screen->setObjectName("Admin_Screen");
        Admin_Screen->resize(800, 600);
        Admin_Screen->setStyleSheet(QString::fromUtf8("background-color:rgb(220, 220, 220)"));
        centralwidget = new QWidget(Admin_Screen);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Title = new QPushButton(centralwidget);
        Title->setObjectName("Title");
        Title->setMinimumSize(QSize(129, 52));
        Title->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(Title);

        horizontalSpacer_2 = new QSpacerItem(308, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 145, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Upload_Button = new QPushButton(centralwidget);
        Upload_Button->setObjectName("Upload_Button");
        Upload_Button->setMinimumSize(QSize(420, 80));
        Upload_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 35pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 35pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout_2->addWidget(Upload_Button);

        horizontalSpacer_4 = new QSpacerItem(36, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 238, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
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

        horizontalLayout_3->addWidget(Back_Button);

        horizontalSpacer_5 = new QSpacerItem(568, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

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

        horizontalLayout_3->addWidget(Exit_Button);


        verticalLayout->addLayout(horizontalLayout_3);

        Admin_Screen->setCentralWidget(centralwidget);

        retranslateUi(Admin_Screen);

        QMetaObject::connectSlotsByName(Admin_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_Screen)
    {
        Admin_Screen->setWindowTitle(QCoreApplication::translate("Admin_Screen", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("Admin_Screen", "Admin", nullptr));
        Upload_Button->setText(QCoreApplication::translate("Admin_Screen", "Upload", nullptr));
        Back_Button->setText(QCoreApplication::translate("Admin_Screen", "Back", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Admin_Screen", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Screen: public Ui_Admin_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SCREEN_H
