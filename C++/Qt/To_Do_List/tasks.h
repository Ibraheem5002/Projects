#ifndef TASKS_H
#define TASKS_H

#include <QMainWindow>

namespace Ui {
class Tasks;
}

class Tasks : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tasks(QWidget *parent = nullptr);
    void show_window();
    ~Tasks();

private:
    Ui::Tasks *ui;
    void Updata_Table();

signals:
    void Back_Button_Pressed();
private slots:
    void on_Back_Button_clicked();
    void on_Add_Button_clicked();
    void on_Delete_Button_clicked();
    void on_ChStatus_Button_clicked();
};

#endif // TASKS_H
