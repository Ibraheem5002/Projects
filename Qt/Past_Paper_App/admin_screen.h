#ifndef ADMIN_SCREEN_H
#define ADMIN_SCREEN_H

#include "selection.h"

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

public slots:
    void show_window();

private slots:
    void on_Back_Button_clicked();

    void on_Exit_Button_clicked();

    void on_Upload_Button_clicked();

    void on_Subject_Choosing_textActivated(const QString &arg1);

    void on_New_Subject_clicked();

    void on_Delete_Button_clicked();

signals:
    void Back_Button_Is_Clicked();

};


#endif // ADMIN_SCREEN_H
