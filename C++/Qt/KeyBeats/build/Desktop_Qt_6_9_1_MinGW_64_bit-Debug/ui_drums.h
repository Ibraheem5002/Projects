/********************************************************************************
** Form generated from reading UI file 'drums.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUMS_H
#define UI_DRUMS_H

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

class Ui_Drums
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;

    void setupUi(QMainWindow *Drums)
    {
        if (Drums->objectName().isEmpty())
            Drums->setObjectName("Drums");
        Drums->resize(500, 500);
        Drums->setStyleSheet(QString::fromUtf8("background: rgb(22, 22, 22)"));
        centralwidget = new QWidget(Drums);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(225, 65));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(22, 22, 22);\n"
"	border:none;\n"
"	color:white;\n"
"	\n"
"	font: 700 35pt \"Segoe UI\";\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(278, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 96, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        Button_7->setMinimumSize(QSize(100, 100));
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: rgb(0, 255, 255);\n"
"    color: black;\n"
"    font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background: rgb(0, 177, 177);\n"
"    color: black;\n"
"    font: 26pt \"Segoe UI\";\n"
"}\n"
""));

        gridLayout->addWidget(Button_7, 0, 0, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        Button_8->setMinimumSize(QSize(100, 100));
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(35, 255, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(28, 185, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_8, 0, 1, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        Button_9->setMinimumSize(QSize(100, 100));
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(255, 255, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(159, 159, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_9, 0, 2, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        Button_4->setMinimumSize(QSize(100, 100));
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(255,0, 255);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(177, 0, 177);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_4, 1, 0, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        Button_5->setMinimumSize(QSize(100, 100));
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(0,128,255);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(0,89,177);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_5, 1, 1, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        Button_6->setMinimumSize(QSize(100, 100));
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(255, 128, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(185, 92, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_6, 1, 2, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        Button_1->setMinimumSize(QSize(100, 100));
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(128,0,255);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(89,0,177);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_1, 2, 0, 1, 1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        Button_2->setMinimumSize(QSize(100, 100));
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(0,255,128);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(0, 177, 89);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_2, 2, 1, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        Button_3->setMinimumSize(QSize(100, 100));
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background: rgb(255, 0, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background: rgb(177, 0, 0);\n"
"	color: black;\n"
"	font: 26pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Button_3, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Drums->setCentralWidget(centralwidget);

        retranslateUi(Drums);

        QMetaObject::connectSlotsByName(Drums);
    } // setupUi

    void retranslateUi(QMainWindow *Drums)
    {
        Drums->setWindowTitle(QCoreApplication::translate("Drums", "Drums", nullptr));
        pushButton->setText(QCoreApplication::translate("Drums", "Drums", nullptr));
        Button_7->setText(QCoreApplication::translate("Drums", "(7) Ride", nullptr));
        Button_8->setText(QCoreApplication::translate("Drums", "(8) Snare", nullptr));
        Button_9->setText(QCoreApplication::translate("Drums", "(9) Tom", nullptr));
        Button_4->setText(QCoreApplication::translate("Drums", "(4) HitHat", nullptr));
        Button_5->setText(QCoreApplication::translate("Drums", "(5) Kick", nullptr));
        Button_6->setText(QCoreApplication::translate("Drums", "(6) Open", nullptr));
        Button_1->setText(QCoreApplication::translate("Drums", "(1) Clap", nullptr));
        Button_2->setText(QCoreApplication::translate("Drums", "(2) Crash", nullptr));
        Button_3->setText(QCoreApplication::translate("Drums", "(3) Fill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Drums: public Ui_Drums {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUMS_H
