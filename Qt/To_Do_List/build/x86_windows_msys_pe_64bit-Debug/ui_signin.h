/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

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

class Ui_SignIn
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *spacerItem;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *username_input;
    QLabel *passwordLabel;
    QHBoxLayout *passwordLayout;
    QLineEdit *password_input;
    QPushButton *Eye_Button;
    QHBoxLayout *buttonsLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back_Button;
    QSpacerItem *middleSpacer;
    QPushButton *LogIn_Button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *bottomSpacer;

    void setupUi(QMainWindow *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName("SignIn");
        SignIn->resize(800, 600);
        SignIn->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                          stop:0 #f0f4f8, stop:1 #dbeafe);\n"
"    }\n"
"   "));
        centralwidget = new QWidget(SignIn);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        spacerItem = new QSpacerItem(17, 135, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(spacerItem);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(241, 104));
        titleLabel->setMaximumSize(QSize(341, 114));
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"            font: bold 36pt \"Segoe UI\";\n"
"            color: #1e3a8a;\n"
"            padding: 20px;\n"
"            background-color: #ffffff;\n"
"            border-radius: 15px;\n"
"           "));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(titleLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignCenter);
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, usernameLabel);

        username_input = new QLineEdit(centralwidget);
        username_input->setObjectName("username_input");
        username_input->setMinimumSize(QSize(400, 35));
        username_input->setStyleSheet(QString::fromUtf8("\n"
"          QLineEdit {\n"
"           font: 12pt \"Segoe UI\";\n"
"           background-color: #f0f0f0;\n"
"           border: 1px solid #ccc;\n"
"           border-radius: 6px;\n"
"           padding: 5px 8px;\n"
"          }\n"
"         "));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, username_input);

        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, passwordLabel);

        passwordLayout = new QHBoxLayout();
        passwordLayout->setObjectName("passwordLayout");
        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName("password_input");
        password_input->setMinimumSize(QSize(360, 35));
        password_input->setStyleSheet(QString::fromUtf8("\n"
"            QLineEdit {\n"
"             font: 12pt \"Segoe UI\";\n"
"             background-color: #f0f0f0;\n"
"             border: 1px solid #ccc;\n"
"             border-radius: 6px;\n"
"             padding: 5px 8px;\n"
"            }\n"
"           "));
        password_input->setEchoMode(QLineEdit::EchoMode::Password);

        passwordLayout->addWidget(password_input);

        Eye_Button = new QPushButton(centralwidget);
        Eye_Button->setObjectName("Eye_Button");
        Eye_Button->setMinimumSize(QSize(35, 35));
        Eye_Button->setStyleSheet(QString::fromUtf8("\n"
"            QPushButton {\n"
"             background-color: transparent;\n"
"             border: none;\n"
"             border-image: url(:/images/images/closed_eye.png);\n"
"            }\n"
"            QPushButton:checked {\n"
"             border-image: url(:/images/images/open_eye.png);\n"
"            }\n"
"           "));
        Eye_Button->setCheckable(true);

        passwordLayout->addWidget(Eye_Button);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, passwordLayout);


        verticalLayout->addLayout(formLayout);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setMinimumSize(QSize(200, 45));
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

        buttonsLayout->addWidget(Back_Button);

        middleSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(middleSpacer);

        LogIn_Button = new QPushButton(centralwidget);
        LogIn_Button->setObjectName("LogIn_Button");
        LogIn_Button->setMinimumSize(QSize(200, 45));
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

        buttonsLayout->addWidget(LogIn_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(buttonsLayout);


        verticalLayout_2->addLayout(verticalLayout);

        bottomSpacer = new QSpacerItem(17, 135, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(bottomSpacer);

        SignIn->setCentralWidget(centralwidget);

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QMainWindow *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Sign In", nullptr));
        titleLabel->setText(QCoreApplication::translate("SignIn", "Sign In", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignIn", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignIn", "Password:", nullptr));
        Back_Button->setText(QCoreApplication::translate("SignIn", "Back", nullptr));
        LogIn_Button->setText(QCoreApplication::translate("SignIn", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
