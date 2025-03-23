#ifndef ADMIN_SCREEN_H
#define ADMIN_SCREEN_H

#include <QMainWindow>

namespace Ui {
class Admin_Screen;
}

class Admin_Screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin_Screen(QWidget *parent = nullptr);
    ~Admin_Screen();

private:
    Ui::Admin_Screen *ui;

signals:
    void Back_Button_Is_Pressed();

private slots:
    void on_Back_Button_clicked();
    void on_Exit_Button_clicked();
    void on_Upload_Button_clicked(); // Declare the new slot for file upload
};

#endif // ADMIN_SCREEN_H
