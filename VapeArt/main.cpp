#include <QCoreApplication>
#include <iostream>
#include <string>

#include "box_mod.h"
#include "vapeart.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Device first_setup(2, 1, 1, 1);
    return a.exec();
}
