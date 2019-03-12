#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include <iostream>
#include "predicates.h"

namespace stu {

template <class Iterator>
Iterator min_element(Iterator first, Iterator last)
{
    Iterator min_el = first;
    for(; first != last; ++first)
    {
        if(*first < *min_el)
        {
            min_el = first;
        }
    }
    return min_el;
}

template <class T, class Iterator>
unsigned int count(Iterator first, Iterator last, T value)
{
    unsigned int counter = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++counter;
        }
    }
    return counter;
}

template <class Iterator, class Functor>
Functor for_each(Iterator first, Iterator last, Functor f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}

template <class Iterator, class T>
Iterator binary_search1(Iterator first, Iterator last, T key)
{
    Iterator not_found = last--;
    Iterator arr = first;
    int start = 0;
    int end = std::distance(first, last);
    int middle;
    while(first <= last)
    {
        middle = (start + end)  / 2;
        if(key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            if(key < arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                return arr + middle;
            }
        }
    }
    return not_found;
}

template <class Iterator, class T>
T binary_search(Iterator first, Iterator last, T key)
{
    Iterator not_found = last--;
    Iterator arr = first;
    int start = 0;
    int end = std::distance(first, last);
    int middle;
    T temp = 0;
    while(first <= last)
    {
        middle = (start + end)  / 2;
        if(key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            if(key < arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                arr + middle;
                ++temp;
                arr + middle == --last;
            }
        }
    }
    return temp;
}

}

#endif // ALGORITHMS_H
