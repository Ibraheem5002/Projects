/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QSpacerItem *topSpacer;
    QHBoxLayout *centerLayout;
    QSpacerItem *leftSpacer;
    QVBoxLayout *cardLayout;
    QLabel *label;
    QSpacerItem *middleSpacer;
    QHBoxLayout *buttonLayout;
    QPushButton *pushButton;
    QSpacerItem *betweenSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *rightSpacer;
    QSpacerItem *bottomSpacer;

    void setupUi(QMainWindow *LogInScreen)
    {
        if (LogInScreen->objectName().isEmpty())
            LogInScreen->setObjectName("LogInScreen");
        LogInScreen->resize(800, 600);
        LogInScreen->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                          stop:0 #f0f4f8, stop:1 #dbeafe);\n"
"    }\n"
"   "));
        centralwidget = new QWidget(LogInScreen);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        topSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(topSpacer);

        centerLayout = new QHBoxLayout();
        centerLayout->setObjectName("centerLayout");
        leftSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        centerLayout->addItem(leftSpacer);

        cardLayout = new QVBoxLayout();
        cardLayout->setObjectName("cardLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(300, 100));
        label->setStyleSheet(QString::fromUtf8("\n"
"            font: bold 36pt \"Segoe UI\";\n"
"            color: #1e3a8a;\n"
"            padding: 20px;\n"
"            background-color: #ffffff;\n"
"            border-radius: 15px;\n"
"           "));
        label->setAlignment(Qt::AlignCenter);

        cardLayout->addWidget(label);

        middleSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        cardLayout->addItem(middleSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(150, 60));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"              QPushButton {\n"
"                  background-color: #1d4ed8;\n"
"                  color: white;\n"
"                  font: 14pt \"Segoe UI\";\n"
"                  border-radius: 10px;\n"
"                  padding: 10px;\n"
"              }\n"
"              QPushButton:hover {\n"
"                  background-color: #2563eb;\n"
"              }\n"
"              QPushButton:pressed {\n"
"                  background-color: #1e40af;\n"
"              }\n"
"             "));

        buttonLayout->addWidget(pushButton);

        betweenSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(betweenSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(150, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"              QPushButton {\n"
"                  background-color: #1d4ed8;\n"
"                  color: white;\n"
"                  font: 14pt \"Segoe UI\";\n"
"                  border-radius: 10px;\n"
"                  padding: 10px;\n"
"              }\n"
"              QPushButton:hover {\n"
"                  background-color: #2563eb;\n"
"              }\n"
"              QPushButton:pressed {\n"
"                  background-color: #1e40af;\n"
"              }\n"
"             "));

        buttonLayout->addWidget(pushButton_2);


        cardLayout->addLayout(buttonLayout);


        centerLayout->addLayout(cardLayout);

        rightSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        centerLayout->addItem(rightSpacer);


        mainLayout->addLayout(centerLayout);

        bottomSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(bottomSpacer);

        LogInScreen->setCentralWidget(centralwidget);

        retranslateUi(LogInScreen);

        QMetaObject::connectSlotsByName(LogInScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LogInScreen)
    {
        LogInScreen->setWindowTitle(QCoreApplication::translate("LogInScreen", "LogInScreen", nullptr));
        label->setText(QCoreApplication::translate("LogInScreen", "To Do List", nullptr));
        pushButton->setText(QCoreApplication::translate("LogInScreen", "Log In", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogInScreen", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInScreen: public Ui_LogInScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
