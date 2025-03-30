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

public slots:
    void show_window();

private slots:
    void on_Back_Button_clicked();

    void on_Exit_Button_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_Search_Bar_textChanged(const QString &arg1);

private:
    Ui::User_Screen *ui;

signals:
    void Back_Button_Is_Clicked();
};

#endif // USER_SCREEN_H
