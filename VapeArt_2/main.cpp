#include <QCoreApplication>
#include <iostream>

#include "device_components.h"

class Device
{

public:
    BoxMod box_mod;
    Battery baterry;
    Atomizer atomizer;
    Tank tank
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
