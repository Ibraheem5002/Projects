#ifndef SELECTION_H
#define SELECTION_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class Selection;
}
QT_END_NAMESPACE

class Selection : public QMainWindow
{
    Q_OBJECT

public:
    Selection(QWidget *parent = nullptr);
    ~Selection();

private slots:
    void on_Admin_Button_clicked();

    void on_User_Button_clicked();

    void on_Exit_clicked();

public slots:
    void show_window();

signals:
    void Admin_Button_Is_Clicked();
    void User_Button_Is_Clicked();

private:
    Ui::Selection *ui;

};
#endif // SELECTION_H
