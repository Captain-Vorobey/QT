#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <algorithm>
#include "predicate.h"
#include "binary_search.h"
int var26_1()
{
    int array[5]{1,0,0,0,5};
    int array1[5]{0,0,0,0,2};
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


/*void var26_2()
{
    int array[2][3]{{1, 2, -3},{0, 5, 0}};
    auto temp = *std::min_element(array, array + 5);
    std::cout << temp;
}
int test_binary_search()
{
    int arr[10]{1,3,5,7,10,11,15,17,20, 29};
    std::cout << binary_search_1(arr, 0, 10, 20);
}*/

void test()
{

    test_binary_search();
}


#endif // TEST_H_INCLUDED
