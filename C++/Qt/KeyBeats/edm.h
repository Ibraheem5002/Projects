#ifndef EDM_H
#define EDM_H

#include <QMainWindow>
#include <QTimer>
#include <QKeyEvent>

namespace Ui {
class EDM;
}

class EDM : public QMainWindow
{
    Q_OBJECT

public:
    explicit EDM(QWidget *parent = nullptr);
    ~EDM();
    void show_window();

private:
    Ui::EDM *ui;
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // EDM_H
