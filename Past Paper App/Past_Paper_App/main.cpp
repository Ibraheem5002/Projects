#include "mainwindow.h"
#include "admin_screen.h"
#include "user_screen.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    // Forms and Pages
    QApplication a(argc, argv);
    MainWindow w;
    Admin_Screen AS;
    User_Screen US;

    w.show();

    // Admin Button
    QObject::connect(&w, MainWindow::Admin_Button_Is_Clicked, [&]()
    {
        AS.show();
    } );

    // User Button
    QObject::connect(&w, MainWindow::User_Button_Is_Clicked, [&]()
    {
        US.show();
    } );

    // Admin.Back Button
    QObject::connect(&AS, Admin_Screen::Back_Button_Is_Pressed, [&]()
    {
        w.show();
    } );

    // User.Back Button
    QObject::connect(&US, User_Screen::Back_Button_Is_Pressed, [&]()
    {
        w.show();
    } );

    // end
    return a.exec();
}
