#include "chiffoumi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chifoumi w;
    w.show();
    return a.exec();
}
