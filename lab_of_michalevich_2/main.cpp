#include <QCoreApplication>
#include <iostream>
#include <test.h>
#include <map>
#include <string>
#include <functional>

int main(int argc, char *argv[])
{
    std::function<int(int, int)> sum = [](int a, int b){return a + b;};
    QCoreApplication a(argc, argv);
    std::map<std::string, long long int> people_and_bird{{"Egor", 802900000000}};
    //std::cout << people_and_bird["Egor"];
    std::cout << sum(1, 2) << std::endl;
    test();
    return a.exec();
}
