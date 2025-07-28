/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Drum_Button;
    QPushButton *EDM_Button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 500);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(25,25,25)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Drum_Button = new QPushButton(centralwidget);
        Drum_Button->setObjectName("Drum_Button");
        Drum_Button->setGeometry(QRect(50, 260, 151, 71));
        EDM_Button = new QPushButton(centralwidget);
        EDM_Button->setObjectName("EDM_Button");
        EDM_Button->setGeometry(QRect(260, 260, 151, 71));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Drum_Button->setText(QCoreApplication::translate("MainWindow", "Drum", nullptr));
        EDM_Button->setText(QCoreApplication::translate("MainWindow", "EDM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
