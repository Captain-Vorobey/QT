#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <algorithm>
#include "predicates.h"
#include "digits.h"
#include <vector>

namespace stu {

/*template <class BinaryPredicate>
void bubble_sort(int* array, int size, BinaryPredicate p)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = i + 1; j != size; ++j)
        {
            if(p(array[j], array[j + 1]))
            {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

bool f(int* first, int* last)
{
    auto result = bubble_sort(array, 10, [](int a, int b){return a < b;});

}*/

template <class Iterator, class UnaryPredicate>
bool none_of(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return false;
        }
    }
    return true;
}

template <class Iterator, class UnaryPredicate>
Iterator any_of(Iterator first, Iterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return first;
}

template <class T, class Iterator>
Iterator count_if(Iterator first, Iterator last, T value)
{
    T counter = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
           ++counter;
        }
        return counter;
    }
}

}

#endif // ALGORITHMS_H
