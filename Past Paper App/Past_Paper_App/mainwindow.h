#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin_screen.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Admin_Button_clicked();

    void on_User_Button_clicked();

    void on_Exit_Button_clicked();

private:
    Ui::MainWindow *ui;

signals:
    void Admin_Button_Is_Clicked();
    void User_Button_Is_Clicked();
};
#endif // MAINWINDOW_H
