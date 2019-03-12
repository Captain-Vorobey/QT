#ifndef TASKS_H
#define TASKS_H
#include <iostream>
#include <vector>
#include "algorithms.h"

using Pair = std::pair<int, int>;

namespace loops {

template <class Iterator>
void task(Iterator first, Iterator last)
{
    auto min_el = *stu::min_element(first, last);
    std::cout << min_el << std::endl;
    auto min_q = stu::count(first, last, min_el);
    std::cout << min_q << std::endl;
    stu::for_each(first, last, [min_q](int& v){v = v * min_q;});
}

template <class Matrix>
Pair count_values(Matrix m, int column, int row)
{
    Pair result{0, 0};
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            if(m[i][j] == 0)
            {
               ++result.first;
            }

            if(m[i][j] == 1)
            {
               ++result.second;
            }
        }
    }
    return result;
}

template <class Matrix>
int values_3(Matrix m, int column, int row)
{
    std::vector<int> v1;
    //int counter = 0;
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j != row; ++j)
        {
            if(m[i][j] % 3 == 0)
            {
                v1.push_back(m[i][j]);
                //++counter;
            }
        }
    }

    stu::for_each(v1.begin(), v1.end(), [](int a){std::cout << a << std::endl;});
    unsigned int temp = std::count_if(v1.begin(), v1.end(), [](int a){return a % 3 == 0;});
    return temp;
}

}

#endif // TASKS_H
