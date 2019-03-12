#include <iostream>
#include "algorithms.h"
#include "test.h"
#include "binary_search.h"
#include <algorithm>
#include "fuckreality.h"

/*template <class T1, class T2>
auto sum(T1 a, T2 b)->decltype(false ?  T1() : T2 ())
{
    return a + b;
}*/

auto main()->int
{

    /*int arr[10]{1,4,8,10,14,17,19,23,45,67};
    int* arr1 = new int [10]{1,4,8,10,14,17,19,23,45,67};
    //std::cout<< *binary_search_3(arr, arr + 10, 45);
    std::for_each(arr, arr + 10, [](int& a ){std::cout<< int (&a) << " ";});
    std::cout<<std::endl;
    std::for_each(arr1, arr1 + 10, [](int& a ){std::cout<< int (&a) << " ";});
    std::cout<< stu::sum<4, 9, 10>()<<std::endl;
    std::cout<< stu::is_pointer<int*>::value<< std::endl;
    std::cout << fuckToReal(5);
    std::cout << stu::GreatFuckingReality<0>::value <<std::endl;
    //decltype(4.0)a;
    auto a = (false ? 4 : 8);
    std::cout << sizeof(a);*/
    test();
    return 0;
}
