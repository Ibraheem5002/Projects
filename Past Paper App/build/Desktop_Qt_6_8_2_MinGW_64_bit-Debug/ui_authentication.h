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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Ok_Button;
    QPushButton *Cancel_Button;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName("Authentication");
        Authentication->resize(400, 171);
        Authentication->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 243);"));
        widget = new QWidget(Authentication);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 140, 391, 26));
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

        widget1 = new QWidget(Authentication);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 40, 372, 33));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:BLACK;\n"
"font:15px;\n"
""));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(262, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font:15px;\n"
"background-color:WHITE;\n"
"color:BLACK;"));
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit);


        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QDialog *Authentication)
    {
        Authentication->setWindowTitle(QCoreApplication::translate("Authentication", "Admin Authentication", nullptr));
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
