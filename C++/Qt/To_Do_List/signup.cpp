#include "signup.h"
#include "ui_signup.h"
#include "global.h"

#include <QDir>
#include <QMessageBox>
#include <QTextStream>

signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::show_window()
{
    this->show();
    ui->username_input->clear();
    ui->username_input->setEchoMode(QLineEdit::Normal);
    ui->password_input->clear();
    ui->password_input->setEchoMode(QLineEdit::Password);
    ui->Eye_Button->setCheckable(true);

    global G;
}

void signup::on_Back_Button_clicked()
{
    emit Back_Button_Pressed();
    this->close();
}


void signup::on_Eye_Button_toggled(bool showPassword)
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

QString signup::getUsername()
{
    QString Uname = ui->username_input->text();
    return Uname;
}

void signup::on_LogIn_Button_clicked()
{
    bool AccountFound = 0;

    QString Uname = ui->username_input->text();
    QString Pass = ui->password_input->text();
    QString line1,line2;

    QDir Dir(QCoreApplication::applicationDirPath() + "/Files/");
    QString File_Path = Dir.filePath("accounts.txt");
    QFile File(File_Path);
    QTextStream in(&File);

    if (File.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        while(!in.atEnd())
        {
            line1 = in.readLine();
            line2 = in.readLine();

            if (Uname == line1)
            {
                AccountFound = 1;
                QMessageBox::warning(this,"Error","Account with same Username exits");
                break;
            }
        }

        if (AccountFound == 0)
        {
            in << Uname << Qt::endl;
            in << Pass << Qt::endl;

            G.setUname(Uname);

            File.close();

            emit Account_Created_Successfully();
            this->close();
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","Failed to get accounts file");
    }
}

