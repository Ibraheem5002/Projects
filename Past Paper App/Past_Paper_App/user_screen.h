#ifndef USER_SCREEN_H
#define USER_SCREEN_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class User_Screen;
}

class User_Screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_Screen(QWidget *parent = nullptr);
    ~User_Screen();

protected:
    void showEvent(QShowEvent *event) override;  // Auto-refresh files when shown

signals:
    void Back_Button_Is_Pressed();

private slots:
    void on_Back_Button_clicked();
    void onFileClicked(QListWidgetItem *item);

    void on_Exit_Button_clicked();

private:
    Ui::User_Screen *ui;
    void List_Files();
};

#endif // USER_SCREEN_H
