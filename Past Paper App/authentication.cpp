#include "authentication.h"
#include "ui_authentication.h"

#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTextStream>

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
    }
}

