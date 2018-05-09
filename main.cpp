#include "mainwindow.h"
#include <QApplication>
#include <QtPlugin>

//Q_IMPORT_PLUGIN(qjpeg)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    srand(time(0));
    w.show();

    return a.exec();
}
