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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Screen
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QMainWindow *User_Screen)
    {
        if (User_Screen->objectName().isEmpty())
            User_Screen->setObjectName("User_Screen");
        User_Screen->resize(800, 600);
        User_Screen->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167);"));
        centralwidget = new QWidget(User_Screen);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(315, 0, 171, 101));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit\n"
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 550, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        User_Screen->setCentralWidget(centralwidget);

        retranslateUi(User_Screen);

        QMetaObject::connectSlotsByName(User_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *User_Screen)
    {
        User_Screen->setWindowTitle(QCoreApplication::translate("User_Screen", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("User_Screen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700;\">User</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("User_Screen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_Screen: public Ui_User_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_SCREEN_H
