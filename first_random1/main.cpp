#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
#include <vector>
#include <cstddef>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> vec(100);
    std::iota(vec.begin(), vec.end(),0);
    //std::shuffle(vec.begin(), vec.end(), std::mt19937{std::random_device{}()});
    std::mt19937 gen{std::random_device()()};
    std::uniform_int_distribution<int> uid(0, 10000);
    std::generate(vec.begin(), vec.end(), [&uid, &gen](){return uid(gen);});
    std::for_each(vec.begin(), vec.end(), [](int a){std::cout << a << " ";});
    return a.exec();
}


