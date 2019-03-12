#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <algorithm>
#include "algorithms.h"
#include <vector>

int var26_1()
{
    int array[5]{1,0,0,0,5};
    int array1[5]{1,1,0,0,2};
    auto temp = stu::binary_search(array, 0, 5, 0);
    auto res1 = stu::count(array, array + 5, temp);
    auto res2 = stu::count(array1, array1 + 5, temp);
    if(res1 < res2)
    {
        stu::print_array(array, array + 5);
    }
    else
    {
        stu::print_array(array1, array1 + 5);
    }
}

template <class Matrix, class T, class Contenier = std::vector<int>>
Contenier get_one_dimensional(Matrix m, int size1, int size2)
{
    std::vector<int*> v;
    for(int i = 0; i != size1; ++i )
    {
        for(int j = 0; j != size2; ++j)
        {
            v.push_back(&m[i][j]);
        }
    }
}

template <class Matrix>
void var26_2(Matrix m, int size1, int size2)
{
    std::vector<int*> v;
    for(int i = 0; i != size1; ++i )
    {
        for(int j = 0; j != size2; ++j)
        {
            v.push_back(&m[i][j]);
        }
    }
    auto min_el = **std::min_element(v.begin(),v.end(), [](int* a,  int* b){return *a < *b;});
    std::for_each(v.begin(), v.end(), [min_el](int* a){if(*a == 0){*a = min_el;};});




}


void test()
{
    auto matrix = new int[2][3]{{1,-2,0},{0,2,3}};
    get_one_dimensional(matrix, 2, 3);
    /*var26_2(matrix, 2, 3);
    for(int i = 0; i != 2; ++i)
    {
        for(int j = 0; j != 3; ++j)
        {
            std::cout << matrix[i][j];
        }
    }*/

}


#endif // TEST_H_INCLUDED
