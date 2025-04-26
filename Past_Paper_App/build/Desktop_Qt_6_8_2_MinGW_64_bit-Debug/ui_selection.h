/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Ttile;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *User_Button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Admin_Button;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QPushButton *Azan_Button;
    QPushButton *pushButton_3;
    QPushButton *Ibrahim_Button;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Exit;

    void setupUi(QMainWindow *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName("Selection");
        Selection->resize(800, 600);
        Selection->setStyleSheet(QString::fromUtf8("background-color:rgb(220, 220, 220)"));
        centralwidget = new QWidget(Selection);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(800, 600));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 59, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Ttile = new QPushButton(centralwidget);
        Ttile->setObjectName("Ttile");
        Ttile->setEnabled(true);
        Ttile->setMinimumSize(QSize(648, 106));
        Ttile->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 72pt \"Britannic\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 72pt \"Britannic\";\n"
"}"));

        horizontalLayout->addWidget(Ttile);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_5 = new QSpacerItem(92, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(141, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        User_Button = new QPushButton(centralwidget);
        User_Button->setObjectName("User_Button");
        User_Button->setMinimumSize(QSize(211, 101));
        User_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}"));

        gridLayout->addWidget(User_Button, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(92, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        Admin_Button = new QPushButton(centralwidget);
        Admin_Button->setObjectName("Admin_Button");
        Admin_Button->setMinimumSize(QSize(211, 101));
        Admin_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 40pt \"Simple Jut Out\";\n"
"}"));

        gridLayout->addWidget(Admin_Button, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_7 = new QSpacerItem(68, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(211, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);

        Azan_Button = new QPushButton(centralwidget);
        Azan_Button->setObjectName("Azan_Button");
        Azan_Button->setMinimumSize(QSize(0, 61));
        Azan_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}"));

        horizontalLayout_3->addWidget(Azan_Button);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(91, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_3);

        Ibrahim_Button = new QPushButton(centralwidget);
        Ibrahim_Button->setObjectName("Ibrahim_Button");
        Ibrahim_Button->setMinimumSize(QSize(191, 61));
        Ibrahim_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 40pt \"Britannic\";\n"
"}"));

        horizontalLayout_3->addWidget(Ibrahim_Button);

        horizontalSpacer_8 = new QSpacerItem(68, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(668, 22, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Exit = new QPushButton(centralwidget);
        Exit->setObjectName("Exit");
        Exit->setMinimumSize(QSize(101, 31));
        Exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(Exit);


        verticalLayout->addLayout(horizontalLayout_2);

        Selection->setCentralWidget(centralwidget);

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QMainWindow *Selection)
    {
        Selection->setWindowTitle(QCoreApplication::translate("Selection", "Selection", nullptr));
        Ttile->setText(QCoreApplication::translate("Selection", "Past Paper App", nullptr));
        User_Button->setText(QCoreApplication::translate("Selection", "User", nullptr));
        Admin_Button->setText(QCoreApplication::translate("Selection", "Admin", nullptr));
        pushButton->setText(QCoreApplication::translate("Selection", "Made By:", nullptr));
        Azan_Button->setText(QCoreApplication::translate("Selection", "Azan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Selection", "and", nullptr));
        Ibrahim_Button->setText(QCoreApplication::translate("Selection", "Ibrahim", nullptr));
        Exit->setText(QCoreApplication::translate("Selection", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
