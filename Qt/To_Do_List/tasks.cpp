#include "tasks.h"
#include "ui_tasks.h"
#include "global.h"

#include <iostream>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>
#include <QInputDialog>
#include <QVector>
#include <QDebug>
using namespace std;

Tasks::Tasks(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tasks)
{
    ui->setupUi(this);
    ui->Table->setColumnWidth(0,601);
    ui->Table->setColumnWidth(1,150);
    ui->Table->setRowCount(0);
    global G;
}

QString Username;
QString Data_Path;
QFile Data;

Tasks::~Tasks()
{
    delete ui;
}

void Tasks::show_window()
{
    this->show();
    Username = G.getUname();
    ui->label_2->clear();
    ui->label_2->setText("Welcome " + Username + "!");
    ui->Table->clearContents();

    QDir Dir(QCoreApplication::applicationDirPath() + "/Files/Accounts/");
    Data_Path = Dir.filePath(Username + ".txt");
    Data.setFileName(Data_Path);

    this->Updata_Table();
}

void Tasks::Updata_Table()
{
    QFile Data1;
    Data1.setFileName(Data_Path);

    QString task, status;
    QTextStream in(&Data1);

    int row = 0;
    if (Data1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->Table->clearContents();
        ui->Table->setRowCount(0);

        while(!in.atEnd())
        {
            task = in.readLine();
            status = in.readLine();

            ui->Table->insertRow(row);

            QTableWidgetItem* taskItem = new QTableWidgetItem(task);
            taskItem->setFlags(taskItem->flags() & ~Qt::ItemIsEditable);

            QTableWidgetItem* statusItem = new QTableWidgetItem(status);
            statusItem->setFlags(statusItem->flags() & ~Qt::ItemIsEditable);

            ui->Table->setItem(row,0,taskItem);
            ui->Table->setItem(row,1,statusItem);

            row++;
        }

        Data1.close();
    }
    else
    {
        QMessageBox::warning(this,"Error","Cannot open your data file");
    }
}

void Tasks::on_Back_Button_clicked()
{
    emit Back_Button_Pressed();
    this->close();
}


void Tasks::on_Add_Button_clicked()
{
    QString task = QInputDialog::getText(this,"Add Task","Enter Your Task: ");

    if (!task.isEmpty())
    {
        // Data.open(QIODevice::WriteOnly | QIODevice::Text);

        if (Data.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream out(&Data);
            // out << Qt::endl;
            out << task << Qt::endl;
            out << "InComplete" << Qt::endl;

            Data.close();

            this->Updata_Table();
        }
        else
        {
            QMessageBox::warning(this,"Error","Cannot open file for appending");
        }
    }
}


void Tasks::on_Delete_Button_clicked()
{
    int selectedRow = -1;
    selectedRow = ui->Table->currentRow();

    if (selectedRow == -1)
    {
        QMessageBox::information(this,"Message","Please click on the row you want to Delete first");
    }
    else
    {
        QVector <QString> Tasks, Status;

        if (!Data.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::warning(this,"Error","Failed to open the Data file for reading");
        }
        else
        {
            QTextStream in(&Data);

            while(!in.atEnd())
            {
                Tasks.push_back(in.readLine());
                Status.push_back(in.readLine());
            }

            Tasks.erase(Tasks.begin() + selectedRow);
            Status.erase(Status.begin() + selectedRow);

            Data.close();
        }

        if (Data.open(QIODevice::WriteOnly | QIODevice::Truncate))
        {
            QTextStream in(&Data);
            int count = Tasks.size();

            for (int i = 0; i < count; i++)
            {
                in << Tasks[i] << Qt::endl;
                in << Status[i] << Qt::endl;
            }

            Data.close();
        }
        else
        {
            QMessageBox::warning(this,"Error","Failed to open your Data file for writing");
        }

        this->Updata_Table();
    }
}


void Tasks::on_ChStatus_Button_clicked()
{
    int selectedRow = ui->Table->currentRow();

    if (selectedRow == -1)
    {
        QMessageBox::information(this,"Message","Please click on the row you want to change first");
    }
    else
    {
        if (!Data.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::warning(this,"Error","Failed to open the Data file for reading");
            return;
        }

        QTextStream in(&Data);
        QVector<QString> Tasks, Status;

        while (!in.atEnd())
        {
            Tasks.push_back(in.readLine());
            Status.push_back(in.readLine());
        }
        Data.close();

        if (selectedRow < Status.size())
        {
            Status[selectedRow] = (Status[selectedRow] == "Complete") ? "InComplete" : "Complete";
        }

        if (Data.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
        {
            QTextStream out(&Data);
            for (int i = 0; i < Tasks.size(); ++i)
            {
                out << Tasks[i] << Qt::endl;
                out << Status[i] << Qt::endl;
            }
            Data.close();
        }
        else
        {
            QMessageBox::warning(this,"Error","Failed to write to Data file");
        }

        this->Updata_Table();
    }
}
