#include "mainwindow.h"
#include "wareform.h"
#include "signin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    return a.exec();
}
