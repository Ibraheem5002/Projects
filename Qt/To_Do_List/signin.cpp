#include "signin.h"
#include "ui_signin.h"
#include "global.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

SignIn::SignIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::show_window()
{
    this->show();
    ui->username_input->clear();
    ui->username_input->setEchoMode(QLineEdit::Normal);
    ui->password_input->clear();
    ui->password_input->setEchoMode(QLineEdit::Password);
    ui->Eye_Button->setCheckable(true);

    global G;
}

void SignIn::on_Back_Button_clicked()
{
    emit Back_Button_Pressed();
    this->close();
}

void SignIn::on_Eye_Button_toggled(bool showPassword)
{
    if (showPassword == 0)
    {
        ui->password_input->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->password_input->setEchoMode(QLineEdit::Normal);
    }
}

void SignIn::on_LogIn_Button_clicked()
{
    bool AccountFound = 0;

    QString Uname = ui->username_input->text();
    QString Pass = ui->password_input->text();
    QString line1, line2;

    QDir Dir(QCoreApplication::applicationDirPath() + "/Files/");
    QString File_Path = Dir.filePath("accounts.txt");
    QFile File(File_Path);
    QTextStream in(&File);

    if (File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!in.atEnd())
        {
            line1 = in.readLine();
            line2 = in.readLine();

            if (Uname == line1 && Pass == line2)
            {
                AccountFound = 1;
                G.setUname(Uname);
                emit Log_In_Succesfull();
                this->close();
                break;
            }
        }

        if (AccountFound == 0)
        {
            QMessageBox::warning(this,"Error","Invalid Credentials");
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","Failed to get accounts file");
    }
}

