#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <vector>

#include "algorithms.h"
#include "tasks.h"

template <class Iter>
void var_8_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    task::task1(first1, last1);
    std::cout << std::endl;
    task::task1(first2, last2);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //int array[10]{0, 0, 0, 0, 0, 1, 2, 3, 4, 5};
    //std::vector<int> v1{1, 1, 2, 2, 3};
    //std::vector<int> v2{1, 1, 2, 2, 3};
    auto array = new int[5]{1, 1, 2, 2, 3};
    auto array1 = new int[5]{1, 1, 2, 2, 3};
    std::cout << " Task 1: " << std::endl;
    var_8_1(array, array + 5, array1, array1 + 5);
    std::cout << std::endl;
    std::cout << std::endl;






    std::cout << " Task 2: " << std::endl;
    std::cout << std::endl;
    int column = 0;
    int row = 0;
    int counter = 0;
    std::cout << "row: " << std::endl;
    std::cin >> row;
    std::cout << "col: " << std::endl;
    std::cin >> column;
    int m[column][row];
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            std::cout << "elements: " << " ";
            std::cin >> m[i][j];
        }
    }

    std::vector<int> v{};
    //int size = 0;
    //int* result = new int[size];
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            if(m[i][j] % 3 == 0)
            {
                v.push_back(m[i][j]);
                //++result[m[i][j]];
                ++counter;
            }
        }
    }
    std::cout << "new array: ";
            std::for_each(v.begin(), v.end(), [](int& a){std::cout << a << " ";});
            std::cout << std::endl;
            std::cout << "counter: " << counter << std::endl;








    //int m1[2][2]{{1, 3}, {3, 2}};
    //std::cout << std::endl;
    //std::cout << "Task 12:" << std::endl;
    //std::cout << task::task12(m1, 2, 2, 1) << std::endl;

    /*int m1[3][3]{{6, 1, 3},
                 {7, 3, 19},
                 {1, 5, 8}};
    std::cout << task::task9_2(m1, 3, 3) << std::endl;*/
    return a.exec();
}
