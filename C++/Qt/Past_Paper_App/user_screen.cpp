#include "user_screen.h"
#include "ui_user_screen.h"
#include "selection.h"

#include <QDir>
#include <QMessageBox>
#include <QCoreApplication>
#include <QString>
#include <QFileInfoList>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QFileInfo>
#include <QStringList>

User_Screen::User_Screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::User_Screen)
{
    ui->setupUi(this);
}

QString currentFolder;

User_Screen::~User_Screen()
{
    delete ui;
}

void User_Screen::show_window()
{
    show();

    ui->listWidget->clear();

    QDir Dir(QCoreApplication::applicationDirPath() + "/Past Papers/");

    if (!Dir.exists())
    {
        Dir.mkpath(".");
    }

    currentFolder = Dir.absolutePath();

    QFileInfoList File_List = Dir.entryInfoList(QDir::AllEntries | QDir::NoDotAndDotDot);

    foreach (QFileInfo var, File_List )
    {
        if (var.isDir() )
        {
            QListWidgetItem *Item = new QListWidgetItem(QIcon(":/images/images/folder.png"), var.fileName() );

            Item->setData(Qt::UserRole, var.filePath() );
            ui->listWidget->addItem(Item);
        }
        else
        {
            QListWidgetItem *Item = new QListWidgetItem(QIcon(":/images/images/file.png"), var.fileName() );

            Item->setData(Qt::UserRole, var.filePath() );
            ui->listWidget->addItem(Item);
        }
    }
}

void User_Screen::on_Back_Button_clicked()
{
    emit Back_Button_Is_Clicked();
    close();
}

void User_Screen::on_Exit_Button_clicked()
{
    close();
}

void User_Screen::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString Path = item->data(Qt::UserRole).toString();

    currentFolder = Path;

    if (QFileInfo(Path).isFile())
    {
        QUrl File_Path = QUrl::fromLocalFile(Path);
        QDesktopServices::openUrl(File_Path);
    }
    else
    {
        ui->listWidget->clear();
        ui->Search_Bar->clear();

        QDir Sub_Dir(Path);

        currentFolder = Sub_Dir.absolutePath();

        QDir Orig_Dir(QCoreApplication::applicationDirPath() + "/Past Papers/");

        QFileInfoList File_List;

        if (Orig_Dir.absolutePath() != Sub_Dir.absolutePath())
        {
            File_List = Sub_Dir.entryInfoList(QDir::AllEntries | QDir::NoDot);
        }
        else
        {
            File_List = Sub_Dir.entryInfoList(QDir::AllEntries | QDir::NoDotAndDotDot);
        }

        foreach (QFileInfo var, File_List )
        {
            if (var.isDir() )
            {
                QListWidgetItem *Item;

                if (var.fileName() == "..")
                {
                    Item = new QListWidgetItem(QIcon(":/images/images/folder.png"), "Back" );
                }
                else
                {
                    Item = new QListWidgetItem(QIcon(":/images/images/folder.png"), var.fileName() );
                }

                Item->setData(Qt::UserRole, var.filePath() );
                ui->listWidget->addItem(Item);
            }
            else
            {
                QListWidgetItem *Item = new QListWidgetItem(QIcon(":/images/images/file.png"), var.fileName() );

                Item->setData(Qt::UserRole, var.filePath() );
                ui->listWidget->addItem(Item);
            }
        }
    }
}

void User_Screen::on_Search_Bar_textChanged(const QString &arg1)
{
    ui->listWidget->clear();

    QString KeyWord = ui->Search_Bar->text();

    QDir Dir(currentFolder);

    QFileInfoList File_List;

    if (KeyWord != "")
    {
        File_List = Dir.entryInfoList(QDir::AllEntries | QDir::NoDotAndDotDot);

        foreach (QFileInfo var, File_List)
        {
            QString file = var.fileName();

            if (file.contains(KeyWord, Qt::CaseInsensitive))
            {
                if (var.isDir())
                {
                    QListWidgetItem *Item;

                    if (var.fileName() == "..")
                    {
                        Item = new QListWidgetItem (QIcon(":/images/images/folder.png"), "Back");
                    }
                    else
                    {
                        Item = new QListWidgetItem (QIcon(":/images/images/folder.png"), var.fileName() );
                    }

                    Item->setData(Qt::UserRole, var.filePath() );
                    ui->listWidget->addItem(Item);
                }
                else
                {
                    QListWidgetItem *Item;
                    Item = new QListWidgetItem (QIcon(":/images/images/file.png"), var.fileName() );

                    Item->setData(Qt::UserRole, var.filePath() );
                    ui->listWidget->addItem(Item);
                }
            }
        }
    }
    else
    {
        QDir Orig_Dir(QCoreApplication::applicationDirPath() + "/Past Papers/");

        if (Dir.absolutePath() != Orig_Dir.absolutePath() )
        {
            File_List = Dir.entryInfoList(QDir::AllEntries | QDir::NoDot);
        }
        else
        {
            File_List = Dir.entryInfoList(QDir::AllEntries | QDir::NoDotAndDotDot);
        }

        foreach (QFileInfo var, File_List )
        {
            if (var.isDir() )
            {
                QListWidgetItem *Item;

                if (var.fileName() == "..")
                {
                    Item = new QListWidgetItem(QIcon(":/images/images/folder.png"), "Back" );
                }
                else
                {
                    Item = new QListWidgetItem(QIcon(":/images/images/folder.png"), var.fileName() );
                }

                Item->setData(Qt::UserRole, var.filePath() );
                ui->listWidget->addItem(Item);
            }
            else
            {
                QListWidgetItem *Item = new QListWidgetItem(QIcon(":/images/images/file.png"), var.fileName() );

                Item->setData(Qt::UserRole, var.filePath() );
                ui->listWidget->addItem(Item);
            }
        }
    }
}

void User_Screen::on_listWidget_doubleClicked(const QModelIndex &index) {}

