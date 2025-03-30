#include "selection.h"
#include "ui_selection.h"
#include "admin_screen.h"
#include "user_screen.h"


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
    emit Admin_Button_Is_Clicked();
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

