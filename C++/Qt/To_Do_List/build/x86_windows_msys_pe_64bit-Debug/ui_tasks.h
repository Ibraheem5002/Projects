/********************************************************************************
** Form generated from reading UI file 'tasks.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKS_H
#define UI_TASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tasks
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *Table;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Back_Button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Add_Button;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Delete_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *ChStatus_Button;

    void setupUi(QMainWindow *Tasks)
    {
        if (Tasks->objectName().isEmpty())
            Tasks->setObjectName("Tasks");
        Tasks->resize(800, 600);
        Tasks->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                          stop:0 #f0f4f8, stop:1 #dbeafe);\n"
"    }\n"
"   "));
        centralwidget = new QWidget(Tasks);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 91));
        label->setStyleSheet(QString::fromUtf8("\n"
"            font: bold 36pt \"Segoe UI\";\n"
"            color: #1e3a8a;\n"
"            padding: 20px;\n"
"            background-color: #ffffff;\n"
"            border-radius: 15px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(351, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: bold 16pt \"Segoe UI\";\n"
"color: #1e3a8a;\n"
"background: transparent;\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);

        Table = new QTableWidget(centralwidget);
        if (Table->columnCount() < 2)
            Table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (Table->rowCount() < 4)
            Table->setRowCount(4);
        Table->setObjectName("Table");
        Table->setMinimumSize(QSize(781, 321));
        Table->setStyleSheet(QString::fromUtf8("\n"
"QHeaderView::section {\n"
"    background-color: #000;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 6px;\n"
"    font: bold 14pt \"Segoe UI\";\n"
"    border-bottom: 2px solid white;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: rgba(255,255,255,0.9);\n"
"    color: #222;\n"
"    gridline-color: #ccc;\n"
"    font: 14pt \"Segoe UI\";\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #eee;\n"
"    color: #000;\n"
"}\n"
"       "));
        Table->setRowCount(4);
        Table->setColumnCount(2);

        verticalLayout->addWidget(Table);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Back_Button = new QPushButton(centralwidget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setMinimumSize(QSize(131, 51));
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

        horizontalLayout_2->addWidget(Back_Button);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Add_Button = new QPushButton(centralwidget);
        Add_Button->setObjectName("Add_Button");
        Add_Button->setMinimumSize(QSize(131, 51));
        Add_Button->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(Add_Button);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Delete_Button = new QPushButton(centralwidget);
        Delete_Button->setObjectName("Delete_Button");
        Delete_Button->setMinimumSize(QSize(131, 51));
        Delete_Button->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(Delete_Button);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        ChStatus_Button = new QPushButton(centralwidget);
        ChStatus_Button->setObjectName("ChStatus_Button");
        ChStatus_Button->setMinimumSize(QSize(131, 51));
        ChStatus_Button->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(ChStatus_Button);


        verticalLayout->addLayout(horizontalLayout_2);

        Tasks->setCentralWidget(centralwidget);

        retranslateUi(Tasks);

        QMetaObject::connectSlotsByName(Tasks);
    } // setupUi

    void retranslateUi(QMainWindow *Tasks)
    {
        Tasks->setWindowTitle(QCoreApplication::translate("Tasks", "Tasks", nullptr));
        label->setText(QCoreApplication::translate("Tasks", "Tasks", nullptr));
        label_2->setText(QCoreApplication::translate("Tasks", "Welcome, User!", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tasks", "Task", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tasks", "Status", nullptr));
        Back_Button->setText(QCoreApplication::translate("Tasks", "Back", nullptr));
        Add_Button->setText(QCoreApplication::translate("Tasks", "Add", nullptr));
        Delete_Button->setText(QCoreApplication::translate("Tasks", "Delete", nullptr));
        ChStatus_Button->setText(QCoreApplication::translate("Tasks", "Change Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tasks: public Ui_Tasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKS_H
