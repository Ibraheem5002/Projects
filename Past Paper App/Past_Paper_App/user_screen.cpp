#include "user_screen.h"
#include "ui_user_screen.h"

#include <QDir>
#include <QStringList>
#include <QListWidgetItem>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

User_Screen::User_Screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::User_Screen)
{
    ui->setupUi(this);
    List_Files();  // Call function to list files

    // Connect file click event
    connect(ui->fileListWidget, &QListWidget::itemClicked, this, &User_Screen::onFileClicked);
}

User_Screen::~User_Screen()
{
    delete ui;
}

void User_Screen::List_Files()
{
    QString folderPath = "C:/Users/Hajra Hai/Desktop/Past Paper App/Past_Paper_App/Past Papers/";  // Adjust this path
    QDir directory(folderPath);

    if (!directory.exists()) {
        qDebug() << "Directory does not exist:" << folderPath;
        return;
    }

    QStringList files = directory.entryList(QDir::Files);  // Get file names
    if (files.isEmpty()) {
        qDebug() << "No files found in directory:" << folderPath;
        return;
    }

    ui->fileListWidget->clear();  // Clear previous items

    for (const QString &file : files) {
        ui->fileListWidget->addItem(new QListWidgetItem(file));
    }

    qDebug() << "Files loaded successfully!";
}

// Open file when clicked
void User_Screen::onFileClicked(QListWidgetItem *item)
{
    QString folderPath = "C:/Users/Hajra Hai/Desktop/Past Paper App/Past_Paper_App/Past Papers";  // Ensure this matches
    QString filePath = folderPath + "/" + item->text();  // Get full file path

    qDebug() << "Opening file:" << filePath;

    // Open the file using default application
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}

void User_Screen::on_Back_Button_clicked()
{
    emit Back_Button_Is_Pressed();
    close();
}

void User_Screen::showEvent(QShowEvent *event)
{
    QMainWindow::showEvent(event);  // Call parent class event
    qDebug() << "🔄 Refreshing file list...";
    List_Files();  // Reload the file list when the window is shown
}


void User_Screen::on_Exit_Button_clicked()
{
    close();
}

