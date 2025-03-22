#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Admin_Button_clicked()
{
    emit Admin_Button_Is_Clicked();
    close();
}


void MainWindow::on_User_Button_clicked()
{
    emit User_Button_Is_Clicked();
    close();
}


void MainWindow::on_Exit_Button_clicked()
{
    close();
}

