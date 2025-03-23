/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Admin_Button;
    QPushButton *User_Button;
    QTextEdit *Title;
    QTextEdit *subTitle;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 167, 167);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Admin_Button = new QPushButton(centralwidget);
        Admin_Button->setObjectName("Admin_Button");
        Admin_Button->setGeometry(QRect(160, 270, 221, 91));
        Admin_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(50, 50, 50);\n"
"	color: rgb(235, 235, 235);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}"));
        Admin_Button->setIconSize(QSize(32, 32));
        User_Button = new QPushButton(centralwidget);
        User_Button->setObjectName("User_Button");
        User_Button->setGeometry(QRect(430, 270, 221, 91));
        User_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(50, 50, 50);\n"
"	color: rgb(235, 235, 235);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	font: 700 40pt \"Farsi Simple\";\n"
"	background-color: rgb(40, 40, 40);\n"
"	color: rgb(205, 205, 205);\n"
"}"));
        User_Button->setIconSize(QSize(32, 32));
        Title = new QTextEdit(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(3, 40, 791, 141));
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
        subTitle = new QTextEdit(centralwidget);
        subTitle->setObjectName("subTitle");
        subTitle->setGeometry(QRect(0, 410, 801, 111));
        subTitle->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"	font: 40px;\n"
"	background-color: rgb(167, 167, 167);\n"
"	color: BLACK;\n"
"	border: none;\n"
"}\n"
"\n"
"QTextEdit:hover\n"
"{\n"
"	font: 40px;\n"
"	background-color: rgb(167, 167, 167);\n"
"	color: rgb(235, 235, 235);\n"
"	border: none;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Admin_Button->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        User_Button->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        Title->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:72pt; font-weight:700;\">Past Paper App</span></p></body></html>", nullptr));
        subTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:40px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700;\">Made By:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700;\">Azan Naveed &amp; Muhammad Ibrahim</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
