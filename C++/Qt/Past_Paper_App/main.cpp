#include "selection.h"
#include "admin_screen.h"
#include "user_screen.h"
#include "authentication.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Selection S;
    Admin_Screen AS;
    User_Screen US;
    Authentication A;

    S.show();

    // Admin -> Selection
    QObject::connect(&AS, Admin_Screen::Back_Button_Is_Clicked, [&]()
    {
        S.show_window();
    } );

    // Selection -> Authentication
    QObject::connect(&S, Selection::Admin_Button_Is_Clicked, [&] ()
    {
        A.show_window();
    } );

    // Selection -> User
    QObject::connect(&S, Selection::User_Button_Is_Clicked, [&] ()
    {
        US.show_window();
    } );

    // User -> Selection
    QObject::connect(&US, User_Screen::Back_Button_Is_Clicked, [&] ()
    {
        S.show_window();
    } );

    QObject::connect(&A, Authentication::Password_Is_Correct, [&] ()
    {
        AS.show_window();
        S.close();
    } );

    QObject::connect(&A, Authentication::Lock_Admin_Button, [&] ()
    {
        S.Lock_Admin_Button();
    } );

    return a.exec();
}
