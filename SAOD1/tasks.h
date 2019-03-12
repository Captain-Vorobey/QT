#ifndef TASKS_H
#define TASKS_H
#include <iostream>
#include <vector>
#include <cmath>

#include "algorithms.h"
#include <algorithm>
#include "predicates.h"

namespace task {

template <class Iterator>
void task1(Iterator first, Iterator last)
{
    auto min_el = *stu::min_element(first, last);
    auto min_q = stu::count(first, last, min_el);
    stu::for_each(first, last, [min_q](int& v){v = v * min_q;});
    std::for_each(first, last, [](int a){std::cout << a << " " ;});
}
/*
template <class Iterator>
void task1(Iterator first, Iterator last)
{
    auto min_el = *stu::min_element(first, last);
    auto bin_search = stu::binary_search(first, last, min_el);
    stu::for_each(first, last, [bin_search](int& v){v = v * bin_search;});
    std::for_each(first, last, [](int a){std::cout << a << " " ;});
}*/

template <class Matrix>
int task2(Matrix m, int column, int row)
{
    std::vector<int> v{};
    int counter = 0;
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            if(m[i][j] % 3 == 0)
            {
                v.push_back(m[i][j]);
                ++counter;
            }
        }
    }
            std::for_each(v.begin(), v.end(), [](int& a){std::cout << a << " ";});
            std::cout << std::endl;
            return counter;
}

template <class Matrix, class T>
T task12(Matrix m1, T column, T row, T n)
{
    std::vector<int> v2{};
    T counter = 0;
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            if(std::abs(m1[i][j]) > n)
            {
                ++counter;
                v2.push_back(m1[i][j]);
            }
        }
    }
    stu::for_each(v2.begin(), v2.end(), [](int& a){std::cout << a << " ";});
    return counter;
}

template <class Matrix>
int task9_2(Matrix m1, int row, int col)
{
        int sum = 0;
        for(int i = 0; i != row; ++i)
        {
            for(int j = 0; j != col; ++j)
                if(m1[i][j] % 2 == 0)
                {
                    sum += m1[i][j];
                    if(j == 0)
                    {
                        ++j;
                    }
                }
        }
    return sum;
}

}

#endif // TASKS_H
