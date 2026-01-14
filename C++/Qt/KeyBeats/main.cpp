#include "drums.h"
#include "edm.h"
#include "mainwindow.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow MW;

    MW.show();

    return a.exec();
}
