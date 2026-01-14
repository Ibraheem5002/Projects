#include "edm.h"
#include "ui_edm.h"

EDM::EDM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EDM)
{
    ui->setupUi(this);
}

EDM::~EDM()
{
    delete ui;
}

void EDM::show_window()
{
    this->show();
}

void EDM::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_Z:
            ui->Button_1->setDown(true);
            QTimer::singleShot(50,[=]() {
                ui->Button_1->setDown(false);
            });
            // on_Button_1_pressed();
            break;

        case Qt::Key_X:
            ui->Button_2->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_2->setDown(false);
            });
            // on_Button_2_pressed();
            break;
        case Qt::Key_C:
            ui->Button_3->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_3->setDown(false);
            });
            // on_Button_3_pressed();
            break;

        case Qt::Key_A:
            ui->Button_4->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_4->setDown(false);
            });
            // on_Button_4_pressed();
            break;

        case Qt::Key_S:
            ui->Button_5->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_5->setDown(false);
            });
            // on_Button_5_pressed();
            break;

        case Qt::Key_D:
            ui->Button_6->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_6->setDown(false);
            });
            // on_Button_6_pressed();
            break;

        case Qt::Key_Q:
            ui->Button_7->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_7->setDown(false);
            });
            // on_Button_7_pressed();
            break;

        case Qt::Key_W:
            ui->Button_8->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_8->setDown(false);
            });
            // on_Button_8_pressed();
            break;

        case Qt::Key_E:
            ui->Button_9->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_9->setDown(false);
            });
            // on_Button_9_pressed();
            break;
    }
}
