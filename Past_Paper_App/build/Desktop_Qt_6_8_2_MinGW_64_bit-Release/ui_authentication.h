/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QPushButton *Eye_Button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Ok_Button;
    QPushButton *Cancel_Button;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName("Authentication");
        Authentication->resize(437, 171);
        Authentication->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243);"));
        Eye_Button = new QPushButton(Authentication);
        Eye_Button->setObjectName("Eye_Button");
        Eye_Button->setGeometry(QRect(389, 41, 30, 30));
        Eye_Button->setMinimumSize(QSize(30, 30));
        Eye_Button->setMaximumSize(QSize(30, 30));
        Eye_Button->setStyleSheet(QString::fromUtf8("#Eye_Button\n"
"{\n"
"    background-color: rgb(243, 243, 243);\n"
"    border: none;	\n"
"    border-image: url(:/images/images/open_eye.png);\n"
"}\n"
"\n"
"#Eye_Button:checked\n"
"{\n"
"    background-color: rgb(243, 243, 243);\n"
"    border: none;\n"
"    border-image: url(:/images/images/closed_eye.png);\n"
"}\n"
""));
        Eye_Button->setCheckable(true);
        widget = new QWidget(Authentication);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 140, 431, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Ok_Button = new QPushButton(widget);
        Ok_Button->setObjectName("Ok_Button");
        Ok_Button->setMinimumSize(QSize(80, 24));
        Ok_Button->setStyleSheet(QString::fromUtf8("background-color:WHITE;\n"
"color:BLACK;"));

        horizontalLayout->addWidget(Ok_Button);

        Cancel_Button = new QPushButton(widget);
        Cancel_Button->setObjectName("Cancel_Button");
        Cancel_Button->setMinimumSize(QSize(80, 24));
        Cancel_Button->setStyleSheet(QString::fromUtf8("background-color:WHITE;\n"
"color:BLACK;"));

        horizontalLayout->addWidget(Cancel_Button);

        lineEdit = new QLineEdit(Authentication);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 41, 262, 31));
        lineEdit->setMinimumSize(QSize(262, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font:15px;\n"
"background-color:WHITE;\n"
"color:BLACK;"));
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(Authentication);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 45, 102, 20));
        label->setStyleSheet(QString::fromUtf8("color:BLACK;\n"
"font:15px;\n"
""));

        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QDialog *Authentication)
    {
        Authentication->setWindowTitle(QCoreApplication::translate("Authentication", "Admin Authentication", nullptr));
        Eye_Button->setText(QString());
        Ok_Button->setText(QCoreApplication::translate("Authentication", "Ok", nullptr));
        Cancel_Button->setText(QCoreApplication::translate("Authentication", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Authentication", "Enter Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
