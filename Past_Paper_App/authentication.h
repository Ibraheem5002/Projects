#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QDialog>

namespace Ui {
class Authentication;
}

class Authentication : public QDialog
{
    Q_OBJECT

public:
    explicit Authentication(QWidget *parent = nullptr);
    ~Authentication();

private slots:
    void on_Cancel_Button_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_textEdited(const QString &arg1);

    void on_Ok_Button_clicked();

    void on_Eye_Button_toggled(bool checked);

private:
    Ui::Authentication *ui;

signals:
    void Password_Is_Correct();
    void Lock_Admin_Button();

public slots:
    void show_window();
};

#endif // AUTHENTICATION_H
