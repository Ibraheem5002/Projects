#include "loginscreen.h"
#include "signin.h"
#include "signup.h"
#include "tasks.h"

#include <QApplication>
#include <QObject>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LogInScreen LIS;
    SignIn SI;
    signup SU;
    Tasks T;

    LIS.show();

    qDebug() << "This is a test debug." << Qt::endl;

    QObject::connect(&LIS, LogInScreen::Log_In_Button_Pressed, [&] ()
    {
        SI.show_window();
    } );

    QObject::connect(&LIS, LogInScreen::Sign_Up_Button_Pressed, [&] ()
    {
        SU.show_window();
    } );

    QObject::connect(&SI, SignIn::Back_Button_Pressed, [&] ()
    {
        LIS.show();
    } );

    QObject::connect(&SI, SignIn::Log_In_Succesfull, [&] ()
    {
        T.show_window();
    } );

    QObject::connect(&SU, signup::Back_Button_Pressed, [&] ()
    {
        LIS.show();
    } );

    QObject::connect(&SU, signup::Account_Created_Successfully, [&] ()
    {
        T.show_window();
    } );

    QObject::connect(&T, Tasks::Back_Button_Pressed, [&] ()
    {
        LIS.show();
    } );

    return a.exec();
}
