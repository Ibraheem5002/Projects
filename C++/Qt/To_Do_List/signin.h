#ifndef SIGNIN_H
#define SIGNIN_H

#include "loginscreen.h"

#include <QMainWindow>
#include <QString>

namespace Ui {
class SignIn;
}

class SignIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    void show_window();
    QString getUsername();
    ~SignIn();

private:
    Ui::SignIn *ui;
    LogInScreen LIS;

signals:
    void Log_In_Succesfull();
    void Back_Button_Pressed();

private slots:
    void on_Back_Button_clicked();
    void on_Eye_Button_toggled(bool checked);
    void on_LogIn_Button_clicked();
};

#endif // SIGNIN_H
