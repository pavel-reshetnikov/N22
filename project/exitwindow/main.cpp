#include "exitwindow.h"
#include "../practic/practic.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Exitwindow w;
    w.show();
    return a.exec();
}
