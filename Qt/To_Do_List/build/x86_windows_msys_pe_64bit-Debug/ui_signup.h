/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *username_input;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *password_input;
    QPushButton *Eye_Button;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Back_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *LogIn_Button;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(800, 600);
        signup->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                          stop:0 #f0f4f8, stop:1 #dbeafe);\n"
"    }\n"
"   "));
        centralwidget = new QWidget(signup);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(291, 111));
        label->setStyleSheet(QString::fromUtf8("\n"
"            font: bold 36pt \"Segoe UI\";\n"
"            color: #1e3a8a;\n"
"            padding: 20px;\n"
"            background-color: #ffffff;\n"
"            border-radius: 15px;\n"
"           "));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(13, 132, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI\";\n"
"color: black;"));

        horizontalLayout_2->addWidget(label_2);

        username_input = new QLineEdit(centralwidget);
        username_input->setObjectName("username_input");
        username_input->setMinimumSize(QSize(670, 35));
        username_input->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background-color: #f0f0f0;\n"
"border: 1px solid #ccc;\n"
"border-radius: 6px;\n"
"padding: 5px 8px;"));

        horizontalLayout_2->addWidget(username_input);


        formLayout->setLayout(0, QFormLayout::ItemRole::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI\";\n"
"color: black;"));

        horizontalLayout_3->addWidget(label_3);

        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName("password_input");
        password_input->setMinimumSize(QSize(638, 35));
        password_input->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: black;\n"
"background-color: #f0f0f0;\n"
"border: 1px solid #ccc;\n"
"border-radius: 6px;\n"
"padding: 5px 8px;"));
        password_input->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(password_input);

        Eye_Button = new QPushButton(centralwidget);
        Eye_Button->setObjectName("Eye_Button");
        Eye_Button->setMinimumSize(QSize(35, 35));
        Eye_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    border-image: url(:/images/images/closed_eye.png);\n"
"}\n"
"QPushButton:checked {\n"
"    border-image: url(:/images/images/open_eye.png);\n"
"}"));
        Eye_Button->setCheckable(true);

        horizontalLayout_3->addWidget(Eye_Button);


        formLayout->setLayout(1, QFormLayout::ItemRole::LabelRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setMinimumSize(QSize(251, 52));
        Back_Button->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_4->addWidget(Back_Button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        LogIn_Button = new QPushButton(centralwidget);
        LogIn_Button->setObjectName("LogIn_Button");
        LogIn_Button->setMinimumSize(QSize(251, 52));
        LogIn_Button->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_4->addWidget(LogIn_Button);


        formLayout->setLayout(2, QFormLayout::ItemRole::SpanningRole, horizontalLayout_4);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(13, 131, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(horizontalSpacer_3);

        signup->setCentralWidget(centralwidget);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Password", nullptr));
        Eye_Button->setText(QString());
        Back_Button->setText(QCoreApplication::translate("signup", "Back", nullptr));
        LogIn_Button->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
