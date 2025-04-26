#include "authentication.h"
#include "ui_authentication.h"
#include "selection.h"

#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>

int Incorrect_Num;

Authentication::Authentication(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Authentication)
{
    ui->setupUi(this);
}

void Authentication::show_window()
{
    show();
    ui->lineEdit->clear();
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    Incorrect_Num = 0;
}

QString Entered;

Authentication::~Authentication()
{
    delete ui;
}

void Authentication::on_Cancel_Button_clicked()
{
    close();
}


void Authentication::on_lineEdit_textChanged(const QString &KeyWord)
{
    Entered = KeyWord;
}


void Authentication::on_lineEdit_textEdited(const QString &KeyWord) {}


void Authentication::on_Ok_Button_clicked()
{
    QDir Dir(QCoreApplication::applicationDirPath() + "/Extras/");
    QString File_Path = Dir.filePath("password.txt");
    QFile File(File_Path);

    QString Password;

    if (File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream line(&File);
        Password = line.readLine();
    }
    else
    {
        QMessageBox::warning(this,"Error","Failed To Obtain the Password from Database");
    }

    if (Password == Entered)
    {
        emit Password_Is_Correct();
        close();
    }
    else
    {
        QMessageBox::warning(this,"Error","Incorrect Password");
        ui->lineEdit->clear();
        Incorrect_Num++;

        if (Incorrect_Num >= 3)
        {
            emit Lock_Admin_Button();
            QMessageBox::warning(this,"Error","Too Many Incorrect Options\nYou have been locked from Admin");
            close();
        }
    }
}

void Authentication::on_Eye_Button_toggled(bool showPassword)
{
    if (showPassword == 0)
    {
        ui->lineEdit->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->lineEdit->setEchoMode(QLineEdit::Normal);
    }
}

