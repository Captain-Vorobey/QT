#include <QCoreApplication>
#include <iostream>
#include <chrono>
#include <numeric>
#include <vector>
#include <random>

#include "sorts.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> v1{10000};
    std::iota(v1.begin(), v1.end(), 0);
    std::shuffle(v1.begin(), v1.end(), std::mt19937{std::random_device{}()});
    auto v2 = v1;
    auto v3 = v1;

    auto t1 = std::chrono::high_resolution_clock::now();
    comb(v1.begin(), v1.end());
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> msec = t2 - t1;
    std::cout << msec.count() << std::endl;

    //shell_sort(array, 16);
    auto t1_1 = std::chrono::high_resolution_clock::now();
    bubble_sort(v1.begin(), v1.end());
    auto t2_1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> msec1 = t2_1 - t1_1;
    std::cout << msec1.count() << std::endl;
    return a.exec();
}
