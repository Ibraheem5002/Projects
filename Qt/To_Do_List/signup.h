#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    void show_window();
    QString getUsername();
    ~signup();

private:
    Ui::signup *ui;

signals:
    void Back_Button_Pressed();
    void Account_Created_Successfully();
private slots:
    void on_Back_Button_clicked();
    void on_Eye_Button_toggled(bool checked);
    void on_LogIn_Button_clicked();
};

#endif // SIGNUP_H
