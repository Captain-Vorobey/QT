#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
#include <algorithm>
#include "algorithms.h"

template <class Iter>
void __var_3_1(Iter first, Iter last)
{
    auto min_el = *std::min_element(first, last);
    auto counter = std::count(first, last, min_el);
    std::for_each(first, last, [counter](int& a){a += counter;});
    std::for_each(first, last, [](int a){std::cout << a <<" " ;});
}

template <class Iter>
void var_3_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    __var_3_1(first1, last1);
    std::cout<< std::endl;
    __var_3_1(first2, last2);

}

template <class Iter>
void __var_4_1(Iter first, Iter last)
{
    auto temp = stu::average(first, last);
    auto key = std::binary_search(first, last, temp);
    std::cout << temp << " " << key;

}

template <class Iter>
void var_4_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    __var_4_1(first1, last1);
    std::cout <<std::endl;
    __var_4_1(first2, last2);
}

template <class Iter>
int __var_5_1(Iter first, Iter last)
{
    auto max_el = *std::max_element(first, last);
    return std::count(first, last , max_el);

}

template <class Iter>
void var_5_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    auto res1 = __var_5_1(first1, last1);
    auto res2 = __var_5_1(first2, last2);
    if(res1 > res2)
    {
        std::for_each(first1, last1, [](int a){std::cout<< a << " ";});
        std::cout << res1;
    }
    else
    {
        std::for_each(first2, last2, [](int a){std::cout<< a << " ";});
        std::cout << res2;
    }
}

template <class Iter>
void var_7_1(Iter first1, Iter last1, Iter first2, Iter last2, int value)
{
    auto res1 = std::count(first1, last1, value);
    auto res2 = std::count(first2, last2, value);
    if(res1 < res2)
    {
        std::for_each(first1, last1, [](int a){std::cout<< a << " ";});
        std::cout << res1;
    }
    else
    {
        std::for_each(first2, last2, [](int a){std::cout<< a << " ";});
        std::cout << res2;
    }
}

template <class Iter>
void __var_8_1(Iter first, Iter last)
{
    auto min_el = *std::min_element(first, last);
    auto counter = std::count(first, last, min_el);
    std::for_each(first, last, [counter](int& a){a *= counter;});
    std::for_each(first, last, [](int a){std::cout << a <<" " ;});
}

template <class Iter>
void var_8_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    __var_8_1(first1, last1);
    std::cout<< std::endl;
    __var_8_1(first2, last2);
}

template <class Iter>
int __var_9_1(Iter first, Iter last)
{
    return std::count_if(first, last, [](int a){return a %2 == 0;});
}

template <class Iter>
void var_9_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    auto res1 = __var_9_1(first1, last1);
    auto res2 = __var_9_1(first2, last2);
     if(res1 > res2)
    {
        std::for_each(first1, last1, [](int a){std::cout<< a << " ";});
        std::cout << res1;
    }
    else
    {
        std::for_each(first2, last2, [](int a){std::cout<< a << " ";});
        std::cout << res2;
    }
}

template <class Iter>
void var_10_1(Iter first1, Iter last1, Iter first2, Iter last2, int value)
{
    auto res1 = std::count_if(first1, last1, [value](int a){return a < value;});
    auto res2 = std::count_if(first2, last2, [value](int a){return a < value;});
    if(res1 > res2)
    {
        std::for_each(first1, last1, [](int a){std::cout<< a << " ";});
        std::cout << res1;
    }
    else
    {
        std::for_each(first2, last2, [](int a){std::cout<< a << " ";});
        std::cout << res2;
    }
}

template <class Iter>
void var_21_1(Iter first1, Iter last1, Iter first2, Iter last2)
{
    auto res1 = std::count_if(first1, last1, [](int a){return a %2 != 0;});
    auto res2 = std::count_if(first2, last2, [](int a){return a %2 != 0;});
    if(res1 > res2)
    {
        std::for_each(first1, last1, [](int a){std::cout<< a << " ";});
        std::cout << res1;
    }
    else
    {
        std::for_each(first2, last2, [](int a){std::cout<< a << " ";});
        std::cout << res2;
    }
}

template <class Matrix>
void var21_2(Matrix m, int size1, int size2)
{
    std::vector<int*> v;
    for(int i = 0; i != size1; ++i, ++j)
    {
            v.push_back(&m[i][j]);
    }

}

#endif // TEST_H_INCLUDED
