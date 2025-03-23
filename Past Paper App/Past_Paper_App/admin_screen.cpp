#include "admin_screen.h"
#include "ui_admin_screen.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QDebug> // For debugging purposes

Admin_Screen::Admin_Screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_Screen)
{
    ui->setupUi(this);

    // Connect the Upload_Button's clicked signal to the on_Upload_Button_clicked slot
    connect(ui->Upload_Button, &QPushButton::clicked, this, &Admin_Screen::on_Upload_Button_clicked);
}

Admin_Screen::~Admin_Screen()
{
    delete ui;
}

void Admin_Screen::on_Back_Button_clicked()
{
    emit Back_Button_Is_Pressed();
    close();
}

void Admin_Screen::on_Exit_Button_clicked()
{
    close();
}

// Implement the slot for file upload and copy
void Admin_Screen::on_Upload_Button_clicked()
{
    // Open a file dialog to select a document
    QString fileName = QFileDialog::getOpenFileName(this, "Select Document", "", "Text Files (*.txt);;All Files (*)");

    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "No file selected", "No document was selected.");
        return; // Return immediately to avoid reopening the file dialog
    }

    // Specify the directory where you want to copy the file
    QString destinationDir = "C:/Users/Hajra Hai/Desktop/Past Paper App/Past_Paper_App/Past Papers/";

    // Ensure the destination directory exists
    QDir dir;
    if (!dir.exists(destinationDir)) {
        if (!dir.mkpath(destinationDir)) {
            QMessageBox::warning(this, "Error", "Failed to create destination directory.");
            return;
        }
    }

    // Create the full destination path (including the file name)
    QString destinationPath = destinationDir + QFileInfo(fileName).fileName();

    // Debugging: Show the paths
    qDebug() << "Source file: " << fileName;
    qDebug() << "Destination path: " << destinationPath;

    // Try to copy the file to the new location
    if (QFile::copy(fileName, destinationPath)) {
        QMessageBox::information(this, "File Copied", "The file has been successfully copied to: " + destinationPath);
    } else {
        QMessageBox::warning(this, "Error", "Failed to copy the file. Please check file permissions.");
    }
}
