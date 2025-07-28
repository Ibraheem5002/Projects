#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "drums.h"
#include "edm.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Drums D;

signals:
    void Drum_Button_Is_Clicked();
private slots:
    void on_Drum_Button_clicked();
};

#endif // MAINWINDOW_H
