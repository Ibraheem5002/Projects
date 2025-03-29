#include "selection.h"
#include "admin_screen.h"
#include "user_screen.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Selection S;
    Admin_Screen AS;
    User_Screen US;

    S.show();

    // Admin -> Selection
    QObject::connect(&AS, Admin_Screen::Back_Button_Is_Clicked, [&]()
    {
        S.show();
    } );

    // Selection -> Admin
    QObject::connect(&S, Selection::Admin_Button_Is_Clicked, [&] ()
    {
        AS.show_window();
    } );

    // Selection -> User
    QObject::connect(&S, Selection::User_Button_Is_Clicked, [&] ()
    {
        US.show_window();
    } );

    // User -> Selection
    QObject::connect(&US, User_Screen::Back_Button_Is_Clicked, [&] ()
    {
        S.show();
    } );

    return a.exec();
}
