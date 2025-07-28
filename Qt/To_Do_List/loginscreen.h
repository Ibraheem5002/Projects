#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LogInScreen;
}
QT_END_NAMESPACE

class LogInScreen : public QMainWindow
{
    Q_OBJECT

public:
    LogInScreen(QWidget *parent = nullptr);
    ~LogInScreen();

private:
    Ui::LogInScreen *ui;

signals:
    void Log_In_Button_Pressed();
    void Sign_Up_Button_Pressed();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // LOGINSCREEN_H
