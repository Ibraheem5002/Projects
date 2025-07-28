#include "loginscreen.h"
#include "ui_loginscreen.h"

LogInScreen::LogInScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogInScreen)
{
    ui->setupUi(this);
}

LogInScreen::~LogInScreen()
{
    delete ui;
}

void LogInScreen::on_pushButton_clicked()
{
    emit Log_In_Button_Pressed();
    this->close();
}

void LogInScreen::on_pushButton_2_clicked()
{
    emit Sign_Up_Button_Pressed();
    this->close();
}

