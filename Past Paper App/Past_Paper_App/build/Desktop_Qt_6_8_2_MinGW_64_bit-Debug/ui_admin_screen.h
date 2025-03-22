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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Screen
{
public:
    QWidget *centralwidget;
    QTextEdit *Title;
    QPushButton *Back_Button;

    void setupUi(QMainWindow *Admin_Screen)
    {
        if (Admin_Screen->objectName().isEmpty())
            Admin_Screen->setObjectName("Admin_Screen");
        Admin_Screen->resize(800, 600);
        Admin_Screen->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 167, 167);"));
        centralwidget = new QWidget(Admin_Screen);
        centralwidget->setObjectName("centralwidget");
        Title = new QTextEdit(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(285, 0, 231, 101));
        Title->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"	background-color: rgb(167, 167, 167);\n"
"	color: BLACK;\n"
"	border: none;\n"
"}\n"
"\n"
"QTextEdit:hover\n"
"{\n"
"	background-color: rgb(167, 167, 167);\n"
"	color: rgb(235, 235, 235);\n"
"	border: none;\n"
"}"));
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setGeometry(QRect(20, 550, 81, 31));
        Back_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 700 15pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	font: 700 15pt \"Farsi Simple\";\n"
"	background-color: rgb(50, 50, 50);\n"
"	color: rgb(235, 235, 235);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 700 15pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}"));
        Admin_Screen->setCentralWidget(centralwidget);

        retranslateUi(Admin_Screen);

        QMetaObject::connectSlotsByName(Admin_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_Screen)
    {
        Admin_Screen->setWindowTitle(QCoreApplication::translate("Admin_Screen", "MainWindow", nullptr));
        Title->setHtml(QCoreApplication::translate("Admin_Screen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700;\">Admin</span></p></body></html>", nullptr));
        Back_Button->setText(QCoreApplication::translate("Admin_Screen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Screen: public Ui_Admin_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SCREEN_H
