#include "lib.h"
Lib::Lib()
{
}
void Lib::restart()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
