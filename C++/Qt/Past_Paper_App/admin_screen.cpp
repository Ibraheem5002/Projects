#include "admin_screen.h"
#include "ui_admin_screen.h"
#include "selection.h"

#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QFileInfoList>
#include <QFileInfo>
#include <QString>
#include <QInputDialog>
#include <QFile>
#include <QMessageBox>

QString Chosen_Subject_Path;
QString Chosen_Subject;

Admin_Screen::Admin_Screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_Screen)
{
    ui->setupUi(this);

}

void Admin_Screen::show_window()
{
    show();

    ui->Subject_Choosing->clear();

    ui->Subject_Choosing->addItem("Choose A Subject");

    Chosen_Subject = "Choose A Subject";

    QDir Dir = (QCoreApplication::applicationDirPath() + "/Past Papers/");

    QFileInfoList Folders = Dir.entryInfoList(QDir::AllDirs | QDir::NoDotAndDotDot);

    foreach (QFileInfo var, Folders)
    {
        ui->Subject_Choosing->addItem(var.fileName(), var.absoluteFilePath() );
    }
}

Admin_Screen::~Admin_Screen()
{
    delete ui;
}

void Admin_Screen::on_Back_Button_clicked()
{
    emit Back_Button_Is_Clicked();
    close();
}


void Admin_Screen::on_Exit_Button_clicked()
{
    close();
}


void Admin_Screen::on_Upload_Button_clicked()
{
    if (Chosen_Subject == "Choose A Subject")
    {
        QMessageBox::information(this,"Error","No Subject Chosen");
    }
    else
    {
        QString File_Path = QFileDialog::getOpenFileName(this, "Select a Document for Uploading", QDir::homePath(), "Documents (*.pdf)");
        QString File_Name = QFileInfo(File_Path).fileName();
        QString Destination_Path = Chosen_Subject_Path + "/" + File_Name;

        if (QFile::copy(File_Path, Destination_Path) )
        {
            QMessageBox::information(this,"Uploading File","File Uploaded Successfully");
        }
        else
        {
            QMessageBox::information(this, "Uploading File.", "Failed To Upload The File");
        }
    }
}


void Admin_Screen::on_Subject_Choosing_textActivated(const QString &KeyWord)
{
    Chosen_Subject = ui->Subject_Choosing->currentText();

    if (KeyWord != "Choose A Subject")
    {
        Chosen_Subject_Path = ui->Subject_Choosing->currentData().toString();
        Chosen_Subject = KeyWord;
    }
}


void Admin_Screen::on_New_Subject_clicked()
{
    QDir Dir = (QCoreApplication::applicationDirPath() + "/Past Papers/");

    QString New_Subject = QInputDialog::getText(this, "New Subject", "Enter the name of the new subject:");

    if (New_Subject != nullptr)
    {
        Dir.mkpath(QCoreApplication::applicationDirPath() + "/Past Papers/" + New_Subject);

        QString New_Path = QCoreApplication::applicationDirPath() + "/Past Papers/" + New_Subject;

        ui->Subject_Choosing->addItem(New_Subject, New_Path);
    }
    else
    {
        QMessageBox::warning(this,"Error","You did not entered a name");
    }
}


void Admin_Screen::on_Delete_Button_clicked()
{
    QDir Dir = (QCoreApplication::applicationDirPath() + "/Past Papers/");

    QString Folder_Path, File;

    if (Chosen_Subject == "Choose A Subject")
    {
        Folder_Path = Dir.absolutePath();
    }
    else
    {
        QString Folder = ui->Subject_Choosing->currentText();
        Folder_Path = Dir.absolutePath() + "/" + Folder;
    }

    File = QFileDialog::getOpenFileName(this,"Select a Document for Deleting",Folder_Path,"Documents (*.pdf)");

    if (File.isEmpty())
    {
        QMessageBox::information(this,"Deleting File","Failed to Delete File");
    }
    else
    {
        QMessageBox::StandardButton Reply;
        Reply = QMessageBox::question(this,"Confirmation","Are You Sure You Want to Delete the following file: " + File);

        if (Reply==QMessageBox::Yes)
        {
            QFile::remove(File);
            QMessageBox::information(this,"Deleting File","File Deleted Successfully");
        }
        else
        {
            QMessageBox::information(this,"Deleting File","Failed to Delete File");
        }
    }


}

