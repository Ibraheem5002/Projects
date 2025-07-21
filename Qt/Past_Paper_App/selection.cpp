#include "selection.h"
#include "ui_selection.h"
#include "admin_screen.h"
#include "user_screen.h"
#include "authentication.h"

#include <QDesktopServices>
#include <QUrl>

bool Lock_Ad_Button = 0;

Selection::Selection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Selection)
{
    ui->setupUi(this);
}

Selection::~Selection()
{
    delete ui;
}

void Selection::on_Admin_Button_clicked()
{
    if (Lock_Ad_Button == 0)
    {
        emit Admin_Button_Is_Clicked();
    }
}

void Selection::on_User_Button_clicked()
{
    emit User_Button_Is_Clicked();
    close();
}

void Selection::show_window()
{
    show();
}

void Selection::on_Exit_clicked()
{
    close();
}

void Selection::Lock_Admin_Button()
{
    Lock_Ad_Button = 1;
}

void Selection::on_Ibrahim_Button_clicked()
{
    QUrl url("https://github.com/Ibraheem5002");
    QDesktopServices::openUrl(url);
}

void Selection::on_Azan_Button_clicked()
{
    QUrl url("https://github.com/azan6155");
    QDesktopServices::openUrl(url);
}
