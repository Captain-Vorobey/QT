#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>
#include "tasks.h"

using Pair = std::pair<int, int>;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //int array[10]{0, 0, 0, 0, 0, 1, 2, 3, 4, 5};
    std::vector<int> v{0, 0, 0, 0, 0, 1, 2, 3, 4, 5};
    //loops::task(array, array + 10);
    std::cout << " Task 1: " << std::endl;
    loops::task(v.begin(), v.end());
    stu::for_each(v.begin(), v.end(), [](int v){std::cout << v << " ";});
    std::cout << " End." << std::endl;
    std::cout << " " << std::endl;

    auto matrix = new int[2][2]{{30, 12}, {33, 3}};
    std::cout << " Task 2: " << std::endl;
    std::cout << loops::values_3(matrix, 2, 2) << std::endl;
    //std::cout << stu::count(v1.begin(), v1.end(), values_3) << std::endl;
    std::cout << " End." << std::endl;
    /*Pair result = loops::count_values(arr, 2, 2);
    std::cout << std::endl;
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;*/
    return a.exec();
}
