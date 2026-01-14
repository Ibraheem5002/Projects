#include "drums.h"
#include "ui_drums.h"

Drums::Drums(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Drums)
{
    ui->setupUi(this);

    connect(ui->Button_1, &QPushButton::pressed, this, &Drums::on_Button_1_pressed);

    QDir Dir(QCoreApplication::applicationDirPath() + "/Drums/");

    QString file_path = Dir.filePath("Clap.wav");
    Drum1.setSource(QUrl::fromLocalFile(file_path));
    Drum1.setVolume(1.0);

    file_path = Dir.filePath("Crash.wav");
    Drum2.setSource(QUrl::fromLocalFile(file_path));
    Drum2.setVolume(1.0);

    file_path = Dir.filePath("Fill.wav");
    Drum3.setSource(QUrl::fromLocalFile(file_path));
    Drum3.setVolume(1.0);

    file_path = Dir.filePath("HitHat.wav");
    Drum4.setSource(QUrl::fromLocalFile(file_path));
    Drum4.setVolume(1.0);

    file_path = Dir.filePath("Kick.wav");
    Drum5.setSource(QUrl::fromLocalFile(file_path));
    Drum5.setVolume(1.0);

    file_path = Dir.filePath("Open.wav");
    Drum6.setSource(QUrl::fromLocalFile(file_path));
    Drum6.setVolume(1.0);

    file_path = Dir.filePath("Ride.wav");
    Drum7.setSource(QUrl::fromLocalFile(file_path));
    Drum7.setVolume(1.0);

    file_path = Dir.filePath("Snare.wav");
    Drum8.setSource(QUrl::fromLocalFile(file_path));
    Drum8.setVolume(1.0);

    file_path = Dir.filePath("Tom.wav");
    Drum9.setSource(QUrl::fromLocalFile(file_path));
    Drum9.setVolume(1.0);
}

Drums::~Drums()
{
    delete ui;
}

void Drums::show_window()
{
    this->show();
}

void Drums::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_1:
            ui->Button_1->setDown(true);
            QTimer::singleShot(50,[=]() {
                ui->Button_1->setDown(false);
            });
            on_Button_1_pressed();
            break;

        case Qt::Key_2:
            ui->Button_2->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_2->setDown(false);
            });
            on_Button_2_pressed();
            break;
        case Qt::Key_3:
            ui->Button_3->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_3->setDown(false);
            });
            on_Button_3_pressed();
            break;

        case Qt::Key_4:
            ui->Button_4->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_4->setDown(false);
            });
            on_Button_4_pressed();
            break;

        case Qt::Key_5:
            ui->Button_5->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_5->setDown(false);
            });
            on_Button_5_pressed();
            break;

        case Qt::Key_6:
            ui->Button_6->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_6->setDown(false);
            });
            on_Button_6_pressed();
            break;

        case Qt::Key_7:
            ui->Button_7->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_7->setDown(false);
            });
            on_Button_7_pressed();
            break;

        case Qt::Key_8:
            ui->Button_8->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_8->setDown(false);
            });
            on_Button_8_pressed();
            break;

        case Qt::Key_9:
            ui->Button_9->setDown(true);
            QTimer::singleShot(150,[=]() {
                ui->Button_9->setDown(false);
            });
            on_Button_9_pressed();
            break;
    }
}

void Drums::on_Button_1_pressed()
{
    Drum1.stop();
    Drum1.play();
}

void Drums::on_Button_2_pressed()
{
    Drum2.stop();
    Drum2.play();
}

void Drums::on_Button_3_pressed()
{
    Drum3.stop();
    Drum3.play();
}

void Drums::on_Button_4_pressed()
{
    Drum4.stop();
    Drum4.play();
}

void Drums::on_Button_5_pressed()
{
    Drum5.stop();
    Drum5.play();
}

void Drums::on_Button_6_pressed()
{
    Drum6.stop();
    Drum6.play();
}

void Drums::on_Button_7_pressed()
{
    Drum7.stop();
    Drum7.play();
}

void Drums::on_Button_8_pressed()
{
    Drum8.stop();
    Drum8.play();
}

void Drums::on_Button_9_pressed()
{
    Drum9.stop();
    Drum9.play();
}
