/********************************************************************************
** Form generated from reading UI file 'admin_screen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SCREEN_H
#define UI_ADMIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
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
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *Subject_Choosing;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Upload_Button;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *Delete_Button;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *New_Subject;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_7;
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        Subject_Choosing = new QComboBox(centralwidget);
        Subject_Choosing->setObjectName("Subject_Choosing");
        Subject_Choosing->setMinimumSize(QSize(420, 25));
        Subject_Choosing->setStyleSheet(QString::fromUtf8("	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	font: 700 13pt \"Simple Jut Out\";"));

        horizontalLayout_4->addWidget(Subject_Choosing);

        horizontalSpacer_11 = new QSpacerItem(158, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_4);

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
"	font: 700 35pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout_2->addWidget(Upload_Button);

        horizontalSpacer_9 = new QSpacerItem(36, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_12 = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        Delete_Button = new QPushButton(centralwidget);
        Delete_Button->setObjectName("Delete_Button");
        Delete_Button->setMinimumSize(QSize(420, 80));
        Delete_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	font: 700 35pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout_7->addWidget(Delete_Button);

        horizontalSpacer_13 = new QSpacerItem(36, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_4 = new QSpacerItem(268, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        New_Subject = new QPushButton(centralwidget);
        New_Subject->setObjectName("New_Subject");
        New_Subject->setMinimumSize(QSize(211, 29));
        New_Subject->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_6->addWidget(New_Subject);

        horizontalSpacer_10 = new QSpacerItem(268, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_6 = new QSpacerItem(218, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(330, 60));
        textEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: BLACK;\n"
""));

        horizontalLayout_5->addWidget(textEdit);

        horizontalSpacer_7 = new QSpacerItem(208, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 117, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

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
        Delete_Button->setText(QCoreApplication::translate("Admin_Screen", "Delete", nullptr));
        New_Subject->setText(QCoreApplication::translate("Admin_Screen", "Add A New Subject", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Admin_Screen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">Note:</span><span style=\" font-size:16pt;\"> You can only upload PDFs.<br /></span></p></body></html>", nullptr));
        Back_Button->setText(QCoreApplication::translate("Admin_Screen", "Back", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Admin_Screen", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Screen: public Ui_Admin_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SCREEN_H
