#include "authentication.h"
#include "ui_authentication.h"
#include "selection.h"

#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>
#include <QVector>

int Incorrect_Num;
bool Is_Password_Correct = 0;

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

    // QString Password;

    if (File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QVector <QString> Inputs;
        QTextStream line(&File);

        while(!line.atEnd())
        {
            Inputs.push_back(line.readLine());
        }

        for (int i = 0; i < Inputs.size(); i++)
        {
            if (Entered == Inputs[i])
            {
                Is_Password_Correct = 1;
                break;
            }
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","Failed To Obtain the Password from the Database");
    }

    if (Is_Password_Correct == 1)
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

