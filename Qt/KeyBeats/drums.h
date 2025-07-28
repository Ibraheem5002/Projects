#ifndef DRUMS_H
#define DRUMS_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include <QSoundEffect>
#include <QTextBlock>
#include <QMessageBox>
#include <QDir>
#include <QDebug>

#include "ui_drums.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Drums;
}
QT_END_NAMESPACE

class Drums : public QMainWindow
{
    Q_OBJECT

public:
    Drums(QWidget *parent = nullptr);
    ~Drums();

private:
    Ui::Drums *ui;
    void keyPressEvent(QKeyEvent *event) override;

    QSoundEffect Drum1;
    QSoundEffect Drum2;
    QSoundEffect Drum3;
    QSoundEffect Drum4;
    QSoundEffect Drum5;
    QSoundEffect Drum6;
    QSoundEffect Drum7;
    QSoundEffect Drum8;
    QSoundEffect Drum9;

private slots:
    void on_Button_1_pressed();
    void on_Button_2_pressed();
    void on_Button_3_pressed();
    void on_Button_4_pressed();
    void on_Button_5_pressed();
    void on_Button_6_pressed();
    void on_Button_7_pressed();
    void on_Button_8_pressed();
    void on_Button_9_pressed();

public slots:
    void show_window();
};
#endif // DRUMS_H
